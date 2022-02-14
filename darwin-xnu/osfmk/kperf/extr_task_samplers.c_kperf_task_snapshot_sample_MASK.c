
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* task_t ;
struct kperf_task_snapshot {int kptksn_system_time_in_terminated_threads; int kptksn_user_time_in_terminated_threads; int kptksn_pageins; int kptksn_suspend_count; int kptksn_flags; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {scalar_t__ trp_role; int trp_boosted; } ;
struct TYPE_5__ {scalar_t__ tep_darwinbg; } ;
struct TYPE_7__ {int total_system_time; int total_user_time; int pageins; int suspend_count; int bsd_info; TYPE_2__ requested_policy; TYPE_1__ effective_policy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__*,scalar_t__*,scalar_t__*) ;

void
FUNC_3(task_t VAR_11, struct kperf_task_snapshot *VAR_12)
{
 FUNC_0(VAR_9 | VAR_1);

 FUNC_1(VAR_12 != ((void*)0));

 VAR_12->kptksn_flags = 0;
 if (VAR_11->effective_policy.tep_darwinbg) {
  VAR_12->kptksn_flags |= VAR_5;
 }
 if (VAR_11->requested_policy.trp_role == VAR_10) {
  VAR_12->kptksn_flags |= VAR_8;
 }
 if (VAR_11->requested_policy.trp_boosted == 1) {
  VAR_12->kptksn_flags |= VAR_4;
 }
 VAR_12->kptksn_suspend_count = VAR_11->suspend_count;
 VAR_12->kptksn_pageins = VAR_11->pageins;
 VAR_12->kptksn_user_time_in_terminated_threads = VAR_11->total_user_time;
 VAR_12->kptksn_system_time_in_terminated_threads = VAR_11->total_system_time;

 FUNC_0(VAR_9 | VAR_0);
}
