
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
typedef int integer_t ;
struct TYPE_8__ {int* qos_pri; } ;
struct TYPE_6__ {int thep_qos; int thep_qos_ui_is_urgent; int thep_qos_relprio; scalar_t__ thep_terminated; } ;
struct TYPE_7__ {scalar_t__ sched_mode; int importance; int task_priority; int max_priority; scalar_t__ saved_mode; int sched_flags; TYPE_1__ effective_policy; int user_promotion_basepri; scalar_t__ policy_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 TYPE_4__ VAR_13 ;
 int FUNC_3 (int,int) ;

void
FUNC_4(
 thread_t VAR_14)
{
 integer_t VAR_15;

 if (VAR_14->policy_reset)
  return;

 if (VAR_14->sched_mode == VAR_10) {
  FUNC_2(VAR_14, VAR_1);
  return;
 } else if (VAR_14->effective_policy.thep_qos != VAR_8) {
  int VAR_16 = VAR_14->effective_policy.thep_qos;
  int VAR_17 = VAR_14->effective_policy.thep_qos_ui_is_urgent;
  int VAR_18 = -(VAR_14->effective_policy.thep_qos_relprio);
  int VAR_19;

  FUNC_1(VAR_16 >= 0 && VAR_16 < VAR_6);
  FUNC_1(VAR_18 <= 0 && VAR_18 >= VAR_7);

  VAR_15 = VAR_13.qos_pri[VAR_16];
  VAR_19 = FUNC_3(VAR_16, VAR_18);

  if (VAR_16 == VAR_9 && VAR_17 == 1) {

   VAR_19 += 1;
  }



  VAR_15 += VAR_19;
 } else {
  if (VAR_14->importance > VAR_3)
   VAR_15 = VAR_3;
  else if (VAR_14->importance < -VAR_3)
   VAR_15 = -VAR_3;
  else
   VAR_15 = VAR_14->importance;

  VAR_15 += VAR_14->task_priority;
 }

 VAR_15 = FUNC_0(VAR_15, VAR_14->user_promotion_basepri);
 if (VAR_15 > VAR_14->max_priority)
  VAR_15 = VAR_14->max_priority;
 else if (VAR_15 < VAR_5)
  VAR_15 = VAR_5;

 if (VAR_14->saved_mode == VAR_10 &&
     VAR_14->sched_flags & VAR_11)
  VAR_15 = VAR_2;

 if (VAR_14->effective_policy.thep_terminated == VAR_12) {







  if (VAR_15 < VAR_14->task_priority)
   VAR_15 = VAR_14->task_priority;
  if (VAR_15 < VAR_0)
   VAR_15 = VAR_0;
 }







 FUNC_2(VAR_14, VAR_15);
}
