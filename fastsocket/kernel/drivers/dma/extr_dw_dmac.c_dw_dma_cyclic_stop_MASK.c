
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device; } ;
struct dw_dma_chan {int mask; int lock; TYPE_1__ chan; } ;
struct dw_dma {int dummy; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dw_dma*,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct dw_dma*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct dw_dma* FUNC_5 (int ) ;
 struct dw_dma_chan* FUNC_6 (struct dma_chan*) ;

void FUNC_7(struct dma_chan *VAR_1)
{
 struct dw_dma_chan *VAR_2 = FUNC_6(VAR_1);
 struct dw_dma *VAR_3 = FUNC_5(VAR_2->chan.device);

 FUNC_3(&VAR_2->lock);

 FUNC_0(VAR_3, VAR_0, VAR_2->mask);
 while (FUNC_2(VAR_3, VAR_0) & VAR_2->mask)
  FUNC_1();

 FUNC_4(&VAR_2->lock);
}
