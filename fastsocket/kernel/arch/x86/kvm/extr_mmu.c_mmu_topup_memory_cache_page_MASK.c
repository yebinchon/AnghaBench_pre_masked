
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kvm_mmu_memory_cache {int nobjs; int * objects; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int ) ;

__attribute__((used)) static int FUNC_4(struct kvm_mmu_memory_cache *VAR_2,
           int VAR_3)
{
 struct page *VAR_4;

 if (VAR_2->nobjs >= VAR_3)
  return 0;
 while (VAR_2->nobjs < FUNC_0(VAR_2->objects)) {
  VAR_4 = FUNC_1(VAR_1);
  if (!VAR_4)
   return -VAR_0;
  FUNC_3(VAR_4, 0);
  VAR_2->objects[VAR_2->nobjs++] = FUNC_2(VAR_4);
 }
 return 0;
}
