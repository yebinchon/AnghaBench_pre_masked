
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* unaligned_u64 ;
typedef int uint64_t ;
typedef TYPE_3__* thread_t ;
struct thread_delta_snapshot_v3 {void* tds_effective_policy; void* tds_requested_policy; scalar_t__ tds_io_tier; int tds_rqos_override; int tds_rqos; int tds_eqos; int tds_sched_priority; int tds_base_priority; int tds_sched_flags; int tds_state; int tds_last_made_runnable_time; int tds_ss_flags; scalar_t__ tds_voucher_identifier; int tds_thread_id; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_9__ {int thep_qos; scalar_t__ thep_darwinbg; } ;
struct TYPE_8__ {int thrp_qos_workq_override; int thrp_qos_override; int thrp_qos; } ;
struct TYPE_10__ {scalar_t__ ith_voucher; scalar_t__ suspend_count; int options; TYPE_2__ effective_policy; TYPE_1__ requested_policy; int sched_pri; int base_pri; int sched_flags; int state; int last_made_runnable_time; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_6(struct thread_delta_snapshot_v3 * VAR_10, thread_t VAR_11, boolean_t VAR_12)
{
 VAR_10->tds_thread_id = FUNC_5(VAR_11);
 if (VAR_0 != VAR_11->ith_voucher)
  VAR_10->tds_voucher_identifier = FUNC_1(VAR_11->ith_voucher);
 else
  VAR_10->tds_voucher_identifier = 0;

 VAR_10->tds_ss_flags = 0;
 if (VAR_11->effective_policy.thep_darwinbg)
  VAR_10->tds_ss_flags |= VAR_5;
 if (FUNC_2(VAR_11, VAR_2))
  VAR_10->tds_ss_flags |= VAR_6;
 if (VAR_11->suspend_count > 0)
  VAR_10->tds_ss_flags |= VAR_9;
 if (VAR_11->options & VAR_3)
  VAR_10->tds_ss_flags |= VAR_4;
 if (VAR_12)
  VAR_10->tds_ss_flags |= VAR_8;
 if (FUNC_3(VAR_11))
  VAR_10->tds_ss_flags |= VAR_7;

 VAR_10->tds_last_made_runnable_time = VAR_11->last_made_runnable_time;
 VAR_10->tds_state = VAR_11->state;
 VAR_10->tds_sched_flags = VAR_11->sched_flags;
 VAR_10->tds_base_priority = VAR_11->base_pri;
 VAR_10->tds_sched_priority = VAR_11->sched_pri;
 VAR_10->tds_eqos = VAR_11->effective_policy.thep_qos;
 VAR_10->tds_rqos = VAR_11->requested_policy.thrp_qos;
 VAR_10->tds_rqos_override = FUNC_0(VAR_11->requested_policy.thrp_qos_override,
                VAR_11->requested_policy.thrp_qos_workq_override);
 VAR_10->tds_io_tier = FUNC_2(VAR_11, VAR_1);

 FUNC_4(sizeof(VAR_11->effective_policy) == sizeof(uint64_t));
 FUNC_4(sizeof(VAR_11->requested_policy) == sizeof(uint64_t));
 VAR_10->tds_requested_policy = *(unaligned_u64 *) &VAR_11->requested_policy;
 VAR_10->tds_effective_policy = *(unaligned_u64 *) &VAR_11->effective_policy;

 return 0;
}
