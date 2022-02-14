
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int thread_t ;
typedef int task_t ;
struct kperf_sample {int dummy; } ;
struct kperf_context {int cur_pid; int cur_task; int cur_thread; } ;


 int FUNC_0 (int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct kperf_sample*,struct kperf_context*,unsigned int,int ,int ,int) ;
 int FUNC_5 (struct kperf_sample*,int ,int) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((noinline))
void
FUNC_9(thread_t VAR_9)
{
 FUNC_0(VAR_2 | VAR_1, VAR_9, FUNC_3(VAR_9));


 struct kperf_sample VAR_10;
 FUNC_5(&VAR_10, 0, sizeof(struct kperf_sample));

 task_t VAR_11 = FUNC_2(VAR_9);

 if (FUNC_6(VAR_11) || FUNC_7(VAR_11)) {
  FUNC_0(VAR_2 | VAR_0, VAR_6);
  return;
 }


 struct kperf_context VAR_12 = {
  .cur_thread = VAR_9,
  .cur_task = VAR_11,
  .cur_pid = FUNC_8(VAR_11),
 };


 unsigned int VAR_13 = 0;
 uint32_t VAR_14 = FUNC_3(VAR_9);

 if (VAR_14 & VAR_8) {
  VAR_13 |= VAR_3;
 }
 if (VAR_14 & VAR_7) {
  VAR_13 |= VAR_5;
  VAR_13 |= VAR_4;
 }

 uint32_t VAR_15 = FUNC_1(VAR_14);

 int VAR_16 = FUNC_4(&VAR_10, &VAR_12, VAR_13, 0, 0, VAR_15);

 FUNC_0(VAR_2 | VAR_0, VAR_16);
}
