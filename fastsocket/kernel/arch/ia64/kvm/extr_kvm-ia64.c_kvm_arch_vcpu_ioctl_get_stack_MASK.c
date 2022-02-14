
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_ia64_vcpu_stack {int dummy; } ;


 int FUNC_0 (struct kvm_ia64_vcpu_stack*,struct kvm_vcpu*,int) ;

int FUNC_1(struct kvm_vcpu *VAR_0,
      struct kvm_ia64_vcpu_stack *VAR_1)
{
 FUNC_0(VAR_1, VAR_0, sizeof(struct kvm_ia64_vcpu_stack));
 return 0;
}
