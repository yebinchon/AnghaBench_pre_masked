
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_5__ {int msr_val; scalar_t__ accum_steal; scalar_t__ last_steal; } ;
struct TYPE_6__ {TYPE_1__ st; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_7__ {scalar_t__ run_delay; } ;
struct TYPE_8__ {TYPE_3__ sched_info; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;

__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_2)
{
 u64 VAR_3;

 if (!(VAR_2->arch.st.msr_val & VAR_0))
  return;

 VAR_3 = VAR_1->sched_info.run_delay - VAR_2->arch.st.last_steal;
 VAR_2->arch.st.last_steal = VAR_1->sched_info.run_delay;
 VAR_2->arch.st.accum_steal = VAR_3;
}
