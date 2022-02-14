
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char,int) ;

void FUNC_1(signed char VAR_2,signed char VAR_3[],u32 VAR_4)
{
  int VAR_5;
  for(VAR_5=0;VAR_5<VAR_1;VAR_5++) {
    if(VAR_5!=VAR_0) {
      if((VAR_3[VAR_5]&63)==VAR_2) {
        if((VAR_4>>VAR_5)&1) {
          FUNC_0(VAR_2,VAR_5);
        }
      }
    }
  }
}
