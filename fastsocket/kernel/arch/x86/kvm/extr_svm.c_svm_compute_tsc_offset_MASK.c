
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static u64 FUNC_2(struct kvm_vcpu *VAR_0, u64 VAR_1)
{
 u64 VAR_2;

 VAR_2 = FUNC_1(VAR_0, FUNC_0());

 return VAR_1 - VAR_2;
}
