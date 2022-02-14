
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioat2_dma_chan {int ring_lock; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct ioat2_dma_chan*) ;
 scalar_t__ FUNC_1 (struct ioat2_dma_chan*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ioat2_dma_chan* FUNC_4 (struct dma_chan*) ;

void FUNC_5(struct dma_chan *VAR_0)
{
 struct ioat2_dma_chan *VAR_1 = FUNC_4(VAR_0);

 if (FUNC_1(VAR_1)) {
  FUNC_2(&VAR_1->ring_lock);
  FUNC_0(VAR_1);
  FUNC_3(&VAR_1->ring_lock);
 }
}
