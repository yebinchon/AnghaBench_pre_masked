
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;
typedef double** Mtx ;



void FUNC_0(Mtx VAR_0)
{
 s32 VAR_1,VAR_2;

 for(VAR_1=0;VAR_1<3;VAR_1++) {
  for(VAR_2=0;VAR_2<4;VAR_2++) {
   if(VAR_1==VAR_2) VAR_0[VAR_1][VAR_2] = 1.0;
   else VAR_0[VAR_1][VAR_2] = 0.0;
  }
 }
}
