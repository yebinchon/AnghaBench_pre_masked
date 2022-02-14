
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_userspace_memory_region {int dummy; } ;
struct kvm_memory_slot {int npages; unsigned long base_gfn; unsigned long* rmap; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_0 (struct kvm*,unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct kvm*,unsigned long,unsigned long,int) ;
 scalar_t__ FUNC_3 (unsigned long) ;

int FUNC_4(struct kvm *VAR_7,
  struct kvm_memory_slot *VAR_8,
  struct kvm_memory_slot VAR_9,
  struct kvm_userspace_memory_region *VAR_10,
  int VAR_11)
{
 unsigned long VAR_12;
 unsigned long VAR_13;
 int VAR_14 = VAR_8->npages;
 unsigned long VAR_15 = VAR_8->base_gfn;

 if (VAR_15 + VAR_14 > (VAR_2 >> VAR_3))
  return -VAR_0;

 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
  VAR_13 = FUNC_0(VAR_7, VAR_15 + VAR_12);
  if (!FUNC_1(VAR_13)) {
   FUNC_2(VAR_7, VAR_15 + VAR_12,
     VAR_13 << VAR_3,
    VAR_4 | VAR_6);
   VAR_8->rmap[VAR_12] = (unsigned long)FUNC_3(VAR_13);
  } else {
   FUNC_2(VAR_7, VAR_15 + VAR_12,
     VAR_1 | (VAR_13 << VAR_3),
     VAR_5);
   VAR_8->rmap[VAR_12] = 0;
   }
 }

 return 0;
}
