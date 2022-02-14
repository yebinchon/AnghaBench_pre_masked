
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ia64_rr {scalar_t__ val; int rid; int ps; } ;
typedef scalar_t__ u64 ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ FUNC_0 (struct kvm_vcpu*,scalar_t__) ;

__attribute__((used)) static u64 FUNC_1(struct kvm_vcpu *VAR_0, u64 VAR_1)
{
 union ia64_rr VAR_2, VAR_3;

 VAR_2.val = FUNC_0(VAR_0, VAR_1);
 VAR_3 = 0;
 VAR_3 = VAR_2.ps;
 VAR_3 = VAR_2.rid;
 return (VAR_3);
}
