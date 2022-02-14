
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct ssp_device {int clk; } ;
struct spi_device {int bits_per_word; int mode; int dev; int max_speed_hz; struct pxa2xx_spi_chip* controller_data; int master; } ;
struct pxa2xx_spi_chip {scalar_t__ enable_loopback; scalar_t__ rx_threshold; scalar_t__ tx_threshold; scalar_t__ timeout; } ;
struct driver_data {scalar_t__ ssp_type; TYPE_1__* master_info; struct ssp_device* ssp; } ;
struct chip_data {int gpio_cs; int cr1; int threshold; unsigned int cr0; int n_bytes; int bits_per_word; int write; int read; int dma_width; scalar_t__ enable_dma; int speed_hz; scalar_t__ dma_threshold; int dma_burst_size; scalar_t__ timeout; } ;
struct TYPE_2__ {scalar_t__ enable_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int,char*) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,char*) ;
 struct chip_data* FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (struct chip_data*,struct spi_device*,int,int *,scalar_t__*) ;
 int FUNC_9 (struct spi_device*,struct chip_data*,struct pxa2xx_spi_chip*) ;
 struct chip_data* FUNC_10 (struct spi_device*) ;
 struct driver_data* FUNC_11 (int ) ;
 int FUNC_12 (struct spi_device*,struct chip_data*) ;
 unsigned int FUNC_13 (struct ssp_device*,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

__attribute__((used)) static int FUNC_14(struct spi_device *VAR_29)
{
 struct pxa2xx_spi_chip *VAR_30 = ((void*)0);
 struct chip_data *VAR_31;
 struct driver_data *VAR_32 = FUNC_11(VAR_29->master);
 struct ssp_device *VAR_33 = VAR_32->ssp;
 unsigned int VAR_34;
 uint VAR_35 = VAR_22;
 uint VAR_36 = VAR_9;

 if (VAR_32->ssp_type != VAR_8
  && (VAR_29->bits_per_word < 4 || VAR_29->bits_per_word > 32)) {
  FUNC_5(&VAR_29->dev, "failed setup: ssp_type=%d, bits/wrd=%d "
    "b/w not 4-32 for type non-PXA25x_SSP\n",
    VAR_32->ssp_type, VAR_29->bits_per_word);
  return -VAR_4;
 }
 else if (VAR_32->ssp_type == VAR_8
   && (VAR_29->bits_per_word < 4
    || VAR_29->bits_per_word > 16)) {
  FUNC_5(&VAR_29->dev, "failed setup: ssp_type=%d, bits/wrd=%d "
    "b/w not 4-16 for type PXA25x_SSP\n",
    VAR_32->ssp_type, VAR_29->bits_per_word);
  return -VAR_4;
 }


 VAR_31 = FUNC_10(VAR_29);
 if (!VAR_31) {
  VAR_31 = FUNC_7(sizeof(struct chip_data), VAR_7);
  if (!VAR_31) {
   FUNC_5(&VAR_29->dev,
    "failed setup: can't allocate chip data\n");
   return -VAR_6;
  }

  VAR_31->gpio_cs = -1;
  VAR_31->enable_dma = 0;
  VAR_31->timeout = VAR_21;
  VAR_31->dma_burst_size = VAR_32->master_info->enable_dma ?
     VAR_0 : 0;
 }



 VAR_30 = VAR_29->controller_data;


 VAR_31->cr1 = 0;
 if (VAR_30) {
  if (VAR_30->timeout)
   VAR_31->timeout = VAR_30->timeout;
  if (VAR_30->tx_threshold)
   VAR_35 = VAR_30->tx_threshold;
  if (VAR_30->rx_threshold)
   VAR_36 = VAR_30->rx_threshold;
  VAR_31->enable_dma = VAR_32->master_info->enable_dma;
  VAR_31->dma_threshold = 0;
  if (VAR_30->enable_loopback)
   VAR_31->cr1 = VAR_16;
 }

 VAR_31->threshold = (FUNC_1(VAR_36) & VAR_17) |
   (FUNC_2(VAR_35) & VAR_20);




 if (VAR_31->enable_dma) {

  if (FUNC_8(VAR_31, VAR_29, VAR_29->bits_per_word,
      &VAR_31->dma_burst_size,
      &VAR_31->dma_threshold)) {
   FUNC_6(&VAR_29->dev, "in setup: DMA burst size reduced "
     "to match bits_per_word\n");
  }
 }

 VAR_34 = FUNC_13(VAR_33, VAR_29->max_speed_hz);
 VAR_31->speed_hz = VAR_29->max_speed_hz;

 VAR_31->cr0 = VAR_34
   | VAR_13
   | FUNC_0(VAR_29->bits_per_word > 16 ?
    VAR_29->bits_per_word - 16 : VAR_29->bits_per_word)
   | VAR_15
   | (VAR_29->bits_per_word > 16 ? VAR_12 : 0);
 VAR_31->cr1 &= ~(VAR_19 | VAR_18);
 VAR_31->cr1 |= (((VAR_29->mode & VAR_10) != 0) ? VAR_18 : 0)
   | (((VAR_29->mode & VAR_11) != 0) ? VAR_19 : 0);


 if (VAR_32->ssp_type != VAR_8)
  FUNC_4(&VAR_29->dev, "%ld Hz actual, %s\n",
    FUNC_3(VAR_33->clk)
     / (1 + ((VAR_31->cr0 & VAR_14) >> 8)),
    VAR_31->enable_dma ? "DMA" : "PIO");
 else
  FUNC_4(&VAR_29->dev, "%ld Hz actual, %s\n",
    FUNC_3(VAR_33->clk) / 2
     / (1 + ((VAR_31->cr0 & VAR_14) >> 8)),
    VAR_31->enable_dma ? "DMA" : "PIO");

 if (VAR_29->bits_per_word <= 8) {
  VAR_31->n_bytes = 1;
  VAR_31->dma_width = VAR_1;
  VAR_31->read = VAR_27;
  VAR_31->write = VAR_28;
 } else if (VAR_29->bits_per_word <= 16) {
  VAR_31->n_bytes = 2;
  VAR_31->dma_width = VAR_2;
  VAR_31->read = VAR_23;
  VAR_31->write = VAR_24;
 } else if (VAR_29->bits_per_word <= 32) {
  VAR_31->cr0 |= VAR_12;
  VAR_31->n_bytes = 4;
  VAR_31->dma_width = VAR_3;
  VAR_31->read = VAR_25;
  VAR_31->write = VAR_26;
 } else {
  FUNC_5(&VAR_29->dev, "invalid wordsize\n");
  return -VAR_5;
 }
 VAR_31->bits_per_word = VAR_29->bits_per_word;

 FUNC_12(VAR_29, VAR_31);

 return FUNC_9(VAR_29, VAR_31, VAR_30);
}
