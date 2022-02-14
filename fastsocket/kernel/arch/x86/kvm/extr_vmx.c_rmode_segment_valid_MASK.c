
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int base; int selector; int limit; } ;


 int FUNC_0 (struct kvm_vcpu*,struct kvm_segment*,int) ;
 int FUNC_1 (struct kvm_segment*) ;

__attribute__((used)) static bool FUNC_2(struct kvm_vcpu *VAR_0, int VAR_1)
{
 struct kvm_segment VAR_2;
 u32 VAR_3;

 FUNC_0(VAR_0, &VAR_2, VAR_1);
 VAR_3 = FUNC_1(&VAR_2);

 if (VAR_2.base != (VAR_2.selector << 4))
  return 0;
 if (VAR_2.limit != 0xffff)
  return 0;
 if (VAR_3 != 0xf3)
  return 0;

 return 1;
}
