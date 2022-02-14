
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int invalid; int direct; } ;
struct kvm_mmu_page {int link; TYPE_2__ role; int hash_link; int root_count; scalar_t__ unsync; int gfn; } ;
struct TYPE_6__ {int active_mmu_pages; } ;
struct TYPE_4__ {int mmu_shadow_zapped; } ;
struct kvm {TYPE_3__ arch; TYPE_1__ stat; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvm*) ;
 int FUNC_2 (struct kvm*,struct kvm_mmu_page*) ;
 int FUNC_3 (struct kvm*,struct kvm_mmu_page*) ;
 int FUNC_4 (struct kvm*) ;
 int FUNC_5 (struct kvm*,struct kvm_mmu_page*) ;
 int FUNC_6 (struct kvm*) ;
 int FUNC_7 (struct kvm*,struct kvm_mmu_page*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct kvm*,struct kvm_mmu_page*) ;
 int FUNC_10 (struct kvm_mmu_page*) ;
 int FUNC_11 (struct kvm*,int ) ;

__attribute__((used)) static int FUNC_12(struct kvm *VAR_0, struct kvm_mmu_page *VAR_1)
{
 int VAR_2;

 FUNC_10(VAR_1);
 ++VAR_0->stat.mmu_shadow_zapped;
 VAR_2 = FUNC_9(VAR_0, VAR_1);
 FUNC_3(VAR_0, VAR_1);
 FUNC_5(VAR_0, VAR_1);
 FUNC_1(VAR_0);
 if (!VAR_1->role.invalid && !VAR_1->role.direct)
  FUNC_11(VAR_0, VAR_1->gfn);
 if (VAR_1->unsync)
  FUNC_7(VAR_0, VAR_1);
 if (!VAR_1->root_count) {
  FUNC_0(&VAR_1->hash_link);
  FUNC_2(VAR_0, VAR_1);
 } else {
  VAR_1->role.invalid = 1;
  FUNC_8(&VAR_1->link, &VAR_0->arch.active_mmu_pages);
  FUNC_6(VAR_0);
 }
 FUNC_4(VAR_0);
 return VAR_2;
}
