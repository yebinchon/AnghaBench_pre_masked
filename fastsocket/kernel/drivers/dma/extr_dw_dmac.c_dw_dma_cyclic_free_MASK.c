
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int device; } ;
struct dw_dma_chan {int mask; int flags; int lock; TYPE_1__ chan; struct dw_cyclic_desc* cdesc; } ;
struct dw_dma {int dummy; } ;
struct dw_cyclic_desc {int periods; struct dw_cyclic_desc* desc; } ;
struct dma_chan {int dummy; } ;
struct TYPE_4__ {int XFER; int ERROR; int BLOCK; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct dw_dma*,int ,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct dw_dma*,int ) ;
 int FUNC_6 (struct dw_dma*,int ,int) ;
 int FUNC_7 (struct dw_dma_chan*,struct dw_cyclic_desc) ;
 int FUNC_8 (struct dw_cyclic_desc*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct dw_dma* FUNC_11 (int ) ;
 struct dw_dma_chan* FUNC_12 (struct dma_chan*) ;

void FUNC_13(struct dma_chan *VAR_3)
{
 struct dw_dma_chan *VAR_4 = FUNC_12(VAR_3);
 struct dw_dma *VAR_5 = FUNC_11(VAR_4->chan.device);
 struct dw_cyclic_desc *VAR_6 = VAR_4->cdesc;
 int VAR_7;

 FUNC_4(FUNC_0(&VAR_4->chan), "cyclic free\n");

 if (!VAR_6)
  return;

 FUNC_9(&VAR_4->lock);

 FUNC_1(VAR_5, VAR_0, VAR_4->mask);
 while (FUNC_5(VAR_5, VAR_0) & VAR_4->mask)
  FUNC_3();

 FUNC_6(VAR_5, VAR_1.BLOCK, VAR_4->mask);
 FUNC_6(VAR_5, VAR_1.ERROR, VAR_4->mask);
 FUNC_6(VAR_5, VAR_1.XFER, VAR_4->mask);

 FUNC_10(&VAR_4->lock);

 for (VAR_7 = 0; VAR_7 < VAR_6->periods; VAR_7++)
  FUNC_7(VAR_4, VAR_6->desc[VAR_7]);

 FUNC_8(VAR_6->desc);
 FUNC_8(VAR_6);

 FUNC_2(VAR_2, &VAR_4->flags);
}
