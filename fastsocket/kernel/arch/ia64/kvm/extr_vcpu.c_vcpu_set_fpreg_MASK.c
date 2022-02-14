
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_pt_regs {int dummy; } ;
struct ia64_fpreg {int dummy; } ;


 int FUNC_0 (unsigned long,struct ia64_fpreg*,struct kvm_pt_regs*) ;
 struct kvm_pt_regs* FUNC_1 (struct kvm_vcpu*) ;

void FUNC_2(struct kvm_vcpu *VAR_0, unsigned long VAR_1,
      struct ia64_fpreg *VAR_2)
{
 struct kvm_pt_regs *VAR_3 = FUNC_1(VAR_0);

 if (VAR_1 > 1)
  FUNC_0(VAR_1, VAR_2, VAR_3);
}
