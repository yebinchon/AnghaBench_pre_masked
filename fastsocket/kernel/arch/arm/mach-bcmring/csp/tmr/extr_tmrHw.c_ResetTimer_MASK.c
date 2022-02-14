
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t tmrHw_ID_t ;
struct TYPE_2__ {int CurrentValue; int InterruptClear; scalar_t__ RawInterruptStatus; int Control; scalar_t__ BackgroundLoad; scalar_t__ LoadValue; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(tmrHw_ID_t VAR_2
) {

 VAR_0[VAR_2].LoadValue = 0;
 VAR_0[VAR_2].CurrentValue = 0xFFFFFFFF;
 VAR_0[VAR_2].Control = 0;
 VAR_0[VAR_2].BackgroundLoad = 0;

 VAR_0[VAR_2].Control |= VAR_1;

 if (VAR_0[VAR_2].RawInterruptStatus) {
  VAR_0[VAR_2].InterruptClear = 0xFFFFFFFF;
 }
}
