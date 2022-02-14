
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_dma_chan {int lock; int queue; } ;
struct dma_chan {int device; } ;


 int FUNC_0 (int ,struct dw_dma_chan*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 struct dw_dma_chan* FUNC_5 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_6(struct dma_chan *VAR_0)
{
 struct dw_dma_chan *VAR_1 = FUNC_5(VAR_0);

 FUNC_2(&VAR_1->lock);
 if (!FUNC_1(&VAR_1->queue))
  FUNC_0(FUNC_4(VAR_0->device), VAR_1);
 FUNC_3(&VAR_1->lock);
}
