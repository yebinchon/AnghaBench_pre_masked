
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kperf_task_snapshot {int kptksn_flags; int kptksn_suspend_count; int kptksn_pageins; int kptksn_user_time_in_terminated_threads; int kptksn_system_time_in_terminated_threads; } ;


 int FUNC_0 (int ,int,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct kperf_task_snapshot *VAR_3)
{
 FUNC_5(VAR_3 != ((void*)0));


 FUNC_0(VAR_0, VAR_3->kptksn_flags,
          FUNC_2(VAR_3->kptksn_suspend_count) |
          FUNC_1(VAR_3->kptksn_pageins),
          VAR_3->kptksn_user_time_in_terminated_threads,
          VAR_3->kptksn_system_time_in_terminated_threads);
}
