
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef TYPE_2__* processor_t ;
struct TYPE_8__ {int current_perfctl_class; int current_recommended_pset_type; int current_sfi_class; int current_pri; } ;
struct TYPE_7__ {int sfi_class; int sched_pri; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(processor_t VAR_0, thread_t VAR_1)
{
    VAR_0->current_pri = VAR_1->sched_pri;
    VAR_0->current_sfi_class = VAR_1->sfi_class;
    VAR_0->current_recommended_pset_type = FUNC_0(VAR_1);
    VAR_0->current_perfctl_class = FUNC_1(VAR_1);
}
