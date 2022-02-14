
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int FUNC_0 (char,int) ;
 scalar_t__ FUNC_1 (char*,char) ;

void FUNC_2(signed char VAR_4[],signed char VAR_5[])
{
  int VAR_6;
  for(VAR_6=0;VAR_6<VAR_2;VAR_6++) {
    if(VAR_6!=VAR_1) {
      if(FUNC_1(VAR_5,VAR_4[VAR_6])>=0) {
        if(VAR_4[VAR_6]>=0 && VAR_4[VAR_6]<VAR_3 && VAR_4[VAR_6]!=VAR_0)
        {
          FUNC_0(VAR_4[VAR_6],VAR_6);
        }
      }
    }
  }
}
