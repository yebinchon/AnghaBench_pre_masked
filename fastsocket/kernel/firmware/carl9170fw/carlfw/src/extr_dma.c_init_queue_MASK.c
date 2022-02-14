
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_queue {struct dma_desc* terminator; struct dma_desc* head; } ;
struct dma_desc {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct dma_queue *VAR_0, struct dma_desc *VAR_1)
{
 VAR_0->head = VAR_0->terminator = VAR_1;
}
