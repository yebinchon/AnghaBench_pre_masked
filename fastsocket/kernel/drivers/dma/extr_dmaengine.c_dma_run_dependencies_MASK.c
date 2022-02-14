
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_chan {TYPE_1__* device; } ;
struct dma_async_tx_descriptor {int (* tx_submit ) (struct dma_async_tx_descriptor*) ;int lock; struct dma_async_tx_descriptor* next; struct dma_chan* chan; int * parent; } ;
struct TYPE_2__ {int (* device_issue_pending ) (struct dma_chan*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dma_async_tx_descriptor*) ;
 int FUNC_3 (struct dma_chan*) ;

void FUNC_4(struct dma_async_tx_descriptor *VAR_0)
{
 struct dma_async_tx_descriptor *VAR_1 = VAR_0->next;
 struct dma_async_tx_descriptor *VAR_2;
 struct dma_chan *VAR_3;

 if (!VAR_1)
  return;


 VAR_0->next = ((void*)0);
 VAR_3 = VAR_1->chan;





 for (; VAR_1; VAR_1 = VAR_2) {
  FUNC_0(&VAR_1->lock);
  VAR_1->parent = ((void*)0);
  VAR_2 = VAR_1->next;
  if (VAR_2 && VAR_2->chan == VAR_3)
   VAR_1->next = ((void*)0);
  else
   VAR_2 = ((void*)0);
  FUNC_1(&VAR_1->lock);

  VAR_1->tx_submit(VAR_1);
 }

 VAR_3->device->device_issue_pending(VAR_3);
}
