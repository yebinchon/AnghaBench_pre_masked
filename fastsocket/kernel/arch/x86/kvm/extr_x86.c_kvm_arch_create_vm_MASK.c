
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_mem_aliases {int dummy; } ;
struct TYPE_2__ {int tsc_write_lock; int irq_sources_bitmap; int assigned_dev_head; int active_mmu_pages; void* aliases; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 struct kvm* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct kvm*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

struct kvm *FUNC_6(void)
{
 struct kvm *VAR_3 = FUNC_3(sizeof(struct kvm), VAR_1);

 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_3->arch.aliases = FUNC_3(sizeof(struct kvm_mem_aliases), VAR_1);
 if (!VAR_3->arch.aliases) {
  FUNC_2(VAR_3);
  return FUNC_0(-VAR_0);
 }

 FUNC_1(&VAR_3->arch.active_mmu_pages);
 FUNC_1(&VAR_3->arch.assigned_dev_head);


 FUNC_4(VAR_2, &VAR_3->arch.irq_sources_bitmap);

 FUNC_5(&VAR_3->arch.tsc_write_lock);

 return VAR_3;
}
