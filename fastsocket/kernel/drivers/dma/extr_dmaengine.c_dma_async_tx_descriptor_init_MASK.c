
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int lock; struct dma_chan* chan; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct dma_async_tx_descriptor *VAR_0,
 struct dma_chan *VAR_1)
{
 VAR_0->chan = VAR_1;
 FUNC_0(&VAR_0->lock);
}
