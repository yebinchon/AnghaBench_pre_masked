
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int apic_base; } ;
struct kvm_vcpu {TYPE_1__ arch; int kvm; } ;


 scalar_t__ FUNC_0 (int ) ;

u64 FUNC_1(struct kvm_vcpu *VAR_0)
{
 if (FUNC_0(VAR_0->kvm))
  return VAR_0->arch.apic_base;
 else
  return VAR_0->arch.apic_base;
}
