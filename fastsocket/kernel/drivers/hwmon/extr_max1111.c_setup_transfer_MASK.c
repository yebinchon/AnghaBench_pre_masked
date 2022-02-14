
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; int * rx_buf; int * tx_buf; } ;
struct spi_message {int dummy; } ;
struct max1111_data {int * rx_buf; int * tx_buf; struct spi_transfer* xfer; struct spi_message msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_3 (struct spi_message*) ;

__attribute__((used)) static int FUNC_4(struct max1111_data *VAR_4)
{
 struct spi_message *VAR_5;
 struct spi_transfer *VAR_6;

 VAR_4->tx_buf = FUNC_1(VAR_3, VAR_1);
 if (!VAR_4->tx_buf)
  return -VAR_0;

 VAR_4->rx_buf = FUNC_1(VAR_2, VAR_1);
 if (!VAR_4->rx_buf) {
  FUNC_0(VAR_4->tx_buf);
  return -VAR_0;
 }

 VAR_5 = &VAR_4->msg;
 VAR_6 = &VAR_4->xfer[0];

 FUNC_3(VAR_5);

 VAR_6->tx_buf = &VAR_4->tx_buf[0];
 VAR_6->len = 1;
 FUNC_2(VAR_6, VAR_5);

 VAR_6++;
 VAR_6->rx_buf = &VAR_4->rx_buf[0];
 VAR_6->len = 2;
 FUNC_2(VAR_6, VAR_5);

 return 0;
}
