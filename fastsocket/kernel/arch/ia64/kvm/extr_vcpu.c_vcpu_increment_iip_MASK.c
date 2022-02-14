
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_pt_regs {int cr_iip; int cr_ipsr; } ;
struct ia64_psr {int ri; } ;


 struct kvm_pt_regs* FUNC_0 (struct kvm_vcpu*) ;

void FUNC_1(struct kvm_vcpu *VAR_0)
{
 struct kvm_pt_regs *VAR_1 = FUNC_0(VAR_0);
 struct ia64_psr *VAR_2 = (struct ia64_psr *)&VAR_1->cr_ipsr;
 if (VAR_2->ri == 2) {
  VAR_2->ri = 0;
  VAR_1->cr_iip += 16;
 } else
  VAR_2->ri++;
}
