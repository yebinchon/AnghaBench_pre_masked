
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_userspace_memory_region {int dummy; } ;
struct kvm_memory_slot {int npages; scalar_t__ id; unsigned long userspace_addr; int rmap; } ;
struct kvm {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int mmap_sem; } ;


 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void*) ;
 TYPE_2__* VAR_7 ;
 unsigned long FUNC_2 (int *,int ,int,int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct kvm *VAR_8,
    struct kvm_memory_slot *VAR_9,
    struct kvm_memory_slot VAR_10,
    struct kvm_userspace_memory_region *VAR_11,
    int VAR_12)
{
 int VAR_13 = VAR_9->npages;
 int VAR_14 = VAR_2 | VAR_1;


 if (VAR_9->id >= VAR_0)
  VAR_14 = VAR_3 | VAR_1;




 if (!VAR_12) {
  if (VAR_13 && !VAR_10.rmap) {
   unsigned long VAR_15;

   FUNC_3(&VAR_7->mm->mmap_sem);
   VAR_15 = FUNC_2(((void*)0), 0,
       VAR_13 * VAR_4,
       VAR_5 | VAR_6,
       VAR_14,
       0);
   FUNC_4(&VAR_7->mm->mmap_sem);

   if (FUNC_0((void *)VAR_15))
    return FUNC_1((void *)VAR_15);

   VAR_9->userspace_addr = VAR_15;
  }
 }


 return 0;
}
