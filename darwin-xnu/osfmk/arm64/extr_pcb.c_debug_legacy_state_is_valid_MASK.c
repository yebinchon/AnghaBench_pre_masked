
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int boolean_t ;
struct TYPE_5__ {scalar_t__* bcr; scalar_t__* bvr; scalar_t__* wcr; scalar_t__* wvr; } ;
typedef TYPE_1__ arm_legacy_debug_state_t ;
struct TYPE_6__ {size_t num_breakpoint_pairs; size_t num_watchpoint_pairs; } ;
typedef TYPE_2__ arm_debug_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 () ;

boolean_t
FUNC_1(arm_legacy_debug_state_t *VAR_3)
{
 arm_debug_info_t *VAR_4 = FUNC_0();
 uint32_t VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_4->num_breakpoint_pairs; VAR_5++) {
  if (0 != VAR_3->bcr[VAR_5] && VAR_2 <= VAR_3->bvr[VAR_5])
   return VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->num_watchpoint_pairs; VAR_5++) {
  if (0 != VAR_3->wcr[VAR_5] && VAR_2 <= VAR_3->wvr[VAR_5])
   return VAR_0;
 }
 return VAR_1;
}
