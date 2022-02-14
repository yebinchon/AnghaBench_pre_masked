
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {size_t chip_select; struct omap2_mcspi_cs* controller_state; int master; } ;
struct omap2_mcspi_dma {int dma_rx_channel; int dma_tx_channel; } ;
struct omap2_mcspi_cs {int node; } ;
struct omap2_mcspi {struct omap2_mcspi_dma* dma_channels; } ;


 int FUNC_0 (struct omap2_mcspi_cs*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 struct omap2_mcspi* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_0)
{
 struct omap2_mcspi *VAR_1;
 struct omap2_mcspi_dma *VAR_2;
 struct omap2_mcspi_cs *VAR_3;

 VAR_1 = FUNC_3(VAR_0->master);
 VAR_2 = &VAR_1->dma_channels[VAR_0->chip_select];


 VAR_3 = VAR_0->controller_state;
 FUNC_1(&VAR_3->node);

 FUNC_0(VAR_0->controller_state);

 if (VAR_2->dma_rx_channel != -1) {
  FUNC_2(VAR_2->dma_rx_channel);
  VAR_2->dma_rx_channel = -1;
 }
 if (VAR_2->dma_tx_channel != -1) {
  FUNC_2(VAR_2->dma_tx_channel);
  VAR_2->dma_tx_channel = -1;
 }
}
