
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {TYPE_1__* kvm; } ;
typedef int gpa_t ;
struct TYPE_2__ {int mmu_lock; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_1, gpa_t VAR_2)
{
 FUNC_1(&VAR_1->kvm->mmu_lock);
 FUNC_0(VAR_1->kvm, VAR_2 >> VAR_0);
 FUNC_2(&VAR_1->kvm->mmu_lock);
 return 1;
}
