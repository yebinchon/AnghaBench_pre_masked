
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; int rx_buf; int tx_buf; } ;
struct spi_imx_data {int count; int xfer_done; int (* intctrl ) (struct spi_imx_data*,int ) ;scalar_t__ txfifo; int rx_buf; int tx_buf; } ;
struct spi_device {int master; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct spi_imx_data*) ;
 struct spi_imx_data* FUNC_2 (int ) ;
 int FUNC_3 (struct spi_imx_data*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_1,
    struct spi_transfer *VAR_2)
{
 struct spi_imx_data *VAR_3 = FUNC_2(VAR_1->master);

 VAR_3->tx_buf = VAR_2->tx_buf;
 VAR_3->rx_buf = VAR_2->rx_buf;
 VAR_3->count = VAR_2->len;
 VAR_3->txfifo = 0;

 FUNC_0(&VAR_3->xfer_done);

 FUNC_1(VAR_3);

 VAR_3->intctrl(VAR_3, VAR_0);

 FUNC_4(&VAR_3->xfer_done);

 return VAR_2->len;
}
