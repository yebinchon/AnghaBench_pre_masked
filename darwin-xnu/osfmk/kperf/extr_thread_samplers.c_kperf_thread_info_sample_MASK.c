
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
struct kperf_thread_info {int kpthi_runmode; int kpthi_dq_addr; scalar_t__ kpthi_tid; int kpthi_pid; } ;
struct kperf_context {int cur_pid; int cur_thread; } ;


 int FUNC_0 (int,uintptr_t) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

void
FUNC_5(struct kperf_thread_info *VAR_2, struct kperf_context *VAR_3)
{
 thread_t VAR_4 = VAR_3->cur_thread;

 FUNC_0(VAR_1, (uintptr_t)FUNC_4(VAR_4));

 VAR_2->kpthi_pid = VAR_3->cur_pid;
 VAR_2->kpthi_tid = FUNC_4(VAR_4);
 VAR_2->kpthi_dq_addr = FUNC_3(VAR_4);
 VAR_2->kpthi_runmode = FUNC_2(VAR_4);

 FUNC_1(VAR_1 | VAR_0);
}
