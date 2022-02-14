
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct spi_transfer {scalar_t__ rx_dma; scalar_t__ len; scalar_t__ tx_dma; scalar_t__ tx_buf; scalar_t__ rx_buf; } ;
struct spi_master {int dummy; } ;
struct atmel_spi {scalar_t__ buffer_dma; TYPE_1__* pdev; int buffer; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 struct atmel_spi* FUNC_2 (struct spi_master*) ;

__attribute__((used)) static void FUNC_3(struct spi_master *VAR_2,
    struct spi_transfer *VAR_3,
    dma_addr_t *VAR_4,
    dma_addr_t *VAR_5,
    u32 *VAR_6)
{
 struct atmel_spi *VAR_7 = FUNC_2(VAR_2);
 u32 VAR_8 = *VAR_6;


 if (VAR_3->rx_buf)
  *VAR_5 = VAR_3->rx_dma + VAR_3->len - VAR_8;
 else {
  *VAR_5 = VAR_7->buffer_dma;
  if (VAR_8 > VAR_0)
   VAR_8 = VAR_0;
 }
 if (VAR_3->tx_buf)
  *VAR_4 = VAR_3->tx_dma + VAR_3->len - VAR_8;
 else {
  *VAR_4 = VAR_7->buffer_dma;
  if (VAR_8 > VAR_0)
   VAR_8 = VAR_0;
  FUNC_1(VAR_7->buffer, 0, VAR_8);
  FUNC_0(&VAR_7->pdev->dev,
    VAR_7->buffer_dma, VAR_8, VAR_1);
 }

 *VAR_6 = VAR_8;
}
