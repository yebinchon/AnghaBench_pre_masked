
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct spi_transfer {int bits_per_word; int len; int cs_change; int delay_usecs; int* rx_buf; int * tx_buf; } ;
struct spi_message {int dummy; } ;
struct kxsd9_state {int* rx; int buf_lock; int us; int * tx; } ;
struct iio_dev_attr {int address; } ;
struct iio_dev {struct kxsd9_state* dev_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_5 (struct spi_message*) ;
 int FUNC_6 (int ,struct spi_message*) ;
 int FUNC_7 (char*,char*,int) ;
 struct iio_dev_attr* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_0,
    struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct spi_message VAR_3;
 int VAR_4;
 ssize_t VAR_5 = 0;
 u16 VAR_6;
 struct iio_dev_attr *VAR_7 = FUNC_8(VAR_1);
 struct iio_dev *VAR_8 = FUNC_1(VAR_0);
 struct kxsd9_state *VAR_9 = VAR_8->dev_data;
 struct spi_transfer VAR_10[] = {
  {
   .bits_per_word = 8,
   .len = 1,
   .cs_change = 0,
   .delay_usecs = 200,
   .tx_buf = VAR_9->tx,
  }, {
   .bits_per_word = 8,
   .len = 2,
   .cs_change = 1,
   .rx_buf = VAR_9->rx,
  },
 };

 FUNC_2(&VAR_9->buf_lock);
 VAR_9->tx[0] = FUNC_0(VAR_7->address);
 FUNC_5(&VAR_3);
 FUNC_4(&VAR_10[0], &VAR_3);
 FUNC_4(&VAR_10[1], &VAR_3);
 VAR_4 = FUNC_6(VAR_9->us, &VAR_3);
 if (VAR_4)
  goto error_ret;
 VAR_6 = (((u16)(VAR_9->rx[0])) << 8) | (VAR_9->rx[1] & 0xF0);
 VAR_5 = FUNC_7(VAR_2, "%d\n", VAR_6);
error_ret:
 FUNC_3(&VAR_9->buf_lock);

 return VAR_4 ? VAR_4 : VAR_5;
}
