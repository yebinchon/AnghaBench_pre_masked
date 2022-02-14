
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnic_intr {TYPE_1__* ctrl; } ;
struct TYPE_2__ {int int_credits; int mask_on_assertion; int coalescing_type; int coalescing_timer; } ;


 int FUNC_0 (unsigned int,int *) ;

void FUNC_1(struct vnic_intr *VAR_0, unsigned int VAR_1,
 unsigned int VAR_2, unsigned int VAR_3)
{
 FUNC_0(VAR_1, &VAR_0->ctrl->coalescing_timer);
 FUNC_0(VAR_2, &VAR_0->ctrl->coalescing_type);
 FUNC_0(VAR_3, &VAR_0->ctrl->mask_on_assertion);
 FUNC_0(0, &VAR_0->ctrl->int_credits);
}
