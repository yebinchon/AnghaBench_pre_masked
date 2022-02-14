
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sca3000_state {int dummy; } ;
struct iio_dev {struct sca3000_state* dev_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct sca3000_state*,int ,int**,int) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_0(VAR_1);
 struct sca3000_state *VAR_5 = VAR_4->dev_data;
 int VAR_6 = 0, VAR_7;
 int VAR_8;
 u8 *VAR_9;
 VAR_7 = FUNC_2(VAR_5, VAR_0, &VAR_9, 2);
 if (VAR_7 < 0)
  goto error_ret;
 VAR_8 = ((VAR_9[1]&0x3F) << 3) | ((VAR_9[2] & 0xE0) >> 5);
 VAR_6 += FUNC_3(VAR_3 + VAR_6, "%d\n", VAR_8);
 FUNC_1(VAR_9);

 return VAR_6;

error_ret:
 return VAR_7;
}
