
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {scalar_t__ tx_dma; scalar_t__ rx_dma; int len; } ;
struct TYPE_2__ {int parent; } ;
struct spi_master {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct spi_master *VAR_3,
         struct spi_transfer *VAR_4)
{
 if (VAR_4->tx_dma != VAR_2)
  FUNC_0(VAR_3->dev.parent, VAR_4->tx_dma,
     VAR_4->len, VAR_1);
 if (VAR_4->rx_dma != VAR_2)
  FUNC_0(VAR_3->dev.parent, VAR_4->rx_dma,
     VAR_4->len, VAR_0);
}
