
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ioatdma_device {int completion_pool; int (* reset_hw ) (struct ioat_chan_common*) ;int (* cleanup_tasklet ) (unsigned long) ;} ;
struct ioat_ring_ent {int dummy; } ;
struct ioat_chan_common {scalar_t__ completion_dma; scalar_t__ last_completion; int completion; int state; int timer; int cleanup_task; struct ioatdma_device* device; } ;
struct ioat2_dma_chan {int alloc_order; scalar_t__ dmacount; int ring_lock; int * ring; scalar_t__ tail; scalar_t__ head; struct ioat_chan_common base; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int const) ;
 int FUNC_4 (struct ioat2_dma_chan*,struct ioat_ring_ent*) ;
 int FUNC_5 (struct ioat_ring_ent*,struct dma_chan*) ;
 struct ioat_ring_ent* FUNC_6 (struct ioat2_dma_chan*,scalar_t__) ;
 int FUNC_7 (struct ioat2_dma_chan*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (unsigned long) ;
 int FUNC_13 (struct ioat_chan_common*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct ioat_chan_common*) ;
 struct ioat2_dma_chan* FUNC_16 (struct dma_chan*) ;

void FUNC_17(struct dma_chan *VAR_1)
{
 struct ioat2_dma_chan *VAR_2 = FUNC_16(VAR_1);
 struct ioat_chan_common *VAR_3 = &VAR_2->base;
 struct ioatdma_device *VAR_4 = VAR_3->device;
 struct ioat_ring_ent *VAR_5;
 const u16 VAR_6 = 1 << VAR_2->alloc_order;
 int VAR_7;
 int VAR_8;




 if (!VAR_2->ring)
  return;

 FUNC_14(&VAR_3->cleanup_task);
 FUNC_1(&VAR_3->timer);
 VAR_4->cleanup_tasklet((unsigned long) VAR_2);
 VAR_4->reset_hw(VAR_3);
 FUNC_0(VAR_0, &VAR_3->state);

 FUNC_10(&VAR_2->ring_lock);
 VAR_7 = FUNC_7(VAR_2);
 FUNC_2(FUNC_15(VAR_3), "freeing %d idle descriptors\n", VAR_7);
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_5 = FUNC_6(VAR_2, VAR_2->head + VAR_8);
  FUNC_5(VAR_5, VAR_1);
 }

 if (VAR_7 < VAR_6)
  FUNC_3(FUNC_15(VAR_3), "Freeing %d in use descriptors!\n",
   VAR_6 - VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_6 - VAR_7; VAR_8++) {
  VAR_5 = FUNC_6(VAR_2, VAR_2->tail + VAR_8);
  FUNC_4(VAR_2, VAR_5);
  FUNC_5(VAR_5, VAR_1);
 }

 FUNC_8(VAR_2->ring);
 VAR_2->ring = ((void*)0);
 VAR_2->alloc_order = 0;
 FUNC_9(VAR_4->completion_pool, VAR_3->completion,
        VAR_3->completion_dma);
 FUNC_11(&VAR_2->ring_lock);

 VAR_3->last_completion = 0;
 VAR_3->completion_dma = 0;
 VAR_2->dmacount = 0;
}
