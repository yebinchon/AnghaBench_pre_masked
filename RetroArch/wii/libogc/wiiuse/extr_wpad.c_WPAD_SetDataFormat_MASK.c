
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int s32 ;
struct TYPE_2__ {int data_fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int ** VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__* VAR_10 ;

s32 FUNC_3(s32 VAR_11, s32 VAR_12)
{
 u32 VAR_13;
 s32 VAR_14;
 int VAR_15;

 if(VAR_11 == VAR_1) {
  for(VAR_15=VAR_0; VAR_15<VAR_6; VAR_15++)
   if((VAR_14 = FUNC_3(VAR_15, VAR_12)) < VAR_4)
    return VAR_14;
  return VAR_4;
 }

 if(VAR_11<VAR_0 || VAR_11>=VAR_6) return VAR_3;

 FUNC_0(VAR_13);
 if(VAR_9==VAR_7) {
  FUNC_1(VAR_13);
  return VAR_5;
 }

 if(VAR_8[VAR_11]!=((void*)0)) {
  switch(VAR_12) {
   case 130:
   case 129:
   case 128:
    VAR_10[VAR_11].data_fmt = VAR_12;
    FUNC_2(VAR_11);
    break;
   default:
    FUNC_1(VAR_13);
    return VAR_2;
  }
 }
 FUNC_1(VAR_13);
 return VAR_4;
}
