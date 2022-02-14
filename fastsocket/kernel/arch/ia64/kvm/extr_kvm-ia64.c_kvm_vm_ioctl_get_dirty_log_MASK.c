
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_memory_slot {int dirty_bitmap; } ;
struct kvm_dirty_log {size_t slot; } ;
struct TYPE_4__ {int dirty_log_lock; } ;
struct kvm {TYPE_2__ arch; int slots_lock; TYPE_1__* memslots; } ;
struct TYPE_3__ {struct kvm_memory_slot* memslots; } ;


 unsigned long FUNC_0 (struct kvm_memory_slot*) ;
 int FUNC_1 (struct kvm*) ;
 int FUNC_2 (struct kvm*,struct kvm_dirty_log*,int*) ;
 int FUNC_3 (struct kvm*,struct kvm_dirty_log*) ;
 int FUNC_4 (int ,int ,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct kvm *VAR_0,
  struct kvm_dirty_log *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;
 struct kvm_memory_slot *VAR_4;
 int VAR_5 = 0;

 FUNC_5(&VAR_0->slots_lock);
 FUNC_7(&VAR_0->arch.dirty_log_lock);

 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_2(VAR_0, VAR_1, &VAR_5);
 if (VAR_2)
  goto out;


 if (VAR_5) {
  FUNC_1(VAR_0);
  VAR_4 = &VAR_0->memslots->memslots[VAR_1->slot];
  VAR_3 = FUNC_0(VAR_4);
  FUNC_4(VAR_4->dirty_bitmap, 0, VAR_3);
 }
 VAR_2 = 0;
out:
 FUNC_6(&VAR_0->slots_lock);
 FUNC_8(&VAR_0->arch.dirty_log_lock);
 return VAR_2;
}
