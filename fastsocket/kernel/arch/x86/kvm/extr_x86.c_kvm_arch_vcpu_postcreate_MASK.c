
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msr_data {int data; int host_initiated; int index; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,struct msr_data*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_1)
{
 struct msr_data VAR_2;

 FUNC_1(VAR_1);
 VAR_2.data = 0x0;
 VAR_2.index = VAR_0;
 VAR_2.host_initiated = 1;
 FUNC_0(VAR_1, &VAR_2);
 FUNC_2(VAR_1);

 return 0;
}
