
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int selector; } ;


 int FUNC_0 (struct kvm_vcpu*,struct kvm_segment*,int) ;

__attribute__((used)) static u16 FUNC_1(struct kvm_vcpu *VAR_0, int VAR_1)
{
 struct kvm_segment VAR_2;

 FUNC_0(VAR_0, &VAR_2, VAR_1);
 return VAR_2.selector;
}
