
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_transfer {unsigned int len; int * rx_buf; int * tx_buf; } ;
struct spi_message {int dummy; } ;
struct ks8851_net {int spidev; struct spi_transfer* spi_xfer2; struct spi_message spi_msg2; struct spi_transfer spi_xfer1; struct spi_message spi_msg1; int * rxd; scalar_t__ txd; } ;
typedef int __le16 ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct ks8851_net*) ;
 int FUNC_2 (struct ks8851_net*,char*) ;
 int FUNC_3 (int *,int *,unsigned int) ;
 int FUNC_4 (int ,struct spi_message*) ;

__attribute__((used)) static void FUNC_5(struct ks8851_net *VAR_1, unsigned VAR_2,
    u8 *VAR_3, unsigned VAR_4)
{
 struct spi_transfer *VAR_5;
 struct spi_message *VAR_6;
 __le16 *VAR_7 = (__le16 *)VAR_1->txd;
 u8 *VAR_8 = VAR_1->rxd;
 int VAR_9;

 VAR_7[0] = FUNC_0(VAR_2 | VAR_0);

 if (FUNC_1(VAR_1)) {
  VAR_6 = &VAR_1->spi_msg1;
  VAR_5 = &VAR_1->spi_xfer1;

  VAR_5->tx_buf = VAR_7;
  VAR_5->rx_buf = VAR_8;
  VAR_5->len = VAR_4 + 2;
 } else {
  VAR_6 = &VAR_1->spi_msg2;
  VAR_5 = VAR_1->spi_xfer2;

  VAR_5->tx_buf = VAR_7;
  VAR_5->rx_buf = ((void*)0);
  VAR_5->len = 2;

  VAR_5++;
  VAR_5->tx_buf = ((void*)0);
  VAR_5->rx_buf = VAR_8;
  VAR_5->len = VAR_4;
 }

 VAR_9 = FUNC_4(VAR_1->spidev, VAR_6);
 if (VAR_9 < 0)
  FUNC_2(VAR_1, "read: spi_sync() failed\n");
 else if (FUNC_1(VAR_1))
  FUNC_3(VAR_3, VAR_8 + 2, VAR_4);
 else
  FUNC_3(VAR_3, VAR_8, VAR_4);
}
