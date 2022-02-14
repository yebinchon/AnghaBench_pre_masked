
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char,int) ;

void FUNC_1(signed char VAR_3[],u32 VAR_4)
{
  int VAR_5;
  for(VAR_5=0;VAR_5<VAR_2;VAR_5++) {
    if(VAR_5!=VAR_1) {
      if(VAR_3[VAR_5]>=0) {
        if(VAR_3[VAR_5]!=VAR_0) {
          if((VAR_4>>VAR_5)&1) {
            FUNC_0(VAR_3[VAR_5],VAR_5);
          }
        }
      }
    }
  }
}
