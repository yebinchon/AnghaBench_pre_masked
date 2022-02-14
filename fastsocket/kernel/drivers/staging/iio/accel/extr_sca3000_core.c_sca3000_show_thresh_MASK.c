
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
 int FUNC_1 (int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sca3000_state*,int ,int**) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 struct iio_dev_attr* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_0,
       struct device_attribute *VAR_1,
       char *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_0(VAR_0);
 struct sca3000_state *VAR_4 = VAR_3->dev_data;
 struct iio_dev_attr *VAR_5 = FUNC_6(VAR_1);
 int VAR_6 = 0, VAR_7;
 u8 *VAR_8;

 FUNC_2(&VAR_4->lock);
 VAR_7 = FUNC_4(VAR_4,
        VAR_5->address,
        &VAR_8);
 FUNC_3(&VAR_4->lock);
 if (VAR_7)
  return VAR_7;
 VAR_6 += FUNC_5(VAR_2 + VAR_6, "%d\n", VAR_8[1]);
 FUNC_1(VAR_8);

 return VAR_6;
}
