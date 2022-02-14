
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_userspace_memory_region {unsigned int guest_phys_addr; int memory_size; int flags; int slot; } ;
struct TYPE_2__ {unsigned int tss_addr; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm*) ;
 int FUNC_1 (struct kvm*,struct kvm_userspace_memory_region*,int ) ;

__attribute__((used)) static int FUNC_2(struct kvm *VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 struct kvm_userspace_memory_region VAR_6 = {
  .slot = VAR_2,
  .guest_phys_addr = VAR_4,
  .memory_size = VAR_1 * 3,
  .flags = 0,
 };

 VAR_5 = FUNC_1(VAR_3, &VAR_6, 0);
 if (VAR_5)
  return VAR_5;
 VAR_3->arch.tss_addr = VAR_4;
 if (!FUNC_0(VAR_3))
  return -VAR_0;

 return 0;
}
