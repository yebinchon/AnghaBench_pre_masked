
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_pt_regs {int cr_ifs; } ;


 int FUNC_0 (unsigned long,int ,int,struct kvm_pt_regs*) ;
 struct kvm_pt_regs* FUNC_1 (struct kvm_vcpu*) ;

void FUNC_2(struct kvm_vcpu *VAR_0, unsigned long VAR_1, u64 VAR_2, int VAR_3)
{
 struct kvm_pt_regs *VAR_4 = FUNC_1(VAR_0);
 long VAR_5 = (VAR_4->cr_ifs) & 0x7f;

 if (!VAR_1)
  return;
 if (VAR_1 >= VAR_5 + 32)
  return;
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
