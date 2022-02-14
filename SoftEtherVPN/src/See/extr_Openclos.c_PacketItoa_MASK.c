
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int* PUCHAR ;



void FUNC_0(UINT VAR_0,PUCHAR VAR_1){
int VAR_2;

 for(VAR_2=0;VAR_2<20;VAR_2+=2){
  VAR_1[18-VAR_2]=(VAR_0%10)+48;
  VAR_1[19-VAR_2]=0;
  VAR_0/=10;
 }

}
