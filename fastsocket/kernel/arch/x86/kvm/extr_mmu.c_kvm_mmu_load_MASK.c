
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int root_hpa; } ;
struct TYPE_7__ {TYPE_2__ mmu; } ;
struct kvm_vcpu {TYPE_3__ arch; TYPE_1__* kvm; } ;
struct TYPE_8__ {int (* set_cr3 ) (struct kvm_vcpu*,int ) ;} ;
struct TYPE_5__ {int mmu_lock; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;

int FUNC_6(struct kvm_vcpu *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  goto out;
 VAR_2 = FUNC_0(VAR_1);
 FUNC_3(&VAR_1->kvm->mmu_lock);
 FUNC_1(VAR_1);
 FUNC_4(&VAR_1->kvm->mmu_lock);
 if (VAR_2)
  goto out;

 VAR_0->set_cr3(VAR_1, VAR_1->arch.mmu.root_hpa);
out:
 return VAR_2;
}
