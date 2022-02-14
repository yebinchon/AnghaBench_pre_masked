
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ia64_rr {int ps; int val; } ;
typedef int u64 ;
struct kvm_vcpu {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct kvm_vcpu*,unsigned long,int ,unsigned long,int) ;

void FUNC_2(struct kvm_vcpu *VAR_2, unsigned long VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 union ia64_rr VAR_6;

 VAR_6.val = FUNC_0(VAR_3);
 VAR_5 = VAR_3 & VAR_1;
 VAR_5 = VAR_5 | VAR_0;
 FUNC_1(VAR_2, VAR_5, (u64)(VAR_6.ps << 2), VAR_3, VAR_4);
 return;
}
