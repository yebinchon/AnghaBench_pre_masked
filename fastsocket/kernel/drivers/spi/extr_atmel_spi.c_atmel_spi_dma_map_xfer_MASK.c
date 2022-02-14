
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {void* rx_buf; int len; void* tx_dma; scalar_t__ tx_buf; void* rx_dma; } ;
struct device {int dummy; } ;
struct atmel_spi {TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* FUNC_0 (struct device*,void*,int ,int ) ;
 scalar_t__ FUNC_1 (struct device*,void*) ;
 int FUNC_2 (struct device*,void*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct atmel_spi *VAR_4, struct spi_transfer *VAR_5)
{
 struct device *VAR_6 = &VAR_4->pdev->dev;

 VAR_5->tx_dma = VAR_5->rx_dma = VAR_3;
 if (VAR_5->tx_buf) {
  VAR_5->tx_dma = FUNC_0(VAR_6,
    (void *) VAR_5->tx_buf, VAR_5->len,
    VAR_1);
  if (FUNC_1(VAR_6, VAR_5->tx_dma))
   return -VAR_2;
 }
 if (VAR_5->rx_buf) {
  VAR_5->rx_dma = FUNC_0(VAR_6,
    VAR_5->rx_buf, VAR_5->len,
    VAR_0);
  if (FUNC_1(VAR_6, VAR_5->rx_dma)) {
   if (VAR_5->tx_buf)
    FUNC_2(VAR_6,
      VAR_5->tx_dma, VAR_5->len,
      VAR_1);
   return -VAR_2;
  }
 }
 return 0;
}
