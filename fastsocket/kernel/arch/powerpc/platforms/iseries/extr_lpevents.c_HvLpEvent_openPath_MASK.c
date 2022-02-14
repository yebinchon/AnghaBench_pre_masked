
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ xLpIndex; } ;
typedef scalar_t__ HvLpIndex ;
typedef size_t HvLpEvent_Type ;


 int FUNC_0 (scalar_t__,size_t) ;
 size_t VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__* VAR_2 ;
 int * VAR_3 ;

int FUNC_1(HvLpEvent_Type VAR_4, HvLpIndex VAR_5)
{
 if ((VAR_4 < VAR_0) &&
   VAR_2[VAR_4]) {
  if (VAR_5 == 0)
   VAR_5 = VAR_1.xLpIndex;
  FUNC_0(VAR_5, VAR_4);
  ++VAR_3[VAR_4];
  return 0;
 }
 return 1;
}
