
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct kvm {int dummy; } ;
struct TYPE_2__ {struct kvm_vcpu* (* vcpu_create ) (struct kvm*,unsigned int) ;} ;


 TYPE_1__* VAR_0 ;
 struct kvm_vcpu* FUNC_0 (struct kvm*,unsigned int) ;

struct kvm_vcpu *FUNC_1(struct kvm *VAR_1,
      unsigned int VAR_2)
{
 return VAR_0->vcpu_create(VAR_1, VAR_2);
}
