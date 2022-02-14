
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct dw_dma_slave {scalar_t__ dma_dev; scalar_t__ cfg_lo; scalar_t__ cfg_hi; } ;
struct dw_dma_chan {int mask; int completed; int descs_allocated; int lock; } ;
struct TYPE_4__ {scalar_t__ dev; } ;
struct dw_dma {TYPE_1__ dma; } ;
struct TYPE_5__ {int phys; int flags; int tx_submit; } ;
struct dw_desc {int lli; TYPE_2__ txd; int tx_list; } ;
struct dma_chan {int cookie; struct dw_dma_slave* private; int device; } ;
struct TYPE_6__ {int ERROR; int BLOCK; int XFER; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 TYPE_3__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (struct dma_chan*) ;
 int FUNC_4 (struct dw_dma*,int ,int) ;
 int FUNC_5 (struct dw_dma_chan*,int ,scalar_t__) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (TYPE_2__*,struct dma_chan*) ;
 int FUNC_10 (int ,int *,int,int ) ;
 int FUNC_11 (struct dw_dma*,int ) ;
 int FUNC_12 (struct dw_dma_chan*,struct dw_desc*) ;
 int VAR_10 ;
 struct dw_desc* FUNC_13 (int,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 struct dw_dma* FUNC_16 (int ) ;
 struct dw_dma_chan* FUNC_17 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_18(struct dma_chan *VAR_11)
{
 struct dw_dma_chan *VAR_12 = FUNC_17(VAR_11);
 struct dw_dma *VAR_13 = FUNC_16(VAR_11->device);
 struct dw_desc *VAR_14;
 struct dw_dma_slave *VAR_15;
 int VAR_16;
 u32 VAR_17;
 u32 VAR_18;

 FUNC_8(FUNC_2(VAR_11), "alloc_chan_resources\n");


 if (FUNC_11(VAR_13, VAR_2) & VAR_12->mask) {
  FUNC_6(FUNC_2(VAR_11), "DMA channel not idle?\n");
  return -VAR_6;
 }

 VAR_12->completed = VAR_11->cookie = 1;

 VAR_17 = VAR_5;
 VAR_18 = 0;

 VAR_15 = VAR_11->private;
 if (VAR_15) {




  FUNC_0(!VAR_15->dma_dev || VAR_15->dma_dev != VAR_13->dma.dev);

  VAR_17 = VAR_15->cfg_hi;
  VAR_18 = VAR_15->cfg_lo;
 }
 FUNC_5(VAR_12, VAR_1, VAR_18);
 FUNC_5(VAR_12, VAR_0, VAR_17);







 FUNC_14(&VAR_12->lock);
 VAR_16 = VAR_12->descs_allocated;
 while (VAR_12->descs_allocated < VAR_9) {
  FUNC_15(&VAR_12->lock);

  VAR_14 = FUNC_13(sizeof(struct dw_desc), VAR_7);
  if (!VAR_14) {
   FUNC_7(FUNC_2(VAR_11),
    "only allocated %d descriptors\n", VAR_16);
   FUNC_14(&VAR_12->lock);
   break;
  }

  FUNC_1(&VAR_14->tx_list);
  FUNC_9(&VAR_14->txd, VAR_11);
  VAR_14->txd.tx_submit = VAR_10;
  VAR_14->txd.flags = VAR_3;
  VAR_14->txd.phys = FUNC_10(FUNC_3(VAR_11), &VAR_14->lli,
    sizeof(VAR_14->lli), VAR_4);
  FUNC_12(VAR_12, VAR_14);

  FUNC_14(&VAR_12->lock);
  VAR_16 = ++VAR_12->descs_allocated;
 }


 FUNC_4(VAR_13, VAR_8.XFER, VAR_12->mask);
 FUNC_4(VAR_13, VAR_8.BLOCK, VAR_12->mask);
 FUNC_4(VAR_13, VAR_8.ERROR, VAR_12->mask);

 FUNC_15(&VAR_12->lock);

 FUNC_6(FUNC_2(VAR_11),
  "alloc_chan_resources allocated %d descriptors\n", VAR_16);

 return VAR_16;
}
