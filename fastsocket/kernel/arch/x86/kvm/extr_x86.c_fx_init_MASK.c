
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cr0; int xcr0; int guest_fpu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct kvm_vcpu *VAR_2)
{
 FUNC_0(&VAR_2->arch.guest_fpu);
 FUNC_1(&VAR_2->arch.guest_fpu);




 VAR_2->arch.xcr0 = VAR_1;

 VAR_2->arch.cr0 |= VAR_0;
}
