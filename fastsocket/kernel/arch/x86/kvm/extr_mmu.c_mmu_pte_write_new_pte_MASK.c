
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {TYPE_2__* kvm; } ;
struct TYPE_6__ {scalar_t__ level; scalar_t__ glevels; } ;
struct kvm_mmu_page {TYPE_3__ role; } ;
struct TYPE_4__ {int mmu_pte_updated; int mmu_pde_zapped; } ;
struct TYPE_5__ {TYPE_1__ stat; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_mmu_page*,int *,void const*) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_mmu_page*,int *,void const*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_2,
      struct kvm_mmu_page *VAR_3,
      u64 *VAR_4,
      const void *VAR_5)
{
 if (VAR_3->role.level != VAR_1) {
  ++VAR_2->kvm->stat.mmu_pde_zapped;
  return;
        }

 ++VAR_2->kvm->stat.mmu_pte_updated;
 if (VAR_3->role.glevels == VAR_0)
  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 else
  FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}
