
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* gpr; int shadow_pid; int ivpr; scalar_t__ msr; scalar_t__ pc; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;

int FUNC_2(struct kvm_vcpu *VAR_0)
{
 VAR_0->arch.pc = 0;
 VAR_0->arch.msr = 0;
 VAR_0->arch.gpr[1] = (16<<20) - 8;

 VAR_0->arch.shadow_pid = 1;



 VAR_0->arch.ivpr = 0x55550000;

 FUNC_1(VAR_0);

 return FUNC_0(VAR_0);
}
