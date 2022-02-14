
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_queue {struct dma_desc* head; } ;
struct dma_desc {struct dma_desc* lastAddr; struct dma_desc* nextAddr; } ;


 scalar_t__ FUNC_0 (struct dma_queue*) ;

struct dma_desc *FUNC_1(struct dma_queue *VAR_0)
{
 struct dma_desc *VAR_1;

 if (FUNC_0(VAR_0))
  return ((void*)0);

 VAR_1 = VAR_0->head;

 VAR_0->head = VAR_1->lastAddr->nextAddr;


 VAR_1->lastAddr->nextAddr = VAR_1->lastAddr;
 VAR_1->lastAddr->lastAddr = VAR_1->lastAddr;

 return VAR_1;
}
