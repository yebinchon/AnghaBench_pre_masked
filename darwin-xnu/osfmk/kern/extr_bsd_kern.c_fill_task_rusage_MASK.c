
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct task_power_info {int total_system; int total_user; int task_interrupt_wakeups; int task_platform_idle_wakeups; } ;
struct TYPE_11__ {int ri_pageins; int ri_wired_size; int ri_resident_size; int ri_phys_footprint; int ri_system_time; int ri_user_time; int ri_interrupt_wkups; int ri_pkg_idle_wkups; } ;
typedef TYPE_2__ rusage_info_current ;
typedef int ledger_amount_t ;
struct TYPE_12__ {int wired_mem; int phys_mem; int phys_footprint; } ;
struct TYPE_10__ {int pageins; int ledger; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int *) ;
 TYPE_6__ VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,struct task_power_info*,int *,int *) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(task_t VAR_2, rusage_info_current *VAR_3)
{
 struct task_power_info VAR_4;

 FUNC_0(VAR_2 != VAR_0);
 FUNC_2(VAR_2);

 FUNC_3(VAR_2, &VAR_4, ((void*)0), ((void*)0));
 VAR_3->ri_pkg_idle_wkups = VAR_4.task_platform_idle_wakeups;
 VAR_3->ri_interrupt_wkups = VAR_4.task_interrupt_wakeups;
 VAR_3->ri_user_time = VAR_4.total_user;
 VAR_3->ri_system_time = VAR_4.total_system;

 FUNC_1(VAR_2->ledger, VAR_1.phys_footprint,
                    (ledger_amount_t *)&VAR_3->ri_phys_footprint);
 FUNC_1(VAR_2->ledger, VAR_1.phys_mem,
                    (ledger_amount_t *)&VAR_3->ri_resident_size);
 FUNC_1(VAR_2->ledger, VAR_1.wired_mem,
                    (ledger_amount_t *)&VAR_3->ri_wired_size);

 VAR_3->ri_pageins = VAR_2->pageins;

 FUNC_4(VAR_2);
 return (0);
}
