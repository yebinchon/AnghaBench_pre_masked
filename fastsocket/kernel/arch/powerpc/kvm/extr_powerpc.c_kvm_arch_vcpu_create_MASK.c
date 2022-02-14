
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm {int dummy; } ;


 struct kvm_vcpu* FUNC_0 (struct kvm*,unsigned int) ;
 int FUNC_1 (struct kvm_vcpu*,unsigned int) ;

struct kvm_vcpu *FUNC_2(struct kvm *VAR_0, unsigned int VAR_1)
{
 struct kvm_vcpu *VAR_2;
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_2, VAR_1);
 return VAR_2;
}
