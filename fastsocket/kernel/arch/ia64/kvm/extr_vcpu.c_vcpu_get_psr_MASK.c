
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_pt_regs {unsigned long cr_ipsr; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long FUNC_0 (struct kvm_vcpu*,int ) ;
 struct kvm_pt_regs* FUNC_1 (struct kvm_vcpu*) ;
 int VAR_7 ;

unsigned long FUNC_2(struct kvm_vcpu *VAR_8)
{
 unsigned long VAR_9;
 struct kvm_pt_regs *VAR_10 = FUNC_1(VAR_8);

 VAR_9 = VAR_1 | VAR_6 | VAR_0 | VAR_4 |
  VAR_3 | VAR_2 | VAR_5;
 return (FUNC_0(VAR_8, VAR_7) & ~VAR_9) | (VAR_10->cr_ipsr & VAR_9);
}
