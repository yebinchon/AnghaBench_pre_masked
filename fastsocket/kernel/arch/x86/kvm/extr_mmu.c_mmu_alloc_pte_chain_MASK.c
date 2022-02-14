
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mmu_pte_chain_cache; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_pte_chain {int dummy; } ;


 struct kvm_pte_chain* FUNC_0 (int *,int) ;

__attribute__((used)) static struct kvm_pte_chain *FUNC_1(struct kvm_vcpu *VAR_0)
{
 return FUNC_0(&VAR_0->arch.mmu_pte_chain_cache,
          sizeof(struct kvm_pte_chain));
}
