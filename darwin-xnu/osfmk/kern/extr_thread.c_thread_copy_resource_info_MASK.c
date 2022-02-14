
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct TYPE_4__ {int * thread_io_stats; int t_threadledger; int syscalls_mach; int syscalls_unix; int vtimer_qos_save; int vtimer_rlim_save; int vtimer_prof_save; int vtimer_user_save; int runnable_timer; int system_timer_save; int system_timer; int user_timer_save; int user_timer; int precise_user_kernel_time; int ps_switch; int p_switch; int c_switch; } ;


 int FUNC_0 (int ,int ) ;

void
FUNC_1(
 thread_t VAR_0,
 thread_t VAR_1)
{
 VAR_0->c_switch = VAR_1->c_switch;
 VAR_0->p_switch = VAR_1->p_switch;
 VAR_0->ps_switch = VAR_1->ps_switch;
 VAR_0->precise_user_kernel_time = VAR_1->precise_user_kernel_time;
 VAR_0->user_timer = VAR_1->user_timer;
 VAR_0->user_timer_save = VAR_1->user_timer_save;
 VAR_0->system_timer = VAR_1->system_timer;
 VAR_0->system_timer_save = VAR_1->system_timer_save;
 VAR_0->runnable_timer = VAR_1->runnable_timer;
 VAR_0->vtimer_user_save = VAR_1->vtimer_user_save;
 VAR_0->vtimer_prof_save = VAR_1->vtimer_prof_save;
 VAR_0->vtimer_rlim_save = VAR_1->vtimer_rlim_save;
 VAR_0->vtimer_qos_save = VAR_1->vtimer_qos_save;
 VAR_0->syscalls_unix = VAR_1->syscalls_unix;
 VAR_0->syscalls_mach = VAR_1->syscalls_mach;
 FUNC_0(VAR_0->t_threadledger, VAR_1->t_threadledger);
 *VAR_0->thread_io_stats = *VAR_1->thread_io_stats;
}
