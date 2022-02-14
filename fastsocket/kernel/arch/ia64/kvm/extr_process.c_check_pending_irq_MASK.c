
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_pt_regs {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long FUNC_0 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int,int) ;
 int FUNC_4 (int ,unsigned long,int ,int,struct kvm_pt_regs*) ;
 int FUNC_5 (struct kvm_vcpu*,int) ;
 struct kvm_pt_regs* FUNC_6 (struct kvm_vcpu*) ;
 unsigned long VAR_5 ;

void FUNC_7(struct kvm_vcpu *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 u64 VAR_10;
 unsigned long VAR_11;
 struct kvm_pt_regs *VAR_12 = FUNC_6(VAR_6);

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8 == VAR_4) {
  FUNC_5(VAR_6, VAR_4);
  return;
 }
 VAR_9 = FUNC_1(VAR_6);

 VAR_11 = FUNC_0(VAR_6, VAR_11);
 VAR_7 = FUNC_3(VAR_6, VAR_8, VAR_9);
 if ((VAR_11 & VAR_0) && VAR_3 == VAR_7) {
  VAR_10 = VAR_11 & VAR_1;
  FUNC_5(VAR_6, VAR_8);
  FUNC_4(0, VAR_10, 0, 12, VAR_12);
 } else if (VAR_7 == VAR_2) {
  if (FUNC_0(VAR_6, VAR_5))
   FUNC_5(VAR_6, VAR_4);
 } else {

  FUNC_5(VAR_6, VAR_8);
 }
}
