
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * regs; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct vcpu_svm {struct kvm_vcpu vcpu; scalar_t__ next_rip; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_4(struct vcpu_svm *VAR_1)
{
 struct kvm_vcpu *VAR_2 = &VAR_1->vcpu;
 FUNC_2("INVLPGA\n");


 FUNC_0(VAR_2, VAR_2->arch.regs[VAR_0]);

 VAR_1->next_rip = FUNC_1(&VAR_1->vcpu) + 3;
 FUNC_3(&VAR_1->vcpu);
 return 1;
}
