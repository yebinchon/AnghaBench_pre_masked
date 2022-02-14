
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_transfer {int bits_per_word; int len; int cs_change; int* tx_buf; int* rx_buf; } ;
struct spi_message {int dummy; } ;
struct kxsd9_state {int* tx; int* rx; int buf_lock; int us; } ;
struct iio_dev {struct kxsd9_state* dev_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 struct iio_dev* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_6 (struct spi_message*) ;
 int FUNC_7 (int ,struct spi_message*) ;
 int FUNC_8 (char const*,int,long*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_7,
          struct device_attribute *VAR_8,
          const char *VAR_9,
          size_t VAR_10)
{
 long VAR_11;
 struct spi_message VAR_12;
 int VAR_13;
 struct iio_dev *VAR_14 = FUNC_2(VAR_7);
 struct kxsd9_state *VAR_15 = VAR_14->dev_data;
 u8 VAR_16;
 struct spi_transfer VAR_17[] = {
  {
   .bits_per_word = 8,
   .len = 2,
   .cs_change = 1,
   .tx_buf = VAR_15->tx,
   .rx_buf = VAR_15->rx,
  }, {
   .bits_per_word = 8,
   .len = 2,
   .cs_change = 1,
   .tx_buf = VAR_15->tx,
  },
 };

 VAR_13 = FUNC_8(VAR_9, 10, &VAR_11);
 if (VAR_13)
  return VAR_13;
 switch (VAR_11) {
 case 8:
  VAR_16 = VAR_4;
  break;
 case 6:
  VAR_16 = VAR_3;
  break;
 case 4:
  VAR_16 = VAR_2;
  break;
 case 2:
  VAR_16 = VAR_1;
  break;
 default:
  return -VAR_0;
 }
 FUNC_3(&VAR_15->buf_lock);
 VAR_15->tx[0] = FUNC_0(VAR_6);
 VAR_15->tx[1] = 0;
 FUNC_6(&VAR_12);
 FUNC_5(&VAR_17[0], &VAR_12);
 VAR_13 = FUNC_7(VAR_15->us, &VAR_12);
 if (VAR_13)
  goto error_ret;
 VAR_15->tx[0] = FUNC_1(VAR_6);
 VAR_15->tx[1] = (VAR_15->rx[1] & ~VAR_5) | VAR_16;

 FUNC_6(&VAR_12);
 FUNC_5(&VAR_17[1], &VAR_12);
 VAR_13 = FUNC_7(VAR_15->us, &VAR_12);
error_ret:
 FUNC_4(&VAR_15->buf_lock);
 return VAR_13 ? VAR_13 : VAR_10;
}
