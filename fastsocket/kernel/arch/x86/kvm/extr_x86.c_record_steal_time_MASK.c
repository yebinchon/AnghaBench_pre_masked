
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int version; int steal; } ;
struct TYPE_5__ {int msr_val; TYPE_3__ steal; int stime; scalar_t__ accum_steal; } ;
struct TYPE_6__ {TYPE_1__ st; } ;
struct kvm_vcpu {TYPE_2__ arch; int kvm; } ;
struct kvm_steal_time {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_3__*,int) ;
 int FUNC_1 (int ,int ,TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_1)
{
 if (!(VAR_1->arch.st.msr_val & VAR_0))
  return;

 if (FUNC_2(FUNC_0(VAR_1->kvm, VAR_1->arch.st.stime,
  &VAR_1->arch.st.steal, sizeof(struct kvm_steal_time))))
  return;

 VAR_1->arch.st.steal.steal += VAR_1->arch.st.accum_steal;
 VAR_1->arch.st.steal.version += 2;
 VAR_1->arch.st.accum_steal = 0;

 FUNC_1(VAR_1->kvm, VAR_1->arch.st.stime,
  &VAR_1->arch.st.steal, sizeof(struct kvm_steal_time));
}
