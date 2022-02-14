
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct msr_data {unsigned int index; int host_initiated; int data; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*,struct msr_data*) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_0, unsigned VAR_1, u64 *VAR_2)
{
 struct msr_data VAR_3;

 VAR_3.data = *VAR_2;
 VAR_3.index = VAR_1;
 VAR_3.host_initiated = 1;
 return FUNC_0(VAR_0, &VAR_3);
}
