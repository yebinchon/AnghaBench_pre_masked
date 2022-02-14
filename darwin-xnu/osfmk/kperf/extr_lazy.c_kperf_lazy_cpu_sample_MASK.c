
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_1__* thread_t ;
typedef int task_t ;
struct kperf_sample {int dummy; } ;
struct kperf_context {int starting_fp; int trigger_type; int cur_pid; int cur_task; TYPE_1__* cur_thread; } ;
typedef TYPE_2__* processor_t ;
struct TYPE_7__ {scalar_t__ kperf_last_sample_time; } ;
struct TYPE_6__ {int sched_pri; int system_timer; int user_timer; int runnable_timer; } ;


 int FUNC_0 (int ,scalar_t__,scalar_t__,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 struct kperf_sample* FUNC_4 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (struct kperf_sample*,struct kperf_context*,int ,unsigned int) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,scalar_t__) ;

void
FUNC_11(thread_t VAR_6, unsigned int VAR_7, bool VAR_8)
{
 FUNC_1(FUNC_7() == VAR_0);


 processor_t VAR_9 = FUNC_2();
 uint64_t VAR_10 = FUNC_6();
 uint64_t VAR_11 = VAR_10 - VAR_9->kperf_last_sample_time;
 if (VAR_11 > VAR_5) {
  VAR_9->kperf_last_sample_time = VAR_10;
  FUNC_10(&VAR_6->runnable_timer, VAR_10);
  FUNC_10(&VAR_6->system_timer, VAR_10);

  uint64_t VAR_12 = FUNC_9(&VAR_6->runnable_timer);
  uint64_t VAR_13 = FUNC_9(&VAR_6->user_timer) +
    FUNC_9(&VAR_6->system_timer);

  FUNC_0(VAR_1, VAR_13, VAR_12,
    VAR_6->sched_pri, VAR_8 ? 1 : 0);

  task_t VAR_14 = FUNC_3(VAR_6);
  struct kperf_context VAR_15 = {
   .cur_thread = VAR_6,
   .cur_task = VAR_14,
   .cur_pid = FUNC_8(VAR_14),
   .trigger_type = VAR_3,
   .starting_fp = 0,
  };

  struct kperf_sample *VAR_16 = FUNC_4();
  if (!VAR_16) {
   return;
  }

  FUNC_5(VAR_16, &VAR_15, VAR_4,
    VAR_2 | VAR_7);
 }
}
