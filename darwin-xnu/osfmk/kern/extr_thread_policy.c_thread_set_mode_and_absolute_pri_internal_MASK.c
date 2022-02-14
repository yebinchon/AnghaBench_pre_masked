
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef TYPE_2__* task_pend_token_t ;
typedef int spl_t ;
typedef scalar_t__ sched_mode_t ;
typedef int kern_return_t ;
typedef scalar_t__ integer_t ;
struct TYPE_9__ {int tpt_update_thread_sfi; } ;
struct TYPE_8__ {scalar_t__ sched_mode; scalar_t__ saved_mode; scalar_t__ max_priority; scalar_t__ task_priority; scalar_t__ importance; scalar_t__ policy_reset; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static kern_return_t
FUNC_5(thread_t VAR_7,
                                          sched_mode_t VAR_8,
                                          integer_t VAR_9,
                                          task_pend_token_t VAR_10)
{
 kern_return_t VAR_11 = VAR_2;

 spl_t VAR_12 = FUNC_0();
 FUNC_2(VAR_7);


 if ((VAR_7->sched_mode == VAR_6) ||
     (VAR_7->saved_mode == VAR_6)) {
  VAR_11 = VAR_1;
  goto unlock;
 }

 if (VAR_7->policy_reset) {
  VAR_11 = VAR_2;
  goto unlock;
 }

 sched_mode_t VAR_13 = VAR_7->sched_mode;
 if (VAR_9 >= VAR_7->max_priority)
  VAR_9 = VAR_7->max_priority - VAR_7->task_priority;
 else if (VAR_9 >= VAR_4)
  VAR_9 -= VAR_4;
 else if (VAR_9 >= VAR_5)
  VAR_9 -= VAR_5;
 else
  VAR_9 -= VAR_0;

 VAR_9 += VAR_7->task_priority;

 if (VAR_9 > VAR_7->max_priority)
  VAR_9 = VAR_7->max_priority;
 else if (VAR_9 < VAR_3)
  VAR_9 = VAR_3;

 VAR_7->importance = VAR_9 - VAR_7->task_priority;

 FUNC_3(VAR_7, VAR_8);

 if (VAR_8 != VAR_13)
  VAR_10->tpt_update_thread_sfi = 1;

unlock:
 FUNC_4(VAR_7);
 FUNC_1(VAR_12);

 return VAR_11;
}
