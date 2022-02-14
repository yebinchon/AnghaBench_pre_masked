
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_3__* kvm; TYPE_2__ arch; } ;
struct kvm_memslots {struct kvm_memory_slot* memslots; } ;
struct kvm_memory_slot {int npages; scalar_t__ userspace_addr; } ;
struct TYPE_6__ {int srcu; int memslots; } ;
struct TYPE_4__ {scalar_t__ gmslm; scalar_t__ gmsor; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct kvm_memslots* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline void FUNC_3(struct kvm_vcpu *VAR_2)
{
 int VAR_3;
 struct kvm_memory_slot *VAR_4;
 struct kvm_memslots *VAR_5;

 VAR_3 = FUNC_1(&VAR_2->kvm->srcu);
 VAR_5 = FUNC_0(VAR_2->kvm->memslots);

 VAR_4 = &VAR_5->memslots[0];

 VAR_2->arch.sie_block->gmsor = VAR_4->userspace_addr;
 VAR_2->arch.sie_block->gmslm =
  VAR_4->userspace_addr +
  (VAR_4->npages << VAR_0) +
  VAR_1 - 1ul;

 FUNC_2(&VAR_2->kvm->srcu, VAR_3);
}
