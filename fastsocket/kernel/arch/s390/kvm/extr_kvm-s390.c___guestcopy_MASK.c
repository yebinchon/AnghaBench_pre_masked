
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*,int ,void const*,unsigned long) ;
 int FUNC_1 (struct kvm_vcpu*,int ,void const*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_0, u64 VAR_1, const void *VAR_2,
         unsigned long VAR_3, int VAR_4)
{
 if (VAR_4)
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
