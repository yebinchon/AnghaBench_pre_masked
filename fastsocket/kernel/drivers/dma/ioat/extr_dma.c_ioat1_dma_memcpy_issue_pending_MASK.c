
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioat_dma_chan {scalar_t__ pending; int desc_lock; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct ioat_dma_chan*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ioat_dma_chan* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_4(struct dma_chan *VAR_0)
{
 struct ioat_dma_chan *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->pending > 0) {
  FUNC_1(&VAR_1->desc_lock);
  FUNC_0(VAR_1);
  FUNC_2(&VAR_1->desc_lock);
 }
}
