
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ia64_pta {void* val; } ;
union ia64_isr {int ni; int val; scalar_t__ rs; scalar_t__ sp; } ;
typedef int u64 ;
struct thash_data {unsigned long ps; int ppn; int pl; int ma; int itir; int page_flags; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_pt_regs {int cr_ipsr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long FUNC_0 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
 int FUNC_4 (struct kvm_vcpu*,int) ;
 int VAR_13 ;
 struct kvm_vcpu* VAR_14 ;
 int FUNC_5 (struct kvm_vcpu*,int) ;
 int FUNC_6 (struct kvm_vcpu*,int) ;
 int FUNC_7 (struct kvm_vcpu*,int) ;
 int FUNC_8 (struct kvm_vcpu*,int,int) ;
 int FUNC_9 (int,int*) ;
 int FUNC_10 (struct kvm_pt_regs*) ;
 int FUNC_11 (struct kvm_vcpu*,int) ;
 scalar_t__ FUNC_12 (struct kvm_vcpu*) ;
 int FUNC_13 (struct kvm_vcpu*,int) ;
 int FUNC_14 (struct kvm_vcpu*,int) ;
 int FUNC_15 (struct kvm_vcpu*) ;
 int FUNC_16 (struct kvm_vcpu*,int,int) ;
 int FUNC_17 (struct kvm_vcpu*,int,int,int,int) ;
 int FUNC_18 (struct kvm_vcpu*,int ,int ,int,int) ;
 void* FUNC_19 (struct kvm_vcpu*) ;
 int FUNC_20 (struct kvm_vcpu*,int) ;
 int FUNC_21 (struct kvm_vcpu*,int ) ;
 int FUNC_22 (struct kvm_vcpu*,int) ;
 int FUNC_23 (struct kvm_vcpu*,int,int ) ;
 struct thash_data* FUNC_24 (struct kvm_vcpu*,int,int) ;

void FUNC_25(u64 VAR_15 , u64 VAR_16, struct kvm_pt_regs *VAR_17)
{
 unsigned long VAR_18;
 int VAR_19;

 u64 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 union ia64_isr VAR_25;
 union ia64_pta VAR_26;
 struct thash_data *VAR_27;
 struct kvm_vcpu *VAR_28 = VAR_14;

 VAR_18 = FUNC_0(VAR_28, VAR_18);
 VAR_25.val = FUNC_1(VAR_28, VAR_13);

 VAR_19 = VAR_16;

 if (FUNC_12(VAR_28) && (!(VAR_15 << 1 >> 62))) {
  if (VAR_16 == 2) {
   if (FUNC_2((VAR_15 << 1) >> (VAR_6 + 1))) {
    FUNC_8(VAR_28, ((VAR_15 << 1) >> 1), 4);
    return;
   }
  }
  FUNC_16(VAR_28, VAR_15, VAR_19);
  return;
 }
 VAR_27 = FUNC_24(VAR_28, VAR_15, VAR_19);
 if (VAR_27 != 0) {
  if (VAR_19 == VAR_1) {
   VAR_21 = (VAR_15 & ((1UL << VAR_27->ps) - 1))
    + (VAR_27->ppn >> (VAR_27->ps - 12) << VAR_27->ps);
   if (FUNC_2(VAR_21 >> VAR_6)) {
    if (VAR_27->pl >= ((VAR_17->cr_ipsr >>
      VAR_2) & 3))
     FUNC_8(VAR_28, VAR_21, VAR_27->ma);
    else {
     FUNC_21(VAR_28, VAR_25.val);
     FUNC_5(VAR_28, VAR_15);
    }
    return ;
   }
  }
  FUNC_18(VAR_28, VAR_27->page_flags, VAR_27->itir, VAR_15, VAR_19);

 } else if (VAR_19 == VAR_1) {
  if (VAR_25.sp) {
   FUNC_10(VAR_17);
   return;
  }

  VAR_23 = FUNC_20(VAR_28, VAR_15);
  VAR_24 = VAR_23 & (VAR_8 | VAR_7);

  if (!FUNC_23(VAR_28, VAR_15, VAR_25.rs ? VAR_9 : VAR_0)) {
   if (VAR_18 & VAR_3) {
    FUNC_21(VAR_28, VAR_25.val);
    FUNC_3(VAR_28, VAR_15);
   } else {
    FUNC_15(VAR_28);
   }
   return ;
  }

  VAR_26.val = FUNC_19(VAR_28);


  VAR_20 = FUNC_22(VAR_28, VAR_15);
  if (!FUNC_9(VAR_20, &VAR_22)) {

   if (!(VAR_22 & VAR_12)) {
    if (VAR_18 & VAR_3) {
     FUNC_21(VAR_28, VAR_25.val);
     FUNC_6(VAR_28, VAR_15);
    } else {
     FUNC_15(VAR_28);
    }
   } else if ((VAR_22 & VAR_10) != VAR_11) {
    FUNC_17(VAR_28, VAR_22, VAR_24,
        VAR_15, VAR_1);
   } else if (VAR_18 & VAR_3) {
    FUNC_21(VAR_28, VAR_25.val);
    FUNC_6(VAR_28, VAR_15);
   } else {
    FUNC_15(VAR_28);
   }
  } else {

   if (VAR_18 & VAR_3) {
    FUNC_21(VAR_28, VAR_25.val);
    FUNC_7(VAR_28, VAR_15);
   } else {
    FUNC_15(VAR_28);
   }
  }
 } else if (VAR_19 == VAR_5) {
  if (!(VAR_18 & VAR_3))
   VAR_25.ni = 1;
  if (!FUNC_23(VAR_28, VAR_15, VAR_4)) {
   FUNC_21(VAR_28, VAR_25.val);
   FUNC_4(VAR_28, VAR_15);
   return;
  }

  VAR_26.val = FUNC_19(VAR_28);

  VAR_20 = FUNC_22(VAR_28, VAR_15);
  if (!FUNC_9(VAR_20, &VAR_22)) {

   if (VAR_22 & VAR_12) {
    if ((VAR_22 & VAR_10) == VAR_11) {
     FUNC_21(VAR_28, VAR_25.val);
     FUNC_13(VAR_28, VAR_15);
     return ;
    }
    VAR_23 = FUNC_20(VAR_28, VAR_15);
    VAR_24 = VAR_23 & (VAR_8 | VAR_7);
    FUNC_17(VAR_28, VAR_22, VAR_24,
       VAR_15, VAR_5);
   } else {
    FUNC_21(VAR_28, VAR_25.val);
    FUNC_11(VAR_28, VAR_15);
   }
  } else {
   FUNC_21(VAR_28, VAR_25.val);
   FUNC_14(VAR_28, VAR_15);
  }
 }
}
