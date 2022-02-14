
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memslots {struct kvm_memory_slot* memslots; int generation; } ;
struct kvm_memory_slot {unsigned long* dirty_bitmap; } ;
struct kvm_dirty_log {size_t slot; int dirty_bitmap; } ;
struct kvm {int slots_lock; int mmu_lock; int srcu; struct kvm_memslots* memslots; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (int ,unsigned long*,unsigned long) ;
 int FUNC_1 (struct kvm_memslots*) ;
 unsigned long FUNC_2 (struct kvm_memory_slot*) ;
 int FUNC_3 (struct kvm*,size_t,int) ;
 struct kvm_memslots* FUNC_4 (int,int ) ;
 int FUNC_5 (struct kvm_memslots*,struct kvm_memslots*,int) ;
 int FUNC_6 (unsigned long*,int ,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct kvm_memslots*,struct kvm_memslots*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (unsigned long*) ;
 unsigned long* FUNC_14 (unsigned long) ;

int FUNC_15(struct kvm *VAR_6,
          struct kvm_dirty_log *VAR_7)
{
 int VAR_8, VAR_9;
 struct kvm_memory_slot *VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12 = 0;
 unsigned long *VAR_13 = ((void*)0);

 FUNC_7(&VAR_6->slots_lock);

 VAR_8 = -VAR_1;
 if (VAR_7->slot >= VAR_5)
  goto out;

 VAR_10 = &VAR_6->memslots->memslots[VAR_7->slot];
 VAR_8 = -VAR_2;
 if (!VAR_10->dirty_bitmap)
  goto out;

 VAR_11 = FUNC_2(VAR_10);

 VAR_8 = -VAR_3;
 VAR_13 = FUNC_14(VAR_11);
 if (!VAR_13)
  goto out;
 FUNC_6(VAR_13, 0, VAR_11);

 for (VAR_9 = 0; !VAR_12 && VAR_9 < VAR_11/sizeof(long); VAR_9++)
  VAR_12 = VAR_10->dirty_bitmap[VAR_9];


 if (VAR_12) {
  struct kvm_memslots *VAR_14, *VAR_15;

  VAR_14 = FUNC_4(sizeof(struct kvm_memslots), VAR_4);
  if (!VAR_14)
   goto out_free;

  FUNC_5(VAR_14, VAR_6->memslots, sizeof(struct kvm_memslots));
  VAR_14->memslots[VAR_7->slot].dirty_bitmap = VAR_13;
  VAR_14->generation++;

  VAR_15 = VAR_6->memslots;
  FUNC_9(VAR_6->memslots, VAR_14);
  FUNC_12(&VAR_6->srcu);
  VAR_13 = VAR_15->memslots[VAR_7->slot].dirty_bitmap;
  FUNC_1(VAR_15);

  FUNC_10(&VAR_6->mmu_lock);
  FUNC_3(VAR_6, VAR_7->slot, 0);
  FUNC_11(&VAR_6->mmu_lock);
 }

 VAR_8 = 0;
 if (FUNC_0(VAR_7->dirty_bitmap, VAR_13, VAR_11))
  VAR_8 = -VAR_0;
out_free:
 FUNC_13(VAR_13);
out:
 FUNC_8(&VAR_6->slots_lock);
 return VAR_8;
}
