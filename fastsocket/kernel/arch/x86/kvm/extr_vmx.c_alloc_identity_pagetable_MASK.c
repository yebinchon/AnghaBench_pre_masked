
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_userspace_memory_region {int guest_phys_addr; int memory_size; scalar_t__ flags; int slot; } ;
struct TYPE_2__ {int ept_identity_map_addr; scalar_t__ ept_identity_pagetable; } ;
struct kvm {int slots_lock; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm*,struct kvm_userspace_memory_region*,int ) ;
 scalar_t__ FUNC_1 (struct kvm*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct kvm *VAR_3)
{
 struct kvm_userspace_memory_region VAR_4;
 int VAR_5 = 0;

 FUNC_2(&VAR_3->slots_lock);
 if (VAR_3->arch.ept_identity_pagetable)
  goto out;
 VAR_4.slot = VAR_0;
 VAR_4.flags = 0;
 VAR_4.guest_phys_addr =
  VAR_3->arch.ept_identity_map_addr;
 VAR_4.memory_size = VAR_2;
 VAR_5 = FUNC_0(VAR_3, &VAR_4, 0);
 if (VAR_5)
  goto out;

 VAR_3->arch.ept_identity_pagetable = FUNC_1(VAR_3,
   VAR_3->arch.ept_identity_map_addr >> VAR_1);
out:
 FUNC_3(&VAR_3->slots_lock);
 return VAR_5;
}
