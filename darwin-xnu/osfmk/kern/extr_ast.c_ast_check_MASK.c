
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef TYPE_2__* processor_t ;
typedef scalar_t__ perfcontrol_class_t ;
typedef int boolean_t ;
typedef int ast_t ;
struct TYPE_14__ {scalar_t__ state; scalar_t__ current_perfctl_class; int current_recommended_pset_type; int current_sfi_class; int current_pri; TYPE_1__* active_thread; } ;
struct TYPE_13__ {int sfi_class; int sched_pri; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;

void
FUNC_12(processor_t VAR_4)
{
 if (VAR_4->state != VAR_2 &&
     VAR_4->state != VAR_3)
  return;

 thread_t VAR_5 = VAR_4->active_thread;

 FUNC_0(VAR_5 == FUNC_4());

 FUNC_10(VAR_5);





 FUNC_2(VAR_5);

 boolean_t VAR_6 = 0;
 VAR_4->current_pri = VAR_5->sched_pri;
 VAR_4->current_sfi_class = VAR_5->sfi_class = FUNC_8(VAR_5);
 VAR_4->current_recommended_pset_type = FUNC_7(VAR_5);
 perfcontrol_class_t VAR_7 = FUNC_9(VAR_5);
 if (VAR_7 != VAR_4->current_perfctl_class) {





     VAR_6 = 1;
 }
 VAR_4->current_perfctl_class = VAR_7;

 ast_t VAR_8;

 if ((VAR_8 = FUNC_3(VAR_4, VAR_0)) != VAR_0)
  FUNC_1(VAR_8);

 FUNC_11(VAR_5);

 if (VAR_6) {
     FUNC_6(VAR_1,
      FUNC_5(), 0, VAR_5);
 }
}
