
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_userspace_memory_region {int guest_phys_addr; int memory_size; scalar_t__ flags; int slot; } ;
struct TYPE_2__ {scalar_t__ apic_access_page; } ;
struct kvm {int slots_lock; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm*,struct kvm_userspace_memory_region*,int ) ;
 scalar_t__ FUNC_1 (struct kvm*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct kvm *VAR_2)
{
 struct kvm_userspace_memory_region VAR_3;
 int VAR_4 = 0;

 FUNC_2(&VAR_2->slots_lock);
 if (VAR_2->arch.apic_access_page)
  goto out;
 VAR_3.slot = VAR_0;
 VAR_3.flags = 0;
 VAR_3.guest_phys_addr = 0xfee00000ULL;
 VAR_3.memory_size = VAR_1;
 VAR_4 = FUNC_0(VAR_2, &VAR_3, 0);
 if (VAR_4)
  goto out;

 VAR_2->arch.apic_access_page = FUNC_1(VAR_2, 0xfee00);
out:
 FUNC_3(&VAR_2->slots_lock);
 return VAR_4;
}
