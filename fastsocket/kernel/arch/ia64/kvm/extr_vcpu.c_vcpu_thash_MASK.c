
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ia64_rr {int ps; int val; } ;
union ia64_pta {int val; unsigned long size; scalar_t__ vf; } ;
typedef int u64 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int,int ,int ,int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;

u64 FUNC_3(struct kvm_vcpu *VAR_2, u64 VAR_3)
{
 union ia64_pta VAR_4;
 union ia64_rr VAR_5;
 u64 VAR_6;
 u64 VAR_7;

 VAR_4.val = FUNC_1(VAR_2);
 VAR_5.val = FUNC_2(VAR_2, VAR_3);
 VAR_7 = ((VAR_3 >> VAR_5.ps) << 3) & ((1UL << (VAR_4.size)) - 1);
 if (VAR_4.vf) {
  VAR_6 = FUNC_0(VAR_0, VAR_3, VAR_5.val,
    VAR_4.val, 0, 0, 0, 0);
 } else {
  VAR_6 = (VAR_3 & VAR_1) | VAR_7 |
   (VAR_4.val << 3 >> (VAR_4.size + 3) << (VAR_4.size));
 }
 return VAR_6;
}
