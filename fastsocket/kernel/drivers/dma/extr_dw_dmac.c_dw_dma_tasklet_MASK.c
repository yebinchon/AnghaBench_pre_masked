
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct dw_dma_chan {int lock; int flags; } ;
struct TYPE_4__ {int chancnt; int dev; } ;
struct dw_dma {int all_chan_mask; struct dw_dma_chan* chan; TYPE_1__ dma; } ;
struct TYPE_6__ {int ERROR; int BLOCK; int XFER; } ;
struct TYPE_5__ {int ERROR; int XFER; int BLOCK; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (struct dw_dma*,int ,int ) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct dw_dma*,int ) ;
 int FUNC_3 (struct dw_dma*,struct dw_dma_chan*,int,int,int) ;
 int FUNC_4 (struct dw_dma*,struct dw_dma_chan*) ;
 int FUNC_5 (struct dw_dma*,struct dw_dma_chan*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_3)
{
 struct dw_dma *VAR_4 = (struct dw_dma *)VAR_3;
 struct dw_dma_chan *VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_6 = FUNC_2(VAR_4, VAR_2.BLOCK);
 VAR_7 = FUNC_2(VAR_4, VAR_2.XFER);
 VAR_8 = FUNC_2(VAR_4, VAR_2.ERROR);

 FUNC_1(VAR_4->dma.dev, "tasklet: status_block=%x status_err=%x\n",
   VAR_6, VAR_8);

 for (VAR_9 = 0; VAR_9 < VAR_4->dma.chancnt; VAR_9++) {
  VAR_5 = &VAR_4->chan[VAR_9];
  FUNC_6(&VAR_5->lock);
  if (FUNC_8(VAR_0, &VAR_5->flags))
   FUNC_3(VAR_4, VAR_5, VAR_6, VAR_8,
     VAR_7);
  else if (VAR_8 & (1 << VAR_9))
   FUNC_4(VAR_4, VAR_5);
  else if ((VAR_6 | VAR_7) & (1 << VAR_9))
   FUNC_5(VAR_4, VAR_5);
  FUNC_7(&VAR_5->lock);
 }






 FUNC_0(VAR_4, VAR_1.XFER, VAR_4->all_chan_mask);
 FUNC_0(VAR_4, VAR_1.BLOCK, VAR_4->all_chan_mask);
 FUNC_0(VAR_4, VAR_1.ERROR, VAR_4->all_chan_mask);
}
