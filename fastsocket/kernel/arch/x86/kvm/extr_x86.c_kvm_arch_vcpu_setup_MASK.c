
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int have_fixed; } ;
struct TYPE_5__ {TYPE_1__ mtrr_state; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_6__ {int (* vcpu_free ) (struct kvm_vcpu*) ;} ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;

int FUNC_5(struct kvm_vcpu *VAR_1)
{
 int VAR_2;

 VAR_1->arch.mtrr_state.have_fixed = 1;
 FUNC_3(VAR_1);
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == 0)
  VAR_2 = FUNC_1(VAR_1);
 FUNC_4(VAR_1);
 if (VAR_2 < 0)
  goto free_vcpu;

 return 0;
free_vcpu:
 VAR_0->vcpu_free(VAR_1);
 return VAR_2;
}
