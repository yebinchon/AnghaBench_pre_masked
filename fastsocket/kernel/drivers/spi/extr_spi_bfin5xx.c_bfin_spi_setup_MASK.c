
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int bits_per_word; int mode; int chip_select; int modalias; TYPE_2__* master; int dev; int max_speed_hz; struct bfin5xx_spi_chip* controller_data; } ;
struct driver_data {int dma_requested; int dma_channel; TYPE_1__* master_info; } ;
struct chip_data {int enable_dma; int ctl_reg; int bits_per_word; int flag; int chip_select_num; int n_bytes; int width; int cs_change_per_word; int duplex; int write; int read; int cs_gpio; int baud; int idle_tx_val; int cs_chg_udelay; } ;
struct bfin5xx_spi_chip {int ctl_reg; scalar_t__ enable_dma; int bits_per_word; int idle_tx_val; int cs_gpio; int cs_chg_udelay; int cs_change_per_word; } ;
struct TYPE_4__ {int num_chipselect; size_t bus_num; } ;
struct TYPE_3__ {scalar_t__ enable_dma; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct driver_data*,struct chip_data*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct chip_data*) ;
 struct chip_data* FUNC_9 (int,int ) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,char*) ;
 scalar_t__ FUNC_12 (int ,int ,struct driver_data*) ;
 struct chip_data* FUNC_13 (struct spi_device*) ;
 struct driver_data* FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (struct spi_device*,struct chip_data*) ;
 int ** VAR_29 ;

__attribute__((used)) static int FUNC_16(struct spi_device *VAR_30)
{
 struct bfin5xx_spi_chip *VAR_31 = ((void*)0);
 struct chip_data *VAR_32;
 struct driver_data *VAR_33 = FUNC_14(VAR_30->master);
 int VAR_34;

 if (VAR_30->bits_per_word != 8 && VAR_30->bits_per_word != 16)
  return -VAR_4;


 VAR_32 = FUNC_13(VAR_30);
 if (VAR_32 == ((void*)0)) {
  VAR_32 = FUNC_9(sizeof(struct chip_data), VAR_8);
  if (!VAR_32)
   return -VAR_6;

  VAR_32->enable_dma = 0;
  VAR_31 = VAR_30->controller_data;
 }


 if (VAR_31) {






  if (VAR_31->ctl_reg & (VAR_12|VAR_10|VAR_3|VAR_2|VAR_9|VAR_11)) {
   FUNC_2(&VAR_30->dev, "do not set bits in ctl_reg "
    "that the SPI framework manages\n");
   return -VAR_4;
  }

  VAR_32->enable_dma = VAR_31->enable_dma != 0
      && VAR_33->master_info->enable_dma;
  VAR_32->ctl_reg = VAR_31->ctl_reg;
  VAR_32->bits_per_word = VAR_31->bits_per_word;
  VAR_32->cs_change_per_word = VAR_31->cs_change_per_word;
  VAR_32->cs_chg_udelay = VAR_31->cs_chg_udelay;
  VAR_32->cs_gpio = VAR_31->cs_gpio;
  VAR_32->idle_tx_val = VAR_31->idle_tx_val;
 }


 if (VAR_30->mode & VAR_14)
  VAR_32->ctl_reg |= VAR_3;
 if (VAR_30->mode & VAR_13)
  VAR_32->ctl_reg |= VAR_2;
 if (VAR_30->mode & VAR_15)
  VAR_32->ctl_reg |= VAR_9;

 VAR_32->ctl_reg |= VAR_10;





 if (VAR_32->enable_dma && !VAR_33->dma_requested) {

  if (FUNC_11(VAR_33->dma_channel, "BFIN_SPI_DMA") < 0) {
   FUNC_1(&VAR_30->dev,
    "Unable to request BlackFin SPI DMA channel\n");
   return -VAR_5;
  }
  if (FUNC_12(VAR_33->dma_channel,
      VAR_16, VAR_33) < 0) {
   FUNC_1(&VAR_30->dev, "Unable to set dma callback\n");
   return -VAR_7;
  }
  FUNC_3(VAR_33->dma_channel);
  VAR_33->dma_requested = 1;
 }





 VAR_32->baud = FUNC_7(VAR_30->max_speed_hz);
 VAR_32->flag = 1 << (VAR_30->chip_select);
 VAR_32->chip_select_num = VAR_30->chip_select;

 if (VAR_32->chip_select_num == 0) {
  VAR_34 = FUNC_6(VAR_32->cs_gpio, VAR_30->modalias);
  if (VAR_34) {
   if (VAR_33->dma_requested)
    FUNC_4(VAR_33->dma_channel);
   return VAR_34;
  }
  FUNC_5(VAR_32->cs_gpio, 1);
 }

 switch (VAR_32->bits_per_word) {
 case 8:
  VAR_32->n_bytes = 1;
  VAR_32->width = VAR_1;
  VAR_32->read = VAR_32->cs_change_per_word ?
   VAR_24 : VAR_27;
  VAR_32->write = VAR_32->cs_change_per_word ?
   VAR_25 : VAR_28;
  VAR_32->duplex = VAR_32->cs_change_per_word ?
   VAR_23 : VAR_26;
  break;

 case 16:
  VAR_32->n_bytes = 2;
  VAR_32->width = VAR_0;
  VAR_32->read = VAR_32->cs_change_per_word ?
   VAR_18 : VAR_21;
  VAR_32->write = VAR_32->cs_change_per_word ?
   VAR_19 : VAR_22;
  VAR_32->duplex = VAR_32->cs_change_per_word ?
   VAR_17 : VAR_20;
  break;

 default:
  FUNC_2(&VAR_30->dev, "%d bits_per_word is not supported\n",
    VAR_32->bits_per_word);
  if (VAR_31)
   FUNC_8(VAR_32);
  return -VAR_5;
 }

 FUNC_1(&VAR_30->dev, "setup spi chip %s, width is %d, dma is %d\n",
   VAR_30->modalias, VAR_32->width, VAR_32->enable_dma);
 FUNC_1(&VAR_30->dev, "ctl_reg is 0x%x, flag_reg is 0x%x\n",
   VAR_32->ctl_reg, VAR_32->flag);

 FUNC_15(VAR_30, VAR_32);

 FUNC_1(&VAR_30->dev, "chip select number is %d\n", VAR_32->chip_select_num);
 if ((VAR_32->chip_select_num > 0)
  && (VAR_32->chip_select_num <= VAR_30->master->num_chipselect))
  FUNC_10(VAR_29[VAR_30->master->bus_num]
   [VAR_32->chip_select_num-1], VAR_30->modalias);

 FUNC_0(VAR_33, VAR_32);

 return 0;
}
