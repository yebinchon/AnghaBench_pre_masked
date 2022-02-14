
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int bits_per_word; size_t chip_select; struct omap2_mcspi_cs* controller_state; int master; int dev; } ;
struct omap2_mcspi_dma {int dma_rx_channel; int dma_tx_channel; } ;
struct omap2_mcspi_cs {int node; scalar_t__ chconf0; scalar_t__ phys; scalar_t__ base; } ;
struct omap2_mcspi {TYPE_1__* master; scalar_t__ phys; scalar_t__ base; struct omap2_mcspi_dma* dma_channels; } ;
struct TYPE_4__ {int cs; } ;
struct TYPE_3__ {int bus_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 struct omap2_mcspi_cs* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (struct omap2_mcspi*) ;
 scalar_t__ FUNC_4 (struct omap2_mcspi*) ;
 int FUNC_5 (struct spi_device*) ;
 int FUNC_6 (struct spi_device*,int *) ;
 struct omap2_mcspi* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_5)
{
 int VAR_6;
 struct omap2_mcspi *VAR_7;
 struct omap2_mcspi_dma *VAR_8;
 struct omap2_mcspi_cs *VAR_9 = VAR_5->controller_state;

 if (VAR_5->bits_per_word < 4 || VAR_5->bits_per_word > 32) {
  FUNC_0(&VAR_5->dev, "setup: unsupported %d bit words\n",
   VAR_5->bits_per_word);
  return -VAR_0;
 }

 VAR_7 = FUNC_7(VAR_5->master);
 VAR_8 = &VAR_7->dma_channels[VAR_5->chip_select];

 if (!VAR_9) {
  VAR_9 = FUNC_1(sizeof *VAR_9, VAR_3);
  if (!VAR_9)
   return -VAR_2;
  VAR_9->base = VAR_7->base + VAR_5->chip_select * 0x14;
  VAR_9->phys = VAR_7->phys + VAR_5->chip_select * 0x14;
  VAR_9->chconf0 = 0;
  VAR_5->controller_state = VAR_9;

  FUNC_2(&VAR_9->node,
   &VAR_4[VAR_7->master->bus_num - 1].cs);
 }

 if (VAR_8->dma_rx_channel == -1
   || VAR_8->dma_tx_channel == -1) {
  VAR_6 = FUNC_5(VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
 }

 if (FUNC_4(VAR_7))
  return -VAR_1;

 VAR_6 = FUNC_6(VAR_5, ((void*)0));
 FUNC_3(VAR_7);

 return VAR_6;
}
