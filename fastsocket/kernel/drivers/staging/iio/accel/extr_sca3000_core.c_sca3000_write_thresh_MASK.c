
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sca3000_state {int lock; } ;
struct iio_dev_attr {int address; } ;
struct iio_dev {struct sca3000_state* dev_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sca3000_state*,int ,long) ;
 int FUNC_4 (char const*,int,long*) ;
 struct iio_dev_attr* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
        struct device_attribute *VAR_1,
        const char *VAR_2,
        size_t VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_0(VAR_0);
 struct sca3000_state *VAR_5 = VAR_4->dev_data;
 struct iio_dev_attr *VAR_6 = FUNC_5(VAR_1);
 int VAR_7;
 long VAR_8;

 VAR_7 = FUNC_4(VAR_2, 10, &VAR_8);
 if (VAR_7)
  return VAR_7;
 FUNC_1(&VAR_5->lock);
 VAR_7 = FUNC_3(VAR_5, VAR_6->address, VAR_8);
 FUNC_2(&VAR_5->lock);

 return VAR_7 ? VAR_7 : VAR_3;
}
