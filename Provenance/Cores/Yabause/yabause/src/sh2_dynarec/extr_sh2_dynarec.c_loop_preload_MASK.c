
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char,int) ;
 scalar_t__ FUNC_2 (char*,char) ;

__attribute__((used)) static void FUNC_3(signed char VAR_3[],signed char VAR_4[])
{
  int VAR_5;
  for(VAR_5=0;VAR_5<VAR_1;VAR_5++) {
    if(VAR_5!=VAR_0) {
      if(VAR_3[VAR_5]!=VAR_4[VAR_5]) {
        if(VAR_4[VAR_5]>=0) {
          if(FUNC_2(VAR_3,VAR_4[VAR_5])<0) {
            FUNC_0("loop preload:\n");

            if(VAR_4[VAR_5]<VAR_2)
            {
              FUNC_1(VAR_4[VAR_5],VAR_5);
            }
          }
        }
      }
    }
  }
}
