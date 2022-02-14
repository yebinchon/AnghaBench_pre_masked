
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnic_cq {int ring; TYPE_1__* ctrl; scalar_t__ last_color; scalar_t__ to_clean; } ;
struct TYPE_2__ {int cq_tail_color; int cq_tail; int cq_head; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct vnic_cq *VAR_0)
{
 VAR_0->to_clean = 0;
 VAR_0->last_color = 0;

 FUNC_0(0, &VAR_0->ctrl->cq_head);
 FUNC_0(0, &VAR_0->ctrl->cq_tail);
 FUNC_0(1, &VAR_0->ctrl->cq_tail_color);

 FUNC_1(&VAR_0->ring);
}
