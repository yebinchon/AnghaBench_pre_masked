
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct driver_data {scalar_t__ dma_mapped; int tx_map_len; int tx_dma; int rx_map_len; int rx_dma; TYPE_2__* cur_msg; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* spi; int is_dma_mapped; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct driver_data *VAR_2)
{
 struct device *VAR_3;

 if (!VAR_2->dma_mapped)
  return;

 if (!VAR_2->cur_msg->is_dma_mapped) {
  VAR_3 = &VAR_2->cur_msg->spi->dev;
  FUNC_0(VAR_3, VAR_2->rx_dma,
     VAR_2->rx_map_len, VAR_0);
  FUNC_0(VAR_3, VAR_2->tx_dma,
     VAR_2->tx_map_len, VAR_1);
 }

 VAR_2->dma_mapped = 0;
}
