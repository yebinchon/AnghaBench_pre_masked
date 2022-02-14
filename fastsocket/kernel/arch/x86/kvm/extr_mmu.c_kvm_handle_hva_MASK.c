
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_memslots {int nmemslots; struct kvm_memory_slot* memslots; } ;
struct kvm_memory_slot {unsigned long userspace_addr; unsigned long npages; unsigned long* rmap; size_t base_gfn; TYPE_1__** lpage_info; } ;
struct kvm {int memslots; } ;
typedef size_t gfn_t ;
struct TYPE_2__ {unsigned long rmap_pde; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 struct kvm_memslots* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct kvm *VAR_3, unsigned long VAR_4,
     unsigned long VAR_5,
     int (*VAR_6)(struct kvm *VAR_7, unsigned long *VAR_8,
      unsigned long VAR_9))
{
 int VAR_10, VAR_11;
 int VAR_12 = 0;
 struct kvm_memslots *VAR_13;

 VAR_13 = FUNC_1(VAR_3->memslots);

 for (VAR_10 = 0; VAR_10 < VAR_13->nmemslots; VAR_10++) {
  struct kvm_memory_slot *VAR_14 = &VAR_13->memslots[VAR_10];
  unsigned long VAR_15 = VAR_14->userspace_addr;
  unsigned long VAR_16;

  VAR_16 = VAR_15 + (VAR_14->npages << VAR_1);
  if (VAR_4 >= VAR_15 && VAR_4 < VAR_16) {
   gfn_t VAR_17 = (VAR_4 - VAR_15) >> VAR_1;

   VAR_12 |= VAR_6(VAR_3, &VAR_14->rmap[VAR_17],
       VAR_5);

   for (VAR_11 = 0; VAR_11 < VAR_0 - 1; ++VAR_11) {
    unsigned long VAR_18;
    int VAR_19;

    VAR_19 = FUNC_0(VAR_2+VAR_11);
    VAR_18 = (VAR_14->base_gfn+VAR_17) / VAR_19 -
     VAR_14->base_gfn / VAR_19;
    VAR_12 |= VAR_6(VAR_3,
     &VAR_14->lpage_info[VAR_11][VAR_18].rmap_pde,
     VAR_5);
   }
  }
 }

 return VAR_12;
}
