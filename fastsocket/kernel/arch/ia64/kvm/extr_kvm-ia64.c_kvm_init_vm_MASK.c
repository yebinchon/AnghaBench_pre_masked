
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_sources_bitmap; int assigned_dev_head; int vmm_init_rr; int metaphysical_rr4; int metaphysical_rr0; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct kvm*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct kvm *VAR_4)
{
 FUNC_0(!VAR_4);

 VAR_4->arch.metaphysical_rr0 = VAR_0;
 VAR_4->arch.metaphysical_rr4 = VAR_1;
 VAR_4->arch.vmm_init_rr = VAR_3;




 FUNC_2(VAR_4);

 FUNC_1(&VAR_4->arch.assigned_dev_head);


 FUNC_3(VAR_2, &VAR_4->arch.irq_sources_bitmap);
}
