
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {TYPE_1__* kvm; } ;
struct TYPE_2__ {int mmu_lock; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct kvm_vcpu *VAR_0)
{
 FUNC_1(&VAR_0->kvm->mmu_lock);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_0->kvm->mmu_lock);
}
