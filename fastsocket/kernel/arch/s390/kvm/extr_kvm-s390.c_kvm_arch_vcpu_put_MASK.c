
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int host_acrs; int host_fpregs; int guest_acrs; int guest_fpregs; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct kvm_vcpu *VAR_0)
{
 FUNC_3(&VAR_0->arch.guest_fpregs);
 FUNC_2(VAR_0->arch.guest_acrs);
 FUNC_1(&VAR_0->arch.host_fpregs);
 FUNC_0(VAR_0->arch.host_acrs);
}
