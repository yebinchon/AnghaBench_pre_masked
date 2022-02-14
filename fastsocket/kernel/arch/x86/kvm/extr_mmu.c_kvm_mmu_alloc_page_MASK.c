
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int mmu_page_cache; int mmu_page_header_cache; } ;
struct kvm_vcpu {TYPE_3__* kvm; TYPE_1__ arch; } ;
struct kvm_mmu_page {int * parent_pte; scalar_t__ multimapped; int slot_bitmap; int oos_link; int link; void* spt; void* gfns; } ;
struct TYPE_5__ {int active_mmu_pages; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int *,int *) ;
 void* FUNC_4 (int *,int) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static struct kvm_mmu_page *FUNC_7(struct kvm_vcpu *VAR_3,
            u64 *VAR_4)
{
 struct kvm_mmu_page *VAR_5;

 VAR_5 = FUNC_4(&VAR_3->arch.mmu_page_header_cache, sizeof *VAR_5);
 VAR_5->spt = FUNC_4(&VAR_3->arch.mmu_page_cache, VAR_2);
 VAR_5->gfns = FUNC_4(&VAR_3->arch.mmu_page_cache, VAR_2);
 FUNC_5(FUNC_6(VAR_5->spt), (unsigned long)VAR_5);
 FUNC_3(&VAR_5->link, &VAR_3->kvm->arch.active_mmu_pages);
 FUNC_0(&VAR_5->oos_link);
 FUNC_1(VAR_5->slot_bitmap, VAR_0 + VAR_1);
 VAR_5->multimapped = 0;
 VAR_5->parent_pte = VAR_4;
 FUNC_2(VAR_3->kvm, +1);
 return VAR_5;
}
