
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sca3000_state {int lock; int info; } ;
struct iio_dev {struct sca3000_state* dev_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct sca3000_state*,int ,int*) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sca3000_state*,int ,int**) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
          struct device_attribute *VAR_2,
          char *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_1(VAR_1);
 struct sca3000_state *VAR_5 = VAR_4->dev_data;
 int VAR_6, VAR_7 = 0, VAR_8 = 0;
 u8 *VAR_9;
 FUNC_3(&VAR_5->lock);
 VAR_6 = FUNC_0(VAR_5, VAR_5->info, &VAR_8);
 if (VAR_6)
  goto error_ret_mut;
 VAR_6 = FUNC_5(VAR_5, VAR_0, &VAR_9);
 FUNC_4(&VAR_5->lock);
 if (VAR_6)
  goto error_ret;
 if (VAR_8 > 0)
  switch (VAR_9[1]&0x03) {
  case 0x00:
  case 0x03:
   VAR_7 = FUNC_6(VAR_3, "%d\n", VAR_8);
   break;
  case 0x01:
   VAR_7 = FUNC_6(VAR_3, "%d\n", VAR_8/2);
   break;
  case 0x02:
   VAR_7 = FUNC_6(VAR_3, "%d\n", VAR_8/4);
   break;
 };
   FUNC_2(VAR_9);
 return VAR_7;
error_ret_mut:
 FUNC_4(&VAR_5->lock);
error_ret:
 return VAR_6;
}
