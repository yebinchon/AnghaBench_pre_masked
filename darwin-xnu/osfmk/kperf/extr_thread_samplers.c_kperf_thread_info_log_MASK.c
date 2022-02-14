
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kperf_thread_info {int kpthi_runmode; int kpthi_dq_addr; int kpthi_tid; int kpthi_pid; } ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_0 ;

void
FUNC_1(struct kperf_thread_info *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->kpthi_pid, VAR_1->kpthi_tid ,
                        VAR_1->kpthi_dq_addr, VAR_1->kpthi_runmode);
}
