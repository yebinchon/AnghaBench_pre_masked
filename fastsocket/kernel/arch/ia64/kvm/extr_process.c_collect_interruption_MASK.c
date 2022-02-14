
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_pt_regs {unsigned long cr_ipsr; int cr_iip; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct kvm_vcpu*) ;
 unsigned long FUNC_3 (struct kvm_vcpu*) ;
 struct kvm_pt_regs* FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;
 int FUNC_7 (struct kvm_vcpu*,int ) ;
 int FUNC_8 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_9 (struct kvm_vcpu*,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct kvm_vcpu *VAR_14)
{
 u64 VAR_15;
 u64 VAR_16;
 u64 VAR_17;
 unsigned long VAR_18;
 struct kvm_pt_regs *VAR_19 = FUNC_4(VAR_14);

 VAR_18 = FUNC_3(VAR_14);
 FUNC_2(VAR_14);
 if (VAR_18 & VAR_6) {






  VAR_15 = VAR_19->cr_ipsr;
  VAR_18 = VAR_18 | (VAR_15 & (VAR_7 | VAR_3
     | VAR_4 | VAR_9
     | VAR_5));
  FUNC_8(VAR_14, VAR_18);






  FUNC_6(VAR_14 , VAR_19->cr_iip);


  VAR_17 = FUNC_0(VAR_14, VAR_13);
  VAR_17 &= ~VAR_2;
  FUNC_5(VAR_14, VAR_17);

  FUNC_7(VAR_14, FUNC_1(VAR_14, VAR_11));
 }

 VAR_16 = FUNC_0(VAR_14, VAR_12);






 VAR_18 &= VAR_10;
 VAR_18 |= (VAR_16 & VAR_0);


 if (VAR_16 & VAR_1) {
  VAR_18 |= VAR_8;
 } else {
  VAR_18 &= ~VAR_8;
 }

 FUNC_9(VAR_14, VAR_18);

}
