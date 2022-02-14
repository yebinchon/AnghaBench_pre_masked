
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_pt_regs {unsigned long cr_ifs; void* cr_iip; } ;


 unsigned long VAR_0 ;
 void* FUNC_0 (struct kvm_vcpu*,unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 struct kvm_pt_regs* FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,unsigned long) ;

void FUNC_5(struct kvm_vcpu *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 struct kvm_pt_regs *VAR_6 = FUNC_3(VAR_3);

 VAR_5 = FUNC_0(VAR_3, VAR_2);
 if (VAR_5 & VAR_0)
  FUNC_2(VAR_3);
 else
  FUNC_1(VAR_3);
 FUNC_4(VAR_3, VAR_5);
 VAR_4 = FUNC_0(VAR_3, VAR_4);
 if (VAR_4 >> 63)
  VAR_6->cr_ifs = VAR_4;
 VAR_6->cr_iip = FUNC_0(VAR_3, VAR_1);
}
