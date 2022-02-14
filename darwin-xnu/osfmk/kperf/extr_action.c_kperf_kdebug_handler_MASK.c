
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int thread_t ;
typedef int task_t ;
struct kperf_sample {int dummy; } ;
struct kperf_context {uintptr_t* starting_fp; int trigger_id; int trigger_type; int cur_pid; int cur_task; int cur_thread; } ;
typedef int kern_return_t ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 struct kperf_sample* FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct kperf_sample*,struct kperf_context*,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;

void
FUNC_10(uint32_t VAR_7, uintptr_t *VAR_8)
{
 uint32_t VAR_9 = VAR_5;
 struct kperf_sample *VAR_10 = ((void*)0);
 kern_return_t VAR_11 = VAR_2;
 int VAR_12;

 if (!FUNC_5(VAR_7)) {
  return;
 }

 FUNC_0(VAR_3 | VAR_1, VAR_7);

 thread_t VAR_13 = FUNC_1();
 task_t VAR_14 = FUNC_2(VAR_13);
 struct kperf_context VAR_15 = {
  .cur_thread = VAR_13,
  .cur_task = VAR_14,
  .cur_pid = FUNC_9(VAR_14),
  .trigger_type = VAR_6,
  .trigger_id = 0,
 };

 VAR_12 = FUNC_8(0);

 VAR_10 = FUNC_3();

 if (!FUNC_7()) {
  VAR_9 |= VAR_4;
  VAR_15.starting_fp = VAR_8;
 }

 VAR_11 = FUNC_6(VAR_10, &VAR_15, FUNC_4(), VAR_9);

 FUNC_8(VAR_12);
 FUNC_0(VAR_3 | VAR_0, VAR_11);
}
