
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int root_hpa; scalar_t__ shadow_root_level; int* pae_root; } ;
struct TYPE_7__ {TYPE_2__ mmu; } ;
struct kvm_vcpu {TYPE_3__ arch; TYPE_4__* kvm; } ;
struct TYPE_5__ {scalar_t__ invalid; } ;
struct kvm_mmu_page {TYPE_1__ role; int root_count; } ;
typedef int hpa_t ;
struct TYPE_8__ {int mmu_lock; } ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,struct kvm_mmu_page*) ;
 struct kvm_mmu_page* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_3)
{
 int VAR_4;
 struct kvm_mmu_page *VAR_5;

 if (!FUNC_0(VAR_3->arch.mmu.root_hpa))
  return;
 FUNC_3(&VAR_3->kvm->mmu_lock);
 if (VAR_3->arch.mmu.shadow_root_level == VAR_2) {
  hpa_t VAR_6 = VAR_3->arch.mmu.root_hpa;

  VAR_5 = FUNC_2(VAR_6);
  --VAR_5->root_count;
  if (!VAR_5->root_count && VAR_5->role.invalid)
   FUNC_1(VAR_3->kvm, VAR_5);
  VAR_3->arch.mmu.root_hpa = VAR_0;
  FUNC_4(&VAR_3->kvm->mmu_lock);
  return;
 }
 for (VAR_4 = 0; VAR_4 < 4; ++VAR_4) {
  hpa_t VAR_7 = VAR_3->arch.mmu.pae_root[VAR_4];

  if (VAR_7) {
   VAR_7 &= VAR_1;
   VAR_5 = FUNC_2(VAR_7);
   --VAR_5->root_count;
   if (!VAR_5->root_count && VAR_5->role.invalid)
    FUNC_1(VAR_3->kvm, VAR_5);
  }
  VAR_3->arch.mmu.pae_root[VAR_4] = VAR_0;
 }
 FUNC_4(&VAR_3->kvm->mmu_lock);
 VAR_3->arch.mmu.root_hpa = VAR_0;
}
