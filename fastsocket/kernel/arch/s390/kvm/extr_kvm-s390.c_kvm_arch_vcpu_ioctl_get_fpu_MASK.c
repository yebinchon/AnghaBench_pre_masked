
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fpc; int fprs; } ;
struct TYPE_4__ {TYPE_1__ guest_fpregs; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct kvm_fpu {int fpc; int fprs; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_0, struct kvm_fpu *VAR_1)
{
 FUNC_1(VAR_0);
 FUNC_0(&VAR_1->fprs, &VAR_0->arch.guest_fpregs.fprs, sizeof(VAR_1->fprs));
 VAR_1->fpc = VAR_0->arch.guest_fpregs.fpc;
 FUNC_2(VAR_0);
 return 0;
}
