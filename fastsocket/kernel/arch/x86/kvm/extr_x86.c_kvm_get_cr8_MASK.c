
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long cr8; } ;
struct kvm_vcpu {TYPE_1__ arch; int kvm; } ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct kvm_vcpu*) ;

unsigned long FUNC_2(struct kvm_vcpu *VAR_0)
{
 if (FUNC_0(VAR_0->kvm))
  return FUNC_1(VAR_0);
 else
  return VAR_0->arch.cr8;
}
