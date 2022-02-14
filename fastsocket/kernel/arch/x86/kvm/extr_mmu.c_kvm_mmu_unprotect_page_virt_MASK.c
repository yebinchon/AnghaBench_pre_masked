
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {TYPE_1__* kvm; } ;
typedef int gva_t ;
typedef int gpa_t ;
struct TYPE_2__ {int mmu_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int *) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;

int FUNC_4(struct kvm_vcpu *VAR_2, gva_t VAR_3)
{
 gpa_t VAR_4;
 int VAR_5;

 if (VAR_1)
  return 0;

 VAR_4 = FUNC_0(VAR_2, VAR_3, ((void*)0));

 FUNC_2(&VAR_2->kvm->mmu_lock);
 VAR_5 = FUNC_1(VAR_2->kvm, VAR_4 >> VAR_0);
 FUNC_3(&VAR_2->kvm->mmu_lock);
 return VAR_5;
}
