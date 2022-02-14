
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_1__* thread_t ;
typedef scalar_t__ thread_continue_t ;
typedef int task_t ;
struct kperf_sample {int dummy; } ;
struct kperf_context {uintptr_t* starting_fp; int trigger_type; int cur_pid; int cur_task; TYPE_1__* cur_thread; } ;
struct TYPE_5__ {scalar_t__ last_made_runnable_time; scalar_t__ last_run_time; int system_timer; int user_timer; int runnable_timer; } ;


 int FUNC_0 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 struct kperf_sample* FUNC_2 () ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct kperf_sample*,struct kperf_context*,int ,unsigned int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__) ;

void
FUNC_10(thread_t VAR_8, thread_continue_t VAR_9,
  uintptr_t *VAR_10)
{

 if (VAR_8->last_made_runnable_time == VAR_4) {
  return;
 }

 if (VAR_8->last_made_runnable_time < VAR_8->last_run_time) {
  return;
 }


 uint64_t VAR_11 = FUNC_7(VAR_8);
 if (VAR_11 > VAR_7) {
  uint64_t VAR_12 = FUNC_4();
  FUNC_9(&VAR_8->runnable_timer, VAR_12);
  FUNC_9(&VAR_8->system_timer, VAR_12);

  uint64_t VAR_13 = FUNC_8(&VAR_8->runnable_timer);
  uint64_t VAR_14 = FUNC_8(&VAR_8->user_timer) +
    FUNC_8(&VAR_8->system_timer);

  FUNC_0(VAR_0, VAR_11, VAR_13, VAR_14);

  task_t VAR_15 = FUNC_1(VAR_8);
  struct kperf_context VAR_16 = {
   .cur_thread = VAR_8,
   .cur_task = VAR_15,
   .cur_pid = FUNC_6(VAR_15),
   .trigger_type = VAR_5,
   .starting_fp = VAR_10,
  };

  struct kperf_sample *VAR_17 = FUNC_2();
  if (!VAR_17) {
   return;
  }

  unsigned int VAR_18 = VAR_3;
  VAR_18 |= VAR_9 ? VAR_1 : 0;
  VAR_18 |= !FUNC_5() ? VAR_2 : 0;

  FUNC_3(VAR_17, &VAR_16, VAR_6, VAR_18);
 }
}
