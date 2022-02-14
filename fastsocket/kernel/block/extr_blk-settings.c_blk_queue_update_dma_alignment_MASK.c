
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dma_alignment; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

void FUNC_1(struct request_queue *VAR_1, int VAR_2)
{
 FUNC_0(VAR_2 > VAR_0);

 if (VAR_2 > VAR_1->dma_alignment)
  VAR_1->dma_alignment = VAR_2;
}
