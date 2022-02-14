
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_message {scalar_t__ is_dma_mapped; TYPE_1__* spi; } ;
struct driver_data {int rx_map_len; int len; int tx_map_len; void* tx_dma; void* rx_dma; scalar_t__* rx; scalar_t__* tx; scalar_t__* null_dma_buf; TYPE_2__* cur_chip; struct spi_message* cur_msg; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int enable_dma; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 void* FUNC_1 (struct device*,scalar_t__*,int,int ) ;
 scalar_t__ FUNC_2 (struct device*,void*) ;
 int FUNC_3 (struct device*,void*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct driver_data *VAR_2)
{
 struct spi_message *VAR_3 = VAR_2->cur_msg;
 struct device *VAR_4 = &VAR_3->spi->dev;

 if (!VAR_2->cur_chip->enable_dma)
  return 0;

 if (VAR_3->is_dma_mapped)
  return VAR_2->rx_dma && VAR_2->tx_dma;

 if (!FUNC_0(VAR_2->rx) || !FUNC_0(VAR_2->tx))
  return 0;


 if (VAR_2->rx == ((void*)0)) {
  *VAR_2->null_dma_buf = 0;
  VAR_2->rx = VAR_2->null_dma_buf;
  VAR_2->rx_map_len = 4;
 } else
  VAR_2->rx_map_len = VAR_2->len;



 if (VAR_2->tx == ((void*)0)) {
  *VAR_2->null_dma_buf = 0;
  VAR_2->tx = VAR_2->null_dma_buf;
  VAR_2->tx_map_len = 4;
 } else
  VAR_2->tx_map_len = VAR_2->len;





 VAR_2->tx_dma = FUNC_1(VAR_4, VAR_2->tx,
     VAR_2->tx_map_len, VAR_1);
 if (FUNC_2(VAR_4, VAR_2->tx_dma))
  return 0;


 VAR_2->rx_dma = FUNC_1(VAR_4, VAR_2->rx,
     VAR_2->rx_map_len, VAR_0);
 if (FUNC_2(VAR_4, VAR_2->rx_dma)) {
  FUNC_3(VAR_4, VAR_2->tx_dma,
     VAR_2->tx_map_len, VAR_1);
  return 0;
 }

 return 1;
}
