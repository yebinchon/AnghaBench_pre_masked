
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int apic_arb_prio; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;



int FUNC_0(struct kvm_vcpu *VAR_0, struct kvm_vcpu *VAR_1)
{
 return VAR_0->arch.apic_arb_prio - VAR_1->arch.apic_arb_prio;
}
