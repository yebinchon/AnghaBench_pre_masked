
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fpc; } ;
struct TYPE_3__ {int guest_acrs; TYPE_2__ guest_fpregs; int host_acrs; int host_fpregs; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct kvm_vcpu *VAR_1, int VAR_2)
{
 FUNC_3(&VAR_1->arch.host_fpregs);
 FUNC_2(VAR_1->arch.host_acrs);
 VAR_1->arch.guest_fpregs.fpc &= VAR_0;
 FUNC_1(&VAR_1->arch.guest_fpregs);
 FUNC_0(VAR_1->arch.guest_acrs);
}
