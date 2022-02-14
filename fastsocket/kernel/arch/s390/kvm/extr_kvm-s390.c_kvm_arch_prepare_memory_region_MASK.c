
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_userspace_memory_region {int userspace_addr; int memory_size; scalar_t__ guest_phys_addr; scalar_t__ slot; } ;
struct kvm_memory_slot {int dummy; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct kvm *VAR_2,
       struct kvm_memory_slot *VAR_3,
       struct kvm_memory_slot VAR_4,
       struct kvm_userspace_memory_region *VAR_5,
       int VAR_6)
{







 if (VAR_5->slot)
  return -VAR_0;

 if (VAR_5->guest_phys_addr)
  return -VAR_0;

 if (VAR_5->userspace_addr & (VAR_1 - 1))
  return -VAR_0;

 if (VAR_5->memory_size & (VAR_1 - 1))
  return -VAR_0;

 if (!VAR_6)
  return -VAR_0;

 return 0;
}
