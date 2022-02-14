
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct TYPE_3__ {size_t desc_count; scalar_t__ base_addr; } ;
struct vnic_rq {scalar_t__ buf_index; TYPE_2__* ctrl; int ** bufs; int * to_clean; int * to_use; TYPE_1__ ring; } ;
struct TYPE_4__ {int posted_index; int fetch_index; int error_status; int dropped_packet_count; int error_interrupt_offset; int error_interrupt_enable; int cq_index; int ring_size; int ring_base; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int *) ;
 int FUNC_1 (size_t,int *) ;
 int FUNC_2 (int,int *) ;

void FUNC_3(struct vnic_rq *VAR_2, unsigned int VAR_3,
 unsigned int VAR_4,
 unsigned int VAR_5)
{
 u64 VAR_6;
 u32 VAR_7;

 VAR_6 = (u64)VAR_2->ring.base_addr | VAR_0;
 FUNC_2(VAR_6, &VAR_2->ctrl->ring_base);
 FUNC_1(VAR_2->ring.desc_count, &VAR_2->ctrl->ring_size);
 FUNC_1(VAR_3, &VAR_2->ctrl->cq_index);
 FUNC_1(VAR_4, &VAR_2->ctrl->error_interrupt_enable);
 FUNC_1(VAR_5, &VAR_2->ctrl->error_interrupt_offset);
 FUNC_1(0, &VAR_2->ctrl->dropped_packet_count);
 FUNC_1(0, &VAR_2->ctrl->error_status);


 VAR_7 = FUNC_0(&VAR_2->ctrl->fetch_index);
 VAR_2->to_use = VAR_2->to_clean =
  &VAR_2->bufs[VAR_7 / VAR_1]
   [VAR_7 % VAR_1];
 FUNC_1(VAR_7, &VAR_2->ctrl->posted_index);

 VAR_2->buf_index = 0;
}
