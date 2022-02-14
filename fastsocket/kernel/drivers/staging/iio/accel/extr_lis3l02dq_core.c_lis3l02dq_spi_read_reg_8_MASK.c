
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_transfer {int bits_per_word; int len; int cs_change; int * rx_buf; scalar_t__* tx_buf; } ;
struct spi_message {int dummy; } ;
struct lis3l02dq_state {int buf_lock; int * rx; int us; scalar_t__* tx; } ;
struct iio_dev {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct lis3l02dq_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_6 (struct spi_message*) ;
 int FUNC_7 (int ,struct spi_message*) ;

int FUNC_8(struct device *VAR_0, u8 VAR_1, u8 *VAR_2)
{
 int VAR_3;
 struct spi_message VAR_4;
 struct iio_dev *VAR_5 = FUNC_1(VAR_0);
 struct lis3l02dq_state *VAR_6 = FUNC_2(VAR_5);
 struct spi_transfer VAR_7 = {
  .tx_buf = VAR_6->tx,
  .rx_buf = VAR_6->rx,
  .bits_per_word = 8,
  .len = 2,
  .cs_change = 1,
 };

 FUNC_3(&VAR_6->buf_lock);
 VAR_6->tx[0] = FUNC_0(VAR_1);
 VAR_6->tx[1] = 0;

 FUNC_6(&VAR_4);
 FUNC_5(&VAR_7, &VAR_4);
 VAR_3 = FUNC_7(VAR_6->us, &VAR_4);
 *VAR_2 = VAR_6->rx[1];
 FUNC_4(&VAR_6->buf_lock);

 return VAR_3;
}
