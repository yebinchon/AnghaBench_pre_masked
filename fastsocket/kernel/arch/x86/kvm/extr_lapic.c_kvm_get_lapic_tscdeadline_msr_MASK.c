
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int tscdeadline; } ;
struct kvm_lapic {TYPE_2__ lapic_timer; } ;


 scalar_t__ FUNC_0 (struct kvm_lapic*) ;
 scalar_t__ FUNC_1 (struct kvm_lapic*) ;

u64 FUNC_2(struct kvm_vcpu *VAR_0)
{
 struct kvm_lapic *VAR_1 = VAR_0->arch.apic;
 if (!VAR_1)
  return 0;

 if (FUNC_0(VAR_1) || FUNC_1(VAR_1))
  return 0;

 return VAR_1->lapic_timer.tscdeadline;
}
