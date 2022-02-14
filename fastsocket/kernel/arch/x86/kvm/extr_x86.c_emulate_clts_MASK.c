
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int (* set_cr0 ) (struct kvm_vcpu*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;

int FUNC_2(struct kvm_vcpu *VAR_3)
{
 VAR_2->set_cr0(VAR_3, FUNC_0(VAR_3, ~VAR_1));
 return VAR_0;
}
