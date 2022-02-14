
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sie_block; int guest_acrs; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct kvm_sregs {int crs; int acrs; } ;
struct TYPE_3__ {int gcr; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_0,
      struct kvm_sregs *VAR_1)
{
 FUNC_1(VAR_0);
 FUNC_0(&VAR_0->arch.guest_acrs, &VAR_1->acrs, sizeof(VAR_1->acrs));
 FUNC_0(&VAR_0->arch.sie_block->gcr, &VAR_1->crs, sizeof(VAR_1->crs));
 FUNC_2(VAR_0);
 return 0;
}
