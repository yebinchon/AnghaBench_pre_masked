
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct kperf_thread_scheduling {int kpthsc_sched_priority; int kpthsc_state; int kpthsc_effective_qos; int kpthsc_requested_qos; int kpthsc_requested_qos_override; int kpthsc_runnable_time; scalar_t__ kpthsc_requested_qos_sync_ipc_override; scalar_t__ kpthsc_requested_qos_ipc_override; scalar_t__ kpthsc_requested_qos_promote; scalar_t__ kpthsc_effective_latency_qos; scalar_t__ kpthsc_base_priority; int kpthsc_system_time; int kpthsc_user_time; } ;


 int FUNC_0 (int ,int,...) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct kperf_thread_scheduling *VAR_5)
{
 FUNC_3(VAR_5 != ((void*)0));

 FUNC_0(VAR_3, VAR_5->kpthsc_user_time,
   VAR_5->kpthsc_system_time,
   (((uint64_t)VAR_5->kpthsc_base_priority) << 48)
   | ((uint64_t)VAR_5->kpthsc_sched_priority << 32)
   | ((uint64_t)(VAR_5->kpthsc_state & 0xff) << 24)
   | (VAR_5->kpthsc_effective_qos << 6)
   | (VAR_5->kpthsc_requested_qos << 3)
   | VAR_5->kpthsc_requested_qos_override,
   ((uint64_t)VAR_5->kpthsc_effective_latency_qos << 61)
   | ((uint64_t)VAR_5->kpthsc_requested_qos_promote << 58)
   | ((uint64_t)VAR_5->kpthsc_requested_qos_ipc_override << 55)
   | ((uint64_t)VAR_5->kpthsc_requested_qos_sync_ipc_override << 52)
   );
 FUNC_0(VAR_4, VAR_5->kpthsc_runnable_time);
}
