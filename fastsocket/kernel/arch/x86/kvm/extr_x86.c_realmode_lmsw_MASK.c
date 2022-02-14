
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {unsigned long (* get_rflags ) (struct kvm_vcpu*) ;} ;


 int FUNC_0 (struct kvm_vcpu*,unsigned long) ;
 TYPE_1__* VAR_0 ;
 unsigned long FUNC_1 (struct kvm_vcpu*) ;

void FUNC_2(struct kvm_vcpu *VAR_1, unsigned long VAR_2,
     unsigned long *VAR_3)
{
 FUNC_0(VAR_1, VAR_2);
 *VAR_3 = VAR_0->get_rflags(VAR_1);
}
