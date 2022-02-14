
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ia64_rr {scalar_t__ ps; int val; } ;
typedef scalar_t__ u64 ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct kvm_vcpu*,scalar_t__,scalar_t__) ;
 int FUNC_8 () ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (scalar_t__*,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct kvm_vcpu*,scalar_t__) ;
 int FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_13 (struct kvm_vcpu*,scalar_t__,scalar_t__) ;
 int FUNC_14 (struct kvm_vcpu*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_15 (struct kvm_vcpu*,scalar_t__,scalar_t__) ;

void FUNC_16(struct kvm_vcpu *VAR_9, u64 VAR_10, u64 VAR_11,
      u64 VAR_12, int VAR_13)
{
 u64 VAR_14;
 u64 VAR_15, VAR_16, VAR_17;
 union ia64_rr VAR_18, VAR_19;

 VAR_14 = FUNC_5(VAR_11);
 VAR_18.val = FUNC_10(VAR_9, VAR_12);
 VAR_19.val = FUNC_2(VAR_12);

 VAR_17 = (VAR_10 & VAR_7) >> VAR_3;
 VAR_16 = FUNC_6(VAR_17) & VAR_0;
 VAR_15 = FUNC_9(&VAR_10, VAR_11, VAR_12);





 if (!(VAR_10 & VAR_4) && ((VAR_10 & VAR_5) != VAR_6) &&
   VAR_16 != VAR_1) {
  VAR_10 &= ~VAR_5;
  VAR_15 &= ~VAR_5;
 }

 FUNC_15(VAR_9, VAR_12, VAR_14);
 FUNC_13(VAR_9, VAR_12, VAR_14);

 if ((VAR_14 != VAR_19.ps) || (VAR_10 & VAR_4)) {
  FUNC_14(VAR_9, VAR_10, VAR_11, VAR_12);
  FUNC_11(FUNC_0(VAR_9, VAR_8), VAR_12);
 }
 if (VAR_10 & VAR_4)
  return;

 if (VAR_14 >= VAR_19.ps)
  FUNC_12(VAR_15, VAR_11, VAR_12, VAR_10);
 else {
  u64 VAR_20;
  VAR_15 &= ~VAR_2;
  VAR_20 = FUNC_1();
  FUNC_3(VAR_13, VAR_12, VAR_15, VAR_14);
  FUNC_8();
  FUNC_4(VAR_20);
 }
 if (!(VAR_10&VAR_4))
  FUNC_7(VAR_9, VAR_10, VAR_14);

}
