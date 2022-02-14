
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef size_t sfi_class_id_t ;
struct TYPE_6__ {int energy_billed_to_others; int energy_billed_to_me; int logical_writes; int physical_writes; int cpu_time_billed_to_others; int cpu_time_billed_to_me; int * sfi_wait_times; int interrupt_wakeups; int platform_idle_wakeups; int cpu_time; } ;
struct TYPE_5__ {int ledger; int task_energy; int task_metadata_writes; int task_invalidated_writes; int task_deferred_writes; int task_immediate_writes; int task_gpu_ns; int task_timer_wakeups_bin_2; int task_timer_wakeups_bin_1; int cpu_time_rqos_stats; int cpu_time_eqos_stats; int * task_io_stats; int low_mem_privileged_listener; int purged_memory_critical; int purged_memory_warn; int low_mem_notified_critical; int low_mem_notified_warn; int extmod_statistics; int ps_switch; int p_switch; int c_switch; int syscalls_unix; int syscalls_mach; int messages_received; int messages_sent; int cow_faults; int pageins; int faults; int total_runnable_time; int total_ptime; int total_system_time; int total_user_time; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_4__ VAR_2 ;

void
FUNC_2(task_t VAR_3, task_t VAR_4)
{
 FUNC_0(VAR_4 != VAR_3);

 VAR_3->total_user_time = VAR_4->total_user_time;
 VAR_3->total_system_time = VAR_4->total_system_time;
 VAR_3->total_ptime = VAR_4->total_ptime;
 VAR_3->total_runnable_time = VAR_4->total_runnable_time;
 VAR_3->faults = VAR_4->faults;
 VAR_3->pageins = VAR_4->pageins;
 VAR_3->cow_faults = VAR_4->cow_faults;
 VAR_3->messages_sent = VAR_4->messages_sent;
 VAR_3->messages_received = VAR_4->messages_received;
 VAR_3->syscalls_mach = VAR_4->syscalls_mach;
 VAR_3->syscalls_unix = VAR_4->syscalls_unix;
 VAR_3->c_switch = VAR_4->c_switch;
 VAR_3->p_switch = VAR_4->p_switch;
 VAR_3->ps_switch = VAR_4->ps_switch;
 VAR_3->extmod_statistics = VAR_4->extmod_statistics;
 VAR_3->low_mem_notified_warn = VAR_4->low_mem_notified_warn;
 VAR_3->low_mem_notified_critical = VAR_4->low_mem_notified_critical;
 VAR_3->purged_memory_warn = VAR_4->purged_memory_warn;
 VAR_3->purged_memory_critical = VAR_4->purged_memory_critical;
 VAR_3->low_mem_privileged_listener = VAR_4->low_mem_privileged_listener;
 *VAR_3->task_io_stats = *VAR_4->task_io_stats;
 VAR_3->cpu_time_eqos_stats = VAR_4->cpu_time_eqos_stats;
 VAR_3->cpu_time_rqos_stats = VAR_4->cpu_time_rqos_stats;
 VAR_3->task_timer_wakeups_bin_1 = VAR_4->task_timer_wakeups_bin_1;
 VAR_3->task_timer_wakeups_bin_2 = VAR_4->task_timer_wakeups_bin_2;
 VAR_3->task_gpu_ns = VAR_4->task_gpu_ns;
 VAR_3->task_immediate_writes = VAR_4->task_immediate_writes;
 VAR_3->task_deferred_writes = VAR_4->task_deferred_writes;
 VAR_3->task_invalidated_writes = VAR_4->task_invalidated_writes;
 VAR_3->task_metadata_writes = VAR_4->task_metadata_writes;
 VAR_3->task_energy = VAR_4->task_energy;


 FUNC_1(VAR_3->ledger, VAR_4->ledger, VAR_2.cpu_time);
 FUNC_1(VAR_3->ledger, VAR_4->ledger, VAR_2.platform_idle_wakeups);
 FUNC_1(VAR_3->ledger, VAR_4->ledger, VAR_2.interrupt_wakeups);





 FUNC_1(VAR_3->ledger, VAR_4->ledger, VAR_2.cpu_time_billed_to_me);
 FUNC_1(VAR_3->ledger, VAR_4->ledger, VAR_2.cpu_time_billed_to_others);
 FUNC_1(VAR_3->ledger, VAR_4->ledger, VAR_2.physical_writes);
 FUNC_1(VAR_3->ledger, VAR_4->ledger, VAR_2.logical_writes);
 FUNC_1(VAR_3->ledger, VAR_4->ledger, VAR_2.energy_billed_to_me);
 FUNC_1(VAR_3->ledger, VAR_4->ledger, VAR_2.energy_billed_to_others);
}
