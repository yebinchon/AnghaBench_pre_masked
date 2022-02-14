
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* apic; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_6__ {int (* update_cr8_intercept ) (struct kvm_vcpu*,int,int) ;} ;
struct TYPE_4__ {int vapic_addr; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_2 (struct kvm_vcpu*,int,int) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_1)
{
 int VAR_2, VAR_3;

 if (!VAR_0->update_cr8_intercept)
  return;

 if (!VAR_1->arch.apic)
  return;

 if (!VAR_1->arch.apic->vapic_addr)
  VAR_2 = FUNC_0(VAR_1);
 else
  VAR_2 = -1;

 if (VAR_2 != -1)
  VAR_2 >>= 4;

 VAR_3 = FUNC_1(VAR_1);

 VAR_0->update_cr8_intercept(VAR_1, VAR_3, VAR_2);
}
