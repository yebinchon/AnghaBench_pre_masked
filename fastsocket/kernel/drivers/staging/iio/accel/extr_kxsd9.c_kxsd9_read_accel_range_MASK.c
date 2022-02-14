
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int bits_per_word; int len; int cs_change; int* rx_buf; scalar_t__* tx_buf; } ;
struct spi_message {int dummy; } ;
struct kxsd9_state {int* rx; int buf_lock; int us; scalar_t__* tx; } ;
struct iio_dev {struct kxsd9_state* dev_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;






 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 struct iio_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_5 (struct spi_message*) ;
 int FUNC_6 (int ,struct spi_message*) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
          struct device_attribute *VAR_3,
          char *VAR_4)
{
 int VAR_5;
 ssize_t VAR_6 = 0;
 struct iio_dev *VAR_7 = FUNC_1(VAR_2);
 struct kxsd9_state *VAR_8 = VAR_7->dev_data;
 struct spi_transfer VAR_9 = {
  .bits_per_word = 8,
  .len = 2,
  .cs_change = 1,
  .tx_buf = VAR_8->tx,
  .rx_buf = VAR_8->rx,
 };
 struct spi_message VAR_10;

 FUNC_2(&VAR_8->buf_lock);
 VAR_8->tx[0] = FUNC_0(VAR_1);
 VAR_8->tx[1] = 0;
 FUNC_5(&VAR_10);
 FUNC_4(&VAR_9, &VAR_10);
 VAR_5 = FUNC_6(VAR_8->us, &VAR_10);
 if (VAR_5)
  goto error_ret;

 switch (VAR_8->rx[1] & VAR_0) {
 case 128:
  VAR_6 += FUNC_7(VAR_4, "8\n");
  break;
 case 129:
  VAR_6 += FUNC_7(VAR_4, "6\n");
  break;
 case 130:
  VAR_6 += FUNC_7(VAR_4, "4\n");
  break;
 case 131:
  VAR_6 += FUNC_7(VAR_4, "2\n");
  break;
 }

error_ret:
 FUNC_3(&VAR_8->buf_lock);

 return VAR_5 ? VAR_5 : VAR_6;
}
