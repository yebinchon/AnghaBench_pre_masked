
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mmu_page_header_cache; int mmu_page_cache; int mmu_rmap_desc_cache; int mmu_pte_chain_cache; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_3->arch.mmu_pte_chain_cache,
       VAR_1, 4);
 if (VAR_4)
  goto out;
 VAR_4 = FUNC_0(&VAR_3->arch.mmu_rmap_desc_cache,
       VAR_2, 4);
 if (VAR_4)
  goto out;
 VAR_4 = FUNC_1(&VAR_3->arch.mmu_page_cache, 8);
 if (VAR_4)
  goto out;
 VAR_4 = FUNC_0(&VAR_3->arch.mmu_page_header_cache,
       VAR_0, 4);
out:
 return VAR_4;
}
