
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct spi_message {int state; int actual_length; } ;
struct driver_data {int dma_channel; TYPE_1__* pdev; int pump_transfers; scalar_t__ cs_change; scalar_t__ len_in_bytes; int * tx; struct spi_message* cur_msg; struct chip_data* cur_chip; } ;
struct chip_data {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct driver_data*,struct chip_data*) ;
 int FUNC_1 (struct driver_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char*,unsigned short,...) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 unsigned long VAR_8 ;
 int FUNC_9 (struct driver_data*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (unsigned long,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_9, void *VAR_10)
{
 struct driver_data *VAR_11 = VAR_10;
 struct chip_data *VAR_12 = VAR_11->cur_chip;
 struct spi_message *VAR_13 = VAR_11->cur_msg;
 unsigned long VAR_14;
 unsigned short VAR_15 = FUNC_8(VAR_11->dma_channel);
 u16 VAR_16 = FUNC_9(VAR_11);

 FUNC_4(&VAR_11->pdev->dev,
  "in dma_irq_handler dmastat:0x%x spistat:0x%x\n",
  VAR_15, VAR_16);

 FUNC_2(VAR_11->dma_channel);


 while (FUNC_8(VAR_11->dma_channel) & VAR_1)
  FUNC_3();







 if (VAR_11->tx != ((void*)0)) {
  while ((FUNC_9(VAR_11) & VAR_7) ||
         (FUNC_9(VAR_11) & VAR_7))
   FUNC_3();
 }

 FUNC_4(&VAR_11->pdev->dev,
  "in dma_irq_handler dmastat:0x%x spistat:0x%x\n",
  VAR_15, FUNC_9(VAR_11));

 VAR_14 = VAR_8 + VAR_3;
 while (!(FUNC_9(VAR_11) & VAR_6))
  if (!FUNC_11(VAR_8, VAR_14)) {
   FUNC_6(&VAR_11->pdev->dev, "timeout waiting for SPIF");
   break;
  } else
   FUNC_3();

 if ((VAR_15 & VAR_0) && (VAR_16 & VAR_5)) {
  VAR_13->state = VAR_2;
  FUNC_5(&VAR_11->pdev->dev, "dma receive: fifo/buffer overflow\n");
 } else {
  VAR_13->actual_length += VAR_11->len_in_bytes;

  if (VAR_11->cs_change)
   FUNC_0(VAR_11, VAR_12);


  VAR_13->state = FUNC_1(VAR_11);
 }


 FUNC_10(&VAR_11->pump_transfers);


 FUNC_4(&VAR_11->pdev->dev,
  "disable dma channel irq%d\n",
  VAR_11->dma_channel);
 FUNC_7(VAR_11->dma_channel);

 return VAR_4;
}
