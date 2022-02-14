
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
struct task_pend_token {int dummy; } ;
typedef int sched_mode_t ;
typedef int kern_return_t ;
typedef int integer_t ;
struct TYPE_10__ {scalar_t__ thrp_qos; } ;
struct TYPE_11__ {TYPE_1__ requested_policy; int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,struct task_pend_token*) ;
 int FUNC_5 (TYPE_2__*,struct task_pend_token*) ;
 int FUNC_6 (TYPE_2__*,int ,int ,struct task_pend_token*) ;

kern_return_t
FUNC_7(thread_t VAR_4,
                                 integer_t VAR_5,
                                 integer_t VAR_6)
{
 kern_return_t VAR_7 = VAR_1;
 struct task_pend_token VAR_8 = {};

 sched_mode_t VAR_9 = FUNC_0(VAR_5);

 FUNC_2(VAR_4);

 if (!VAR_4->active) {
  VAR_7 = VAR_2;
  goto unlock;
 }

 if (FUNC_1(VAR_4)) {
  VAR_7 = VAR_0;
  goto unlock;
 }


 if (VAR_4->requested_policy.thrp_qos != VAR_3)
  FUNC_5(VAR_4, &VAR_8);

 VAR_7 = FUNC_6(VAR_4, VAR_9, VAR_6, &VAR_8);

unlock:
 FUNC_3(VAR_4);

 FUNC_4(VAR_4, &VAR_8);

 return (VAR_7);
}
