
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vmx_segment_field {int base; } ;
struct kvm_vcpu {int dummy; } ;


 struct kvm_vmx_segment_field* VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u64 FUNC_1(struct kvm_vcpu *VAR_1, int VAR_2)
{
 struct kvm_vmx_segment_field *VAR_3 = &VAR_0[VAR_2];

 return FUNC_0(VAR_3->base);
}
