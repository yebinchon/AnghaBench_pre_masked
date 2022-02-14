
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sca3000_state {int lock; } ;
struct iio_dev_attr {int address; } ;
struct iio_dev {struct sca3000_state* dev_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct sca3000_state*,int ,int **,int) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 struct iio_dev_attr* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_0,
      struct device_attribute *VAR_1,
      char *VAR_2)
{
 int VAR_3 = 0, VAR_4;
 int VAR_5;
 struct iio_dev_attr *VAR_6 = FUNC_7(VAR_1);
 u8 *VAR_7;
 struct iio_dev *VAR_8 = FUNC_0(VAR_0);
 struct sca3000_state *VAR_9 = VAR_8->dev_data;

 FUNC_2(&VAR_9->lock);
 VAR_4 = FUNC_5(VAR_9, VAR_6->address, &VAR_7, 2);
 if (VAR_4 < 0)
  goto error_ret;
 VAR_5 = FUNC_4(VAR_7[1], VAR_7[2]);
 VAR_3 += FUNC_6(VAR_2 + VAR_3, "%d\n", VAR_5);
 FUNC_1(VAR_7);
error_ret:
 FUNC_3(&VAR_9->lock);

 return VAR_4 ? VAR_4 : VAR_3;
}
