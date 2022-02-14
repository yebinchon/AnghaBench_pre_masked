
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
typedef TYPE_2__* task_t ;
struct TYPE_10__ {int thread_set_state_count; } ;
struct TYPE_8__ {int thread_set_state_count; int thread_set_state_caller_count; } ;
struct TYPE_9__ {TYPE_1__ extmod_statistics; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_1 () ;
 TYPE_2__* FUNC_2 (scalar_t__) ;
 TYPE_4__ VAR_2 ;
 TYPE_2__* VAR_3 ;

void
FUNC_3(thread_t VAR_4)
{
 task_t VAR_5 = FUNC_1();
 task_t VAR_6;

 if ((VAR_5 == VAR_3) || (VAR_4 == VAR_1))
  return;

 VAR_6 = FUNC_2(VAR_4);

 if (VAR_6 == VAR_0)
  return;

 if (VAR_6 != VAR_5) {
  VAR_5->extmod_statistics.thread_set_state_caller_count++;
  VAR_6->extmod_statistics.thread_set_state_count++;
  FUNC_0(&VAR_2.thread_set_state_count);
 }
}
