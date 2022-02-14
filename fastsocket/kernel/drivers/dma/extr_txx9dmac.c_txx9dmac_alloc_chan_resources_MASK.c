
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct txx9dmac_slave {int reg_width; scalar_t__ rx_reg; scalar_t__ tx_reg; } ;
struct txx9dmac_desc {int dummy; } ;
struct txx9dmac_chan {int completed; int ccr; int descs_allocated; int lock; } ;
struct dma_chan {int cookie; TYPE_1__* device; struct txx9dmac_slave* private; } ;
struct TYPE_2__ {scalar_t__ device_prep_dma_memcpy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (struct txx9dmac_chan*,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct txx9dmac_chan* FUNC_9 (struct dma_chan*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct txx9dmac_chan*) ;
 int FUNC_12 (struct txx9dmac_chan*) ;
 struct txx9dmac_desc* FUNC_13 (struct txx9dmac_chan*,int ) ;
 int FUNC_14 (struct txx9dmac_chan*,struct txx9dmac_desc*) ;

__attribute__((used)) static int FUNC_15(struct dma_chan *VAR_13)
{
 struct txx9dmac_chan *VAR_14 = FUNC_9(VAR_13);
 struct txx9dmac_slave *VAR_15 = VAR_13->private;
 struct txx9dmac_desc *VAR_16;
 int VAR_17;

 FUNC_6(FUNC_2(VAR_13), "alloc_chan_resources\n");


 if (FUNC_3(VAR_14, VAR_1) & VAR_11) {
  FUNC_4(FUNC_2(VAR_13), "DMA channel not idle?\n");
  return -VAR_3;
 }

 VAR_14->completed = VAR_13->cookie = 1;

 VAR_14->ccr = VAR_6 | VAR_8 | VAR_0;
 FUNC_12(VAR_14);
 if (!FUNC_10() || (VAR_14->ccr & VAR_9))
  VAR_14->ccr |= VAR_7;
 if (VAR_13->device->device_prep_dma_memcpy) {
  if (VAR_15)
   return -VAR_2;
  VAR_14->ccr |= VAR_10;
 } else {
  if (!VAR_15 ||
      (VAR_15->tx_reg && VAR_15->rx_reg) || (!VAR_15->tx_reg && !VAR_15->rx_reg))
   return -VAR_2;
  VAR_14->ccr |= VAR_5 |
   FUNC_0(FUNC_1(VAR_15->reg_width));
  FUNC_11(VAR_14);
 }

 FUNC_7(&VAR_14->lock);
 VAR_17 = VAR_14->descs_allocated;
 while (VAR_14->descs_allocated < VAR_12) {
  FUNC_8(&VAR_14->lock);

  VAR_16 = FUNC_13(VAR_14, VAR_4);
  if (!VAR_16) {
   FUNC_5(FUNC_2(VAR_13),
    "only allocated %d descriptors\n", VAR_17);
   FUNC_7(&VAR_14->lock);
   break;
  }
  FUNC_14(VAR_14, VAR_16);

  FUNC_7(&VAR_14->lock);
  VAR_17 = ++VAR_14->descs_allocated;
 }
 FUNC_8(&VAR_14->lock);

 FUNC_4(FUNC_2(VAR_13),
  "alloc_chan_resources allocated %d descriptors\n", VAR_17);

 return VAR_17;
}
