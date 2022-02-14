
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct spi_transfer {int bits_per_word; int len; int cs_change; scalar_t__* rx_buf; void** tx_buf; } ;
struct spi_message {int dummy; } ;
struct lis3l02dq_state {int buf_lock; scalar_t__* rx; TYPE_1__* us; void** tx; } ;
struct iio_dev {int dummy; } ;
struct device {int dummy; } ;
typedef int s16 ;
struct TYPE_2__ {int dev; } ;


 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*) ;
 struct iio_dev* FUNC_2 (struct device*) ;
 struct lis3l02dq_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_7 (struct spi_message*) ;
 int FUNC_8 (TYPE_1__*,struct spi_message*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_0,
          u8 VAR_1,
          s16 *VAR_2)
{
 struct spi_message VAR_3;
 struct iio_dev *VAR_4 = FUNC_2(VAR_0);
 struct lis3l02dq_state *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;
 struct spi_transfer VAR_7[] = { {
   .tx_buf = VAR_5->tx,
   .rx_buf = VAR_5->rx,
   .bits_per_word = 8,
   .len = 2,
   .cs_change = 1,
  }, {
   .tx_buf = VAR_5->tx + 2,
   .rx_buf = VAR_5->rx + 2,
   .bits_per_word = 8,
   .len = 2,
   .cs_change = 1,

  },
 };

 FUNC_4(&VAR_5->buf_lock);
 VAR_5->tx[0] = FUNC_0(VAR_1);
 VAR_5->tx[1] = 0;
 VAR_5->tx[2] = FUNC_0(VAR_1+1);
 VAR_5->tx[3] = 0;

 FUNC_7(&VAR_3);
 FUNC_6(&VAR_7[0], &VAR_3);
 FUNC_6(&VAR_7[1], &VAR_3);
 VAR_6 = FUNC_8(VAR_5->us, &VAR_3);
 if (VAR_6) {
  FUNC_1(&VAR_5->us->dev, "problem when reading 16 bit register");
  goto error_ret;
 }
 *VAR_2 = (s16)(VAR_5->rx[1]) | ((s16)(VAR_5->rx[3]) << 8);

error_ret:
 FUNC_5(&VAR_5->buf_lock);
 return VAR_6;
}
