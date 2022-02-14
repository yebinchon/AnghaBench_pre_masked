
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_6__* thread_t ;
typedef scalar_t__ task_t ;
typedef scalar_t__ kern_return_t ;
typedef int cpu_data_t ;
struct TYPE_14__ {int count; int flavor; } ;
struct TYPE_16__ {TYPE_2__ nsh; } ;
struct TYPE_13__ {int count; int flavor; } ;
struct TYPE_15__ {TYPE_1__ ash; } ;
struct TYPE_19__ {TYPE_4__ ns; TYPE_3__ ss; } ;
typedef TYPE_7__ arm_context_t ;
struct TYPE_17__ {TYPE_7__* contextData; TYPE_4__* uNeon; TYPE_3__* upcb; int perfctrl_state; scalar_t__ cthread_data; scalar_t__ cthread_self; scalar_t__ preemption_count; int * CpuDatap; } ;
struct TYPE_18__ {TYPE_5__ machine; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *,int) ;
 TYPE_6__* FUNC_1 () ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (char*,TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_7__*) ;

kern_return_t
FUNC_7(
        thread_t VAR_12,
        task_t VAR_13)
{
 arm_context_t *VAR_14 = ((void*)0);
 kern_return_t VAR_15 = VAR_9;



                                                       ;

 if (FUNC_1() != VAR_12) {
  VAR_12->machine.CpuDatap = (cpu_data_t *)0;
 }
 VAR_12->machine.preemption_count = 0;
 VAR_12->machine.cthread_self = 0;
 VAR_12->machine.cthread_data = 0;


 if (VAR_13 != VAR_10) {

  VAR_12->machine.contextData = (arm_context_t *)FUNC_5(VAR_11);

  if (!VAR_12->machine.contextData) {
   return VAR_8;
  }

  VAR_12->machine.upcb = &VAR_12->machine.contextData->ss;
  VAR_12->machine.uNeon = &VAR_12->machine.contextData->ns;

  if (FUNC_4(VAR_13)) {
   VAR_12->machine.upcb->ash.flavor = VAR_6;
   VAR_12->machine.upcb->ash.count = VAR_7;
   VAR_12->machine.uNeon->nsh.flavor = VAR_2;
   VAR_12->machine.uNeon->nsh.count = VAR_3;
  } else {
   VAR_12->machine.upcb->ash.flavor = VAR_4;
   VAR_12->machine.upcb->ash.count = VAR_5;
   VAR_12->machine.uNeon->nsh.flavor = VAR_0;
   VAR_12->machine.uNeon->nsh.count = VAR_1;
  }
 } else {
  VAR_12->machine.upcb = ((void*)0);
  VAR_12->machine.uNeon = ((void*)0);
  VAR_12->machine.contextData = ((void*)0);
 }

 FUNC_0(&VAR_12->machine.perfctrl_state, sizeof(VAR_12->machine.perfctrl_state));

 VAR_15 = FUNC_3(VAR_12);

 if (VAR_15 != VAR_9) {
  VAR_14 = VAR_12->machine.contextData;
  VAR_12->machine.upcb = ((void*)0);
  VAR_12->machine.uNeon = ((void*)0);
  VAR_12->machine.contextData = ((void*)0);
  FUNC_6(VAR_11, VAR_14);
 }

 return VAR_15;
}
