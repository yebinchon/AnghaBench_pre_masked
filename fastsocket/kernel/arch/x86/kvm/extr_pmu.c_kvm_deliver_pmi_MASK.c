
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;

void FUNC_1(struct kvm_vcpu *VAR_1)
{
 if (VAR_1->arch.apic)
  FUNC_0(VAR_1->arch.apic, VAR_0);
}
