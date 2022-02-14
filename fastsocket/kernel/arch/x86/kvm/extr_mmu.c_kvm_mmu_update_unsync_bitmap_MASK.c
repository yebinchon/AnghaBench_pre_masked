
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_mmu_page {int unsync_children; int unsync_child_bitmap; int * spt; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int,int ) ;
 struct kvm_mmu_page* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(u64 *VAR_0)
{
 unsigned int VAR_1;
 struct kvm_mmu_page *VAR_2 = FUNC_3(FUNC_1(VAR_0));

 VAR_1 = VAR_0 - VAR_2->spt;
 if (!FUNC_2(VAR_1, VAR_2->unsync_child_bitmap))
  VAR_2->unsync_children++;
 FUNC_0(!VAR_2->unsync_children);
}
