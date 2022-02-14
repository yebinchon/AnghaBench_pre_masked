
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct spi_device {size_t chip_select; int master; } ;
struct omap2_mcspi_dma {int dma_tx_completion; } ;
struct omap2_mcspi {struct omap2_mcspi_dma* dma_channels; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct spi_device*,int ,int ) ;
 struct omap2_mcspi* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(int VAR_0, u16 VAR_1, void *VAR_2)
{
 struct spi_device *VAR_3 = VAR_2;
 struct omap2_mcspi *VAR_4;
 struct omap2_mcspi_dma *VAR_5;

 VAR_4 = FUNC_2(VAR_3->master);
 VAR_5 = &(VAR_4->dma_channels[VAR_3->chip_select]);

 FUNC_0(&VAR_5->dma_tx_completion);


 FUNC_1(VAR_3, 0, 0);
}
