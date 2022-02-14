
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_mmu_page {int slot_bitmap; } ;
struct kvm {int dummy; } ;
typedef int gfn_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct kvm*,int ) ;
 struct kvm_mmu_page* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct kvm *VAR_0, void *VAR_1, gfn_t VAR_2)
{
 int VAR_3 = FUNC_2(VAR_0, VAR_2);
 struct kvm_mmu_page *VAR_4 = FUNC_3(FUNC_0(VAR_1));

 FUNC_1(VAR_3, VAR_4->slot_bitmap);
}
