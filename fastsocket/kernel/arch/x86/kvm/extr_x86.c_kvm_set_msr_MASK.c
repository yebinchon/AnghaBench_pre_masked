
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msr_data {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int (* set_msr ) (struct kvm_vcpu*,struct msr_data*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,struct msr_data*) ;

int FUNC_1(struct kvm_vcpu *VAR_1, struct msr_data *VAR_2)
{
 return VAR_0->set_msr(VAR_1, VAR_2);
}
