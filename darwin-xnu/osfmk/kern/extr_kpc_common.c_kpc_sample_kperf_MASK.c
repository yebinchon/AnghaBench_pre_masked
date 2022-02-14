
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int thread_t ;
typedef int task_t ;
struct kperf_sample {int dummy; } ;
struct kperf_context {int trigger_id; int trigger_type; int cur_pid; int cur_task; int cur_thread; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct kperf_sample*,struct kperf_context*,int ,int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(uint32_t VAR_5)
{
 struct kperf_sample VAR_6;

 FUNC_0(VAR_2 | VAR_1);

 thread_t VAR_7 = FUNC_2();
 task_t VAR_8 = FUNC_3(VAR_7);

 struct kperf_context VAR_9 = {
  .cur_thread = VAR_7,
  .cur_task = VAR_8,
  .cur_pid = FUNC_5(VAR_8),
  .trigger_type = VAR_4,
  .trigger_id = 0,
 };

 int VAR_10 = FUNC_4(&VAR_6, &VAR_9, VAR_5, VAR_3);

 FUNC_1(VAR_2 | VAR_0, VAR_10);
}
