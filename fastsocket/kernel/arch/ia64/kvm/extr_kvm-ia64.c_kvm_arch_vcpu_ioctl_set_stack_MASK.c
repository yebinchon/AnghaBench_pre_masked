
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exit_data; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_ia64_vcpu_stack {int * stack; } ;


 int FUNC_0 (struct kvm_vcpu*,int *,int) ;

int FUNC_1(struct kvm_vcpu *VAR_0,
      struct kvm_ia64_vcpu_stack *VAR_1)
{
 FUNC_0(VAR_0 + 1, &VAR_1->stack[0] + sizeof(struct kvm_vcpu),
        sizeof(struct kvm_ia64_vcpu_stack) - sizeof(struct kvm_vcpu));

 VAR_0->arch.exit_data = ((struct kvm_vcpu *)VAR_1)->arch.exit_data;
 return 0;
}
