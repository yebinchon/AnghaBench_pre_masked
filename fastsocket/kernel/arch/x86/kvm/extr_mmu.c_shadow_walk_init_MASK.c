
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {scalar_t__ shadow_root_level; int * pae_root; int root_hpa; } ;
struct TYPE_4__ {TYPE_1__ mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct kvm_shadow_walk_iterator {int addr; scalar_t__ level; int shadow_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct kvm_shadow_walk_iterator *VAR_2,
        struct kvm_vcpu *VAR_3, u64 VAR_4)
{
 VAR_2->addr = VAR_4;
 VAR_2->shadow_addr = VAR_3->arch.mmu.root_hpa;
 VAR_2->level = VAR_3->arch.mmu.shadow_root_level;
 if (VAR_2->level == VAR_0) {
  VAR_2->shadow_addr
   = VAR_3->arch.mmu.pae_root[(VAR_4 >> 30) & 3];
  VAR_2->shadow_addr &= VAR_1;
  --VAR_2->level;
  if (!VAR_2->shadow_addr)
   VAR_2->level = 0;
 }
}
