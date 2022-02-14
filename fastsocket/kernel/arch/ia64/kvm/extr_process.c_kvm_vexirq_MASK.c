
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int) ;
 int FUNC_1 (int ,int,int ,int,struct kvm_pt_regs*) ;
 struct kvm_pt_regs* FUNC_2 (struct kvm_vcpu*) ;

void FUNC_3(struct kvm_vcpu *VAR_1)
{
 u64 VAR_2, VAR_3;
 struct kvm_pt_regs *VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 VAR_2 = FUNC_0(VAR_1, VAR_2);
 VAR_3 = VAR_2 & VAR_0;
 FUNC_1(0, VAR_3, 0, 12, VAR_4);
}
