
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static inline u64 FUNC_1(struct kvm_vcpu *VAR_2)
{
 return (FUNC_0(VAR_2, VAR_0) & -1u)
  | ((u64)(FUNC_0(VAR_2, VAR_1) & -1u) << 32);
}
