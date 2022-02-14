
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct spi_device {int chip_select; int dev; struct spi_master* master; } ;
struct omap2_mcspi_dma {int dma_rx_channel; int dma_tx_channel; int dma_tx_completion; int dma_rx_completion; int dma_tx_sync_dev; int dma_rx_sync_dev; } ;
struct omap2_mcspi {struct omap2_mcspi_dma* dma_channels; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,char*,int ,struct spi_device*,int*) ;
 struct omap2_mcspi* FUNC_4 (struct spi_master*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_3)
{
 struct spi_master *VAR_4 = VAR_3->master;
 struct omap2_mcspi *VAR_5;
 struct omap2_mcspi_dma *VAR_6;

 VAR_5 = FUNC_4(VAR_4);
 VAR_6 = VAR_5->dma_channels + VAR_3->chip_select;

 if (FUNC_3(VAR_6->dma_rx_sync_dev, "McSPI RX",
   VAR_1, VAR_3,
   &VAR_6->dma_rx_channel)) {
  FUNC_0(&VAR_3->dev, "no RX DMA channel for McSPI\n");
  return -VAR_0;
 }

 if (FUNC_3(VAR_6->dma_tx_sync_dev, "McSPI TX",
   VAR_2, VAR_3,
   &VAR_6->dma_tx_channel)) {
  FUNC_2(VAR_6->dma_rx_channel);
  VAR_6->dma_rx_channel = -1;
  FUNC_0(&VAR_3->dev, "no TX DMA channel for McSPI\n");
  return -VAR_0;
 }

 FUNC_1(&VAR_6->dma_rx_completion);
 FUNC_1(&VAR_6->dma_tx_completion);

 return 0;
}
