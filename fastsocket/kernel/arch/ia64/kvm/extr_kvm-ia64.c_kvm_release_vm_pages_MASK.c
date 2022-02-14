
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kvm_memslots {int nmemslots; struct kvm_memory_slot* memslots; } ;
struct kvm_memory_slot {unsigned long base_gfn; int npages; scalar_t__* rmap; } ;
struct kvm {int memslots; } ;


 int FUNC_0 (struct page*) ;
 struct kvm_memslots* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct kvm *VAR_0)
{
 struct kvm_memslots *VAR_1;
 struct kvm_memory_slot *VAR_2;
 int VAR_3, VAR_4;
 unsigned long VAR_5;

 VAR_1 = FUNC_1(VAR_0->memslots);
 for (VAR_3 = 0; VAR_3 < VAR_1->nmemslots; VAR_3++) {
  VAR_2 = &VAR_1->memslots[VAR_3];
  VAR_5 = VAR_2->base_gfn;

  for (VAR_4 = 0; VAR_4 < VAR_2->npages; VAR_4++) {
   if (VAR_2->rmap[VAR_4])
    FUNC_0((struct page *)VAR_2->rmap[VAR_4]);
  }
 }
}
