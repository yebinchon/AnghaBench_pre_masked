
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rusage_info_child {int ri_child_elapsed_abstime; int ri_child_pageins; int ri_child_interrupt_wkups; int ri_child_pkg_idle_wkups; int ri_child_system_time; int ri_child_user_time; } ;
struct TYPE_3__ {scalar_t__ ri_child_elapsed_abstime; scalar_t__ ri_proc_start_abstime; scalar_t__ ri_proc_exit_abstime; scalar_t__ ri_child_pageins; scalar_t__ ri_pageins; scalar_t__ ri_child_interrupt_wkups; scalar_t__ ri_interrupt_wkups; scalar_t__ ri_child_pkg_idle_wkups; scalar_t__ ri_pkg_idle_wkups; scalar_t__ ri_child_system_time; scalar_t__ ri_system_time; scalar_t__ ri_child_user_time; scalar_t__ ri_user_time; } ;
typedef TYPE_1__ rusage_info_current ;



void
FUNC_0(struct rusage_info_child *VAR_0, rusage_info_current *VAR_1)
{
 VAR_0->ri_child_user_time += (VAR_1->ri_user_time +
     VAR_1->ri_child_user_time);
 VAR_0->ri_child_system_time += (VAR_1->ri_system_time +
     VAR_1->ri_child_system_time);
 VAR_0->ri_child_pkg_idle_wkups += (VAR_1->ri_pkg_idle_wkups +
     VAR_1->ri_child_pkg_idle_wkups);
 VAR_0->ri_child_interrupt_wkups += (VAR_1->ri_interrupt_wkups +
     VAR_1->ri_child_interrupt_wkups);
 VAR_0->ri_child_pageins += (VAR_1->ri_pageins +
     VAR_1->ri_child_pageins);
 VAR_0->ri_child_elapsed_abstime += ((VAR_1->ri_proc_exit_abstime -
  VAR_1->ri_proc_start_abstime) + VAR_1->ri_child_elapsed_abstime);
}
