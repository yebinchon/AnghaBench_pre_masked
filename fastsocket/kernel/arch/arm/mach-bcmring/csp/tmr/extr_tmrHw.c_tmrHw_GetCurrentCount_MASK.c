
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef size_t tmrHw_ID_t ;
struct TYPE_2__ {int Control; scalar_t__ CurrentValue; scalar_t__ BackgroundLoad; } ;


 TYPE_1__* VAR_0 ;

 int VAR_1 ;


 scalar_t__ VAR_2 ;

uint32_t FUNC_0(tmrHw_ID_t VAR_3
) {

 switch (VAR_0[VAR_3].Control & VAR_1) {
 case 130:
  if (VAR_0[VAR_3].CurrentValue) {
   return VAR_2 - VAR_0[VAR_3].CurrentValue;
  }
  break;
 case 128:
 case 129:
  return VAR_0[VAR_3].BackgroundLoad -
      VAR_0[VAR_3].CurrentValue;
 }
 return 0;
}
