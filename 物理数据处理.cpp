#include <iostream>
#include<stdio.h>
#define M 5
//平均数（组，数，倍数） 
void pingjun(int group,int num,int ploidy=1){
	double v[group*num];
	for(int i=0;i<group*num;i++){
		scanf("%lf",v+i);
	}	
	for(int i=0;i<group*num;i+=num)
		printf("第%d组平均数为%5.2lf\n",i/4+1,(v[i]+v[i+1]+v[i+2]+v[i+3])/(num*ploidy));
}
const double pi=3.141592653589793;
int main(){
	double v[M],a[M],b[M],u[M];
	for(int i=0;i<M;i++){
		u[i]=5.0*(i+1);
		scanf("%lf",v+i);
	}
		

	for(int i=0;i<M;i++){
		a[i]=u[i]*u[i]*0.48+40.93+0.76+0.321;
		b[i]=v[i]*v[i]*259.8/(4*3.14*3.14);
	}
		
//		printf("第%d组数为%8lf\n",i+1,v[i]*v[i]*0.48+40.93+0.76+0.321);
	for(int i=0;i<M;i++)
		printf("第%d组数为%8lf\n",i+1,(a[i]-b[i])/a[i]);
	
	return 0;
}
//2.78
//3.5854
//4.6511
//5.8306
//7.0484
