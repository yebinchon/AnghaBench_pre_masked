
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ia64_rr {scalar_t__ ps; int val; } ;
typedef int u64 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int,scalar_t__) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct kvm_vcpu*,int,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int*,int,int) ;
 int FUNC_8 (int,int,int,int) ;

void FUNC_9(struct kvm_vcpu *VAR_2, u64 VAR_3, u64 VAR_4, u64 VAR_5, int VAR_6)
{
 u64 VAR_7, VAR_8;
 union ia64_rr VAR_9;

 VAR_9.val = FUNC_1(VAR_5);
 VAR_7 = FUNC_7(&VAR_3, VAR_4, VAR_5);

 if (FUNC_4(VAR_4) >= VAR_9.ps) {
  FUNC_8(VAR_7, VAR_4, VAR_5, VAR_3);
 } else {
  VAR_7 &= ~VAR_0;
  VAR_8 = FUNC_0();
  FUNC_2(VAR_6, VAR_5, VAR_7, FUNC_4(VAR_4));
  FUNC_6();
  FUNC_3(VAR_8);
 }

 if (!(VAR_3&VAR_1))
  FUNC_5(VAR_2, VAR_3, FUNC_4(VAR_4));
}
