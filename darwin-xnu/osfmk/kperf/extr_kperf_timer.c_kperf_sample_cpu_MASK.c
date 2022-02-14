
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int thread_t ;
typedef int task_t ;
struct kperf_timer {int pending_cpus; int actionid; } ;
struct kperf_sample {int sample_time; } ;
struct kperf_context {unsigned int trigger_id; int cur_thread; int trigger_type; int cur_pid; int cur_task; } ;
struct TYPE_2__ {int logical_cpu_max; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 struct kperf_sample* FUNC_8 () ;
 int FUNC_9 (struct kperf_sample*,struct kperf_context*,int ,int) ;
 unsigned int FUNC_10 () ;
 int * VAR_11 ;
 int VAR_12 ;
 int FUNC_11 () ;
 TYPE_1__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14(struct kperf_timer *VAR_16, bool VAR_17,
  bool VAR_18)
{
 FUNC_3(VAR_16 != ((void*)0));


 FUNC_0(VAR_4 | VAR_1, 0);

 int VAR_19 = FUNC_5();

 struct kperf_sample *VAR_20 = FUNC_8();





 thread_t VAR_21 = FUNC_6();
 task_t VAR_22 = FUNC_7(VAR_21);
 struct kperf_context VAR_23 = {
  .cur_thread = VAR_21,
  .cur_task = VAR_22,
  .cur_pid = FUNC_12(VAR_22),
  .trigger_type = VAR_10,
  .trigger_id = (unsigned int)(VAR_16 - VAR_12),
 };

 if (VAR_23.trigger_id == VAR_15 && VAR_19 < VAR_13.logical_cpu_max) {
  VAR_11[VAR_19] = FUNC_13(VAR_23.cur_thread);
 }


 unsigned int VAR_24 = FUNC_10();
 if (VAR_24 == VAR_2) {
  FUNC_1(VAR_4 | VAR_0, VAR_8);
  return;
 } else if (VAR_24 == VAR_3) {
  FUNC_1(VAR_4 | VAR_0, VAR_9);
  return;
 }


 int VAR_25 = FUNC_9(VAR_20, &VAR_23, VAR_16->actionid,
   VAR_6 | (VAR_17 ? VAR_7 : 0) |
   (VAR_18 ? VAR_5 : 0));


 FUNC_1(VAR_4 | VAR_0, VAR_25);

 (void)FUNC_4(&VAR_16->pending_cpus,
   ~(FUNC_2(1) << VAR_19), VAR_14);
}
