
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_mmu_page {int gfns; int spt; int link; } ;
struct kvm {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kvm_mmu_page*) ;
 int FUNC_4 (struct kvm*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct kvm *VAR_0, struct kvm_mmu_page *VAR_1)
{
 FUNC_0(FUNC_2(VAR_1->spt));
 FUNC_5(&VAR_1->link);
 FUNC_1(FUNC_6(VAR_1->spt));
 FUNC_1(FUNC_6(VAR_1->gfns));
 FUNC_3(VAR_1);
 FUNC_4(VAR_0, -1);
}
