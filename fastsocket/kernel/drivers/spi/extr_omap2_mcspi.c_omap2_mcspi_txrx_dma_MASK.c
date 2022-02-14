
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef void* u32 ;
typedef void* u16 ;
struct spi_transfer {unsigned int len; unsigned long tx_dma; unsigned long rx_dma; void** rx_buf; void** tx_buf; } ;
struct spi_device {size_t chip_select; int dev; int master; struct omap2_mcspi_cs* controller_state; } ;
struct omap2_mcspi_dma {int dma_rx_completion; int dma_tx_completion; int dma_rx_channel; int dma_tx_channel; int dma_rx_sync_dev; int dma_tx_sync_dev; } ;
struct omap2_mcspi_cs {int word_len; unsigned long phys; } ;
struct omap2_mcspi {struct omap2_mcspi_dma* dma_channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,unsigned long,unsigned int,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct spi_device*,unsigned long) ;
 int FUNC_4 (struct spi_device*,int,int) ;
 int FUNC_5 (struct spi_device*,int) ;
 int FUNC_6 (int ,int ,int ,unsigned long,int ,int ) ;
 int FUNC_7 (int ,int ,int ,unsigned long,int ,int ) ;
 int FUNC_8 (int ,int,int,int,int ,int ,int) ;
 int FUNC_9 (int ) ;
 struct omap2_mcspi* FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static unsigned
FUNC_12(struct spi_device *VAR_12, struct spi_transfer *VAR_13)
{
 struct omap2_mcspi *VAR_14;
 struct omap2_mcspi_cs *VAR_15 = VAR_12->controller_state;
 struct omap2_mcspi_dma *VAR_16;
 unsigned int VAR_17, VAR_18;
 unsigned long VAR_19, VAR_20, VAR_21;
 int VAR_22, VAR_23, VAR_24;
 u8 * VAR_25;
 const u8 * VAR_26;

 VAR_14 = FUNC_10(VAR_12->master);
 VAR_16 = &VAR_14->dma_channels[VAR_12->chip_select];

 VAR_17 = VAR_13->len;
 VAR_18 = VAR_17;
 VAR_22 = VAR_15->word_len;

 VAR_19 = VAR_15->phys;
 VAR_20 = VAR_19 + VAR_5;
 VAR_21 = VAR_19 + VAR_4;
 VAR_25 = VAR_13->rx_buf;
 VAR_26 = VAR_13->tx_buf;

 if (VAR_22 <= 8) {
  VAR_23 = VAR_10;
  VAR_24 = VAR_17;
 } else if (VAR_22 <= 16) {
  VAR_23 = VAR_8;
  VAR_24 = VAR_17 >> 1;
 } else {
  VAR_23 = VAR_9;
  VAR_24 = VAR_17 >> 2;
 }

 if (VAR_26 != ((void*)0)) {
  FUNC_8(VAR_16->dma_tx_channel,
    VAR_23, VAR_24, 1,
    VAR_11,
    VAR_16->dma_tx_sync_dev, 0);

  FUNC_6(VAR_16->dma_tx_channel, 0,
    VAR_6,
    VAR_20, 0, 0);

  FUNC_7(VAR_16->dma_tx_channel, 0,
    VAR_7,
    VAR_13->tx_dma, 0, 0);
 }

 if (VAR_25 != ((void*)0)) {
  FUNC_8(VAR_16->dma_rx_channel,
    VAR_23, VAR_24 - 1, 1,
    VAR_11,
    VAR_16->dma_rx_sync_dev, 1);

  FUNC_7(VAR_16->dma_rx_channel, 0,
    VAR_6,
    VAR_21, 0, 0);

  FUNC_6(VAR_16->dma_rx_channel, 0,
    VAR_7,
    VAR_13->rx_dma, 0, 0);
 }

 if (VAR_26 != ((void*)0)) {
  FUNC_9(VAR_16->dma_tx_channel);
  FUNC_4(VAR_12, 0, 1);
 }

 if (VAR_25 != ((void*)0)) {
  FUNC_9(VAR_16->dma_rx_channel);
  FUNC_4(VAR_12, 1, 1);
 }

 if (VAR_26 != ((void*)0)) {
  FUNC_11(&VAR_16->dma_tx_completion);
  FUNC_1(((void*)0), VAR_13->tx_dma, VAR_17, VAR_1);
 }

 if (VAR_25 != ((void*)0)) {
  FUNC_11(&VAR_16->dma_rx_completion);
  FUNC_1(((void*)0), VAR_13->rx_dma, VAR_17, VAR_0);
  FUNC_5(VAR_12, 0);
  if (FUNC_2(FUNC_3(VAR_12, VAR_2)
    & VAR_3)) {
   u32 VAR_27;

   VAR_27 = FUNC_3(VAR_12, VAR_4);
   if (VAR_22 <= 8)
    ((u8 *)VAR_13->rx_buf)[VAR_24 - 1] = VAR_27;
   else if (VAR_22 <= 16)
    ((u16 *)VAR_13->rx_buf)[VAR_24 - 1] = VAR_27;
   else
    ((u32 *)VAR_13->rx_buf)[VAR_24 - 1] = VAR_27;
  } else {
   FUNC_0(&VAR_12->dev, "DMA RX last word empty");
   VAR_17 -= (VAR_22 <= 8) ? 1 :
     (VAR_22 <= 16) ? 2 :
                               4;
  }
  FUNC_5(VAR_12, 1);
 }
 return VAR_17;
}
