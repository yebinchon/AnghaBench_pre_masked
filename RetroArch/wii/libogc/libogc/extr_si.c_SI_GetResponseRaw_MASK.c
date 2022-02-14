
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t s32 ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int * VAR_1 ;
 int ** VAR_2 ;
 int* VAR_3 ;

u32 FUNC_1(s32 VAR_4)
{
 u32 VAR_5,VAR_6;
 VAR_6 = 0;
 VAR_5 = FUNC_0(VAR_4);
 if(VAR_5&VAR_0) {
  VAR_2[VAR_4][0] = VAR_1[(VAR_4*3)+1];
  VAR_2[VAR_4][1] = VAR_1[(VAR_4*3)+2];
  VAR_3[VAR_4] = 1;
  VAR_6 = 1;
 }
 return VAR_6;
}
