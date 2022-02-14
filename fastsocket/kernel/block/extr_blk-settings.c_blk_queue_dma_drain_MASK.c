
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {unsigned int dma_drain_size; void* dma_drain_buffer; int * dma_drain_needed; } ;
typedef int dma_drain_needed_fn ;


 int VAR_0 ;
 int FUNC_0 (struct request_queue*,int) ;
 int FUNC_1 (struct request_queue*) ;

int FUNC_2(struct request_queue *VAR_1,
          dma_drain_needed_fn *VAR_2,
          void *VAR_3, unsigned int VAR_4)
{
 if (FUNC_1(VAR_1) < 2)
  return -VAR_0;

 FUNC_0(VAR_1, FUNC_1(VAR_1) - 1);
 VAR_1->dma_drain_needed = VAR_2;
 VAR_1->dma_drain_buffer = VAR_3;
 VAR_1->dma_drain_size = VAR_4;

 return 0;
}
