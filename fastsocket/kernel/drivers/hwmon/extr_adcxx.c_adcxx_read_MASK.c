
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tx_buf ;
struct spi_device {int dev; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adcxx {int reference; int lock; } ;
typedef int ssize_t ;
typedef int rx_buf ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct adcxx* FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct spi_device*,int*,int,int*,int) ;
 int FUNC_6 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_7 (struct device_attribute*) ;
 struct spi_device* FUNC_8 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct spi_device *VAR_4 = FUNC_8(VAR_1);
 struct sensor_device_attribute *VAR_5 = FUNC_7(VAR_2);
 struct adcxx *VAR_6 = FUNC_1(&VAR_4->dev);
 u8 VAR_7[2] = { VAR_5->index << 3 };
 u8 VAR_8[2];
 int VAR_9;
 int VAR_10;

 if (FUNC_3(&VAR_6->lock))
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_4, VAR_7, sizeof(VAR_7),
     VAR_8, sizeof(VAR_8));
 if (VAR_9 < 0) {
  FUNC_2(VAR_1, "spi_write_then_read failed with status %d\n",
    VAR_9);
  goto out;
 }

 VAR_10 = (VAR_8[0] << 8) + VAR_8[1];
 FUNC_0(VAR_1, "raw value = 0x%x\n", VAR_10);

 VAR_10 = VAR_10 * VAR_6->reference >> 12;
 VAR_9 = FUNC_6(VAR_3, "%d\n", VAR_10);
out:
 FUNC_4(&VAR_6->lock);
 return VAR_9;
}
