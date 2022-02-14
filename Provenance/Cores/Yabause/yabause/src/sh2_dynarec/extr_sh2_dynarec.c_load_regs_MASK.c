
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char,int) ;

void FUNC_1(signed char VAR_4[],signed char VAR_5[],int VAR_6,int VAR_7,int VAR_8)
{
  int VAR_9;
  if(VAR_6==VAR_3) VAR_6=VAR_2;
  if(VAR_7==VAR_3) VAR_7=VAR_2;
  if(VAR_8==VAR_3) VAR_8=VAR_2;

  for(VAR_9=0;VAR_9<VAR_1;VAR_9++) {
    if(VAR_9!=VAR_0&&VAR_5[VAR_9]>=0) {
      if(VAR_4[VAR_9]!=VAR_5[VAR_9]) {
        if(VAR_5[VAR_9]==VAR_6||VAR_5[VAR_9]==VAR_7||VAR_5[VAR_9]==VAR_8)
        {
          FUNC_0(VAR_5[VAR_9],VAR_9);
        }
      }
    }
  }
}
