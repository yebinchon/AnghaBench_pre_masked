
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int apic_base; } ;
struct kvm_vcpu {TYPE_1__ arch; int kvm; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;

void FUNC_2(struct kvm_vcpu *VAR_0, u64 VAR_1)
{

 if (FUNC_0(VAR_0->kvm))
  FUNC_1(VAR_0, VAR_1);
 else
  VAR_0->arch.apic_base = VAR_1;
}
