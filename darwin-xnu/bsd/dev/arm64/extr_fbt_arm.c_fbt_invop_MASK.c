
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fbtp_roffset; int fbtp_savedval; int fbtp_id; scalar_t__ fbtp_patchpoint; struct TYPE_5__* fbtp_hashnext; } ;
typedef TYPE_1__ fbt_probe_t ;
typedef int arm_saved_state_t ;
struct TYPE_6__ {int ss; } ;
typedef TYPE_2__ arm_context_t ;
struct TYPE_7__ {int cpu_dtrace_invop_underway; void* cpu_dtrace_caller; } ;


 TYPE_4__* VAR_0 ;
 size_t FUNC_0 (uintptr_t) ;
 int FUNC_1 (int ,uintptr_t,uintptr_t,uintptr_t,uintptr_t,uintptr_t) ;
 TYPE_1__** VAR_1 ;
 void* FUNC_2 (int *) ;
 uintptr_t FUNC_3 (int *,int) ;

int
FUNC_4(uintptr_t VAR_2, uintptr_t * VAR_3, uintptr_t VAR_4)
{
 fbt_probe_t *VAR_5 = VAR_1[FUNC_0(VAR_2)];

 for (; VAR_5 != ((void*)0); VAR_5 = VAR_5->fbtp_hashnext) {
  if ((uintptr_t) VAR_5->fbtp_patchpoint == VAR_2) {
   if (0 == VAR_0->cpu_dtrace_invop_underway) {
    VAR_0->cpu_dtrace_invop_underway = 1;


    if (VAR_5->fbtp_roffset == 0) {
     arm_saved_state_t *VAR_6 = (arm_saved_state_t *)(&((arm_context_t *)VAR_3)->ss);
     VAR_0->cpu_dtrace_caller = FUNC_2(VAR_6);
     FUNC_1(VAR_5->fbtp_id, FUNC_3(VAR_6, 0), FUNC_3(VAR_6, 1),
         FUNC_3(VAR_6, 2), FUNC_3(VAR_6, 3),FUNC_3(VAR_6, 4));
     VAR_0->cpu_dtrace_caller = 0;
    } else {
     arm_saved_state_t *VAR_7 = (arm_saved_state_t *)(&((arm_context_t *)VAR_3)->ss);

     VAR_0->cpu_dtrace_caller = FUNC_2(VAR_7);
     FUNC_1(VAR_5->fbtp_id, VAR_5->fbtp_roffset, VAR_4, 0, 0, 0);
     VAR_0->cpu_dtrace_caller = 0;
    }
    VAR_0->cpu_dtrace_invop_underway = 0;
   }






   return (VAR_5->fbtp_savedval);
  }
 }

 return (0);
}
