
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ shadow_root_level; int * pae_root; int root_hpa; } ;
struct TYPE_3__ {TYPE_2__ mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_mmu_page {int dummy; } ;
typedef int hpa_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_mmu_page*) ;
 struct kvm_mmu_page* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_2)
{
 int VAR_3;
 struct kvm_mmu_page *VAR_4;

 if (!FUNC_0(VAR_2->arch.mmu.root_hpa))
  return;
 if (VAR_2->arch.mmu.shadow_root_level == VAR_1) {
  hpa_t VAR_5 = VAR_2->arch.mmu.root_hpa;
  VAR_4 = FUNC_2(VAR_5);
  FUNC_1(VAR_2, VAR_4);
  return;
 }
 for (VAR_3 = 0; VAR_3 < 4; ++VAR_3) {
  hpa_t VAR_6 = VAR_2->arch.mmu.pae_root[VAR_3];

  if (VAR_6 && FUNC_0(VAR_6)) {
   VAR_6 &= VAR_0;
   VAR_4 = FUNC_2(VAR_6);
   FUNC_1(VAR_2, VAR_4);
  }
 }
}
