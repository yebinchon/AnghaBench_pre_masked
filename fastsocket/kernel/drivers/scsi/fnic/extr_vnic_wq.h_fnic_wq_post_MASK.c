
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnic_wq_buf {int sop; unsigned int len; int index; struct vnic_wq_buf* next; int dma_addr; void* os_buf; } ;
struct TYPE_4__ {int desc_avail; } ;
struct vnic_wq {TYPE_2__ ring; struct vnic_wq_buf* to_use; TYPE_1__* ctrl; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int posted_index; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct vnic_wq *VAR_0,
 void *VAR_1, dma_addr_t VAR_2,
 unsigned int VAR_3, int VAR_4, int VAR_5)
{
 struct vnic_wq_buf *VAR_6 = VAR_0->to_use;

 VAR_6->sop = VAR_4;
 VAR_6->os_buf = VAR_5 ? VAR_1 : ((void*)0);
 VAR_6->dma_addr = VAR_2;
 VAR_6->len = VAR_3;

 VAR_6 = VAR_6->next;
 if (VAR_5) {





  FUNC_1();
  FUNC_0(VAR_6->index, &VAR_0->ctrl->posted_index);
 }
 VAR_0->to_use = VAR_6;

 VAR_0->ring.desc_avail--;
}
