
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap24xxcam_sgdma {int free_sgdma; int reset_timer; int dma; TYPE_1__* sg_state; scalar_t__ next_sgdma; int lock; } ;
struct TYPE_2__ {int * arg; int * callback; scalar_t__ csr; scalar_t__ queued_sglist; scalar_t__ bytes_read; scalar_t__ next_sglist; scalar_t__ sglen; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,void (*) (unsigned long),unsigned long) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct omap24xxcam_sgdma *VAR_1,
       unsigned long VAR_2,
       void (*VAR_3)(unsigned long VAR_4),
       unsigned long VAR_5)
{
 int VAR_6;

 FUNC_2(&VAR_1->lock);
 VAR_1->free_sgdma = VAR_0;
 VAR_1->next_sgdma = 0;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_1->sg_state[VAR_6].sglen = 0;
  VAR_1->sg_state[VAR_6].next_sglist = 0;
  VAR_1->sg_state[VAR_6].bytes_read = 0;
  VAR_1->sg_state[VAR_6].queued_sglist = 0;
  VAR_1->sg_state[VAR_6].csr = 0;
  VAR_1->sg_state[VAR_6].callback = ((void*)0);
  VAR_1->sg_state[VAR_6].arg = ((void*)0);
 }

 FUNC_0(&VAR_1->dma, VAR_2);
 FUNC_1(&VAR_1->reset_timer, VAR_3, VAR_5);
}
