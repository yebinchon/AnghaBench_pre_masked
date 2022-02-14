
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {unsigned int desc_count; scalar_t__ base_addr; } ;
struct vnic_cq {unsigned int interrupt_offset; TYPE_2__* ctrl; TYPE_1__ ring; } ;
struct TYPE_4__ {int cq_message_addr; int interrupt_offset; int cq_message_enable; int cq_entry_enable; int interrupt_enable; int cq_tail_color; int cq_tail; int cq_head; int color_enable; int flow_control_enable; int ring_size; int ring_base; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct vnic_cq *VAR_1, unsigned int VAR_2,
 unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5,
 unsigned int VAR_6, unsigned int VAR_7,
 unsigned int VAR_8, unsigned int VAR_9,
 unsigned int VAR_10, u64 VAR_11)
{
 u64 VAR_12;

 VAR_12 = (u64)VAR_1->ring.base_addr | VAR_0;
 FUNC_1(VAR_12, &VAR_1->ctrl->ring_base);
 FUNC_0(VAR_1->ring.desc_count, &VAR_1->ctrl->ring_size);
 FUNC_0(VAR_2, &VAR_1->ctrl->flow_control_enable);
 FUNC_0(VAR_3, &VAR_1->ctrl->color_enable);
 FUNC_0(VAR_4, &VAR_1->ctrl->cq_head);
 FUNC_0(VAR_5, &VAR_1->ctrl->cq_tail);
 FUNC_0(VAR_6, &VAR_1->ctrl->cq_tail_color);
 FUNC_0(VAR_7, &VAR_1->ctrl->interrupt_enable);
 FUNC_0(VAR_8, &VAR_1->ctrl->cq_entry_enable);
 FUNC_0(VAR_9, &VAR_1->ctrl->cq_message_enable);
 FUNC_0(VAR_10, &VAR_1->ctrl->interrupt_offset);
 FUNC_1(VAR_11, &VAR_1->ctrl->cq_message_addr);

 VAR_1->interrupt_offset = VAR_10;
}
