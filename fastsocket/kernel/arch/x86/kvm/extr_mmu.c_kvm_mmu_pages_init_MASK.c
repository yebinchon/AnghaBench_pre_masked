
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmu_page_path {int ** parent; } ;
struct kvm_mmu_pages {scalar_t__ nr; } ;
struct TYPE_2__ {int level; } ;
struct kvm_mmu_page {TYPE_1__ role; } ;



__attribute__((used)) static void FUNC_0(struct kvm_mmu_page *VAR_0,
          struct mmu_page_path *VAR_1,
          struct kvm_mmu_pages *VAR_2)
{
 VAR_1->parent[VAR_0->role.level-1] = ((void*)0);
 VAR_2->nr = 0;
}
