
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int unaligned_u64 ;
typedef int uint64_t ;
typedef void* uint32_t ;
typedef TYPE_4__* task_t ;
struct task_delta_snapshot_v2 {int tds_latency_qos; void* tds_did_throttle; void* tds_was_throttled; int tds_cow_faults; int tds_pageins; int tds_faults; int tds_suspend_count; int tds_max_resident_size; int tds_task_size; int tds_system_time_in_terminated_threads; int tds_user_time_in_terminated_threads; int tds_ss_flags; int tds_unique_pid; } ;
typedef scalar_t__ mach_vm_address_t ;
typedef int kern_return_t ;
typedef int kcdata_descriptor_t ;
typedef int boolean_t ;
typedef int asid ;
struct TYPE_13__ {int tep_latency_qos; } ;
struct TYPE_16__ {TYPE_3__* map; TYPE_1__ effective_policy; int cow_faults; int pageins; int faults; int suspend_count; int total_system_time; int total_user_time; } ;
struct TYPE_15__ {TYPE_2__* pmap; } ;
struct TYPE_14__ {void* asid; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,scalar_t__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (void*,void**,int) ;

__attribute__((used)) static kern_return_t
FUNC_11(kcdata_descriptor_t VAR_6, task_t VAR_7, uint32_t VAR_8, boolean_t VAR_9, unaligned_u64 **VAR_10)
{

#pragma unused(trace_flags)

 kern_return_t VAR_11 = VAR_0;
 struct task_delta_snapshot_v2 * VAR_12 = ((void*)0);
 mach_vm_address_t VAR_13 = 0;
 (void) VAR_8;







 uint64_t VAR_14 = FUNC_3(VAR_7);
 FUNC_0(VAR_10 != ((void*)0));

 FUNC_4(FUNC_5(VAR_6, VAR_5, sizeof(struct task_delta_snapshot_v2), &VAR_13));

 VAR_12 = (struct task_delta_snapshot_v2 *)VAR_13;

 VAR_12->tds_unique_pid = VAR_14;
 VAR_12->tds_ss_flags = FUNC_6(VAR_7);
 *VAR_10 = (unaligned_u64 *)&VAR_12->tds_ss_flags;

 VAR_12->tds_user_time_in_terminated_threads = VAR_7->total_user_time;
 VAR_12->tds_system_time_in_terminated_threads = VAR_7->total_system_time;

 VAR_12->tds_task_size = VAR_9 ? FUNC_1(VAR_7) : 0;

 VAR_12->tds_max_resident_size = FUNC_2(VAR_7);
 VAR_12->tds_suspend_count = VAR_7->suspend_count;
 VAR_12->tds_faults = VAR_7->faults;
 VAR_12->tds_pageins = VAR_7->pageins;
 VAR_12->tds_cow_faults = VAR_7->cow_faults;
 VAR_12->tds_was_throttled = (uint32_t)FUNC_9(VAR_7);
 VAR_12->tds_did_throttle = (uint32_t)FUNC_8(VAR_7);
 VAR_12->tds_latency_qos = (VAR_7-> effective_policy.tep_latency_qos == VAR_1)
  ? VAR_1
  : ((0xFF << 16) | VAR_7-> effective_policy.tep_latency_qos);
error_exit:
 return VAR_11;
}
