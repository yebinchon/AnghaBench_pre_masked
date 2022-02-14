
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vmcb_seg {int base; } ;
struct kvm_vcpu {int dummy; } ;


 struct vmcb_seg* FUNC_0 (struct kvm_vcpu*,int) ;

__attribute__((used)) static u64 FUNC_1(struct kvm_vcpu *VAR_0, int VAR_1)
{
 struct vmcb_seg *VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_2->base;
}
