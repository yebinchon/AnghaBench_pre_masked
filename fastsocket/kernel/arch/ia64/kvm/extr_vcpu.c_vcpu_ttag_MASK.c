
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ia64_rr {int val; } ;
union ia64_pta {scalar_t__ vf; int val; } ;
typedef int u64 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;

u64 FUNC_3(struct kvm_vcpu *VAR_1, u64 VAR_2)
{
 union ia64_rr VAR_3;
 union ia64_pta VAR_4;
 u64 VAR_5;

 VAR_4.val = FUNC_1(VAR_1);
 VAR_3.val = FUNC_2(VAR_1, VAR_2);
 if (VAR_4.vf) {
  VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_3.val,
      0, 0, 0, 0, 0);
 } else
  VAR_5 = 1;

 return VAR_5;
}
