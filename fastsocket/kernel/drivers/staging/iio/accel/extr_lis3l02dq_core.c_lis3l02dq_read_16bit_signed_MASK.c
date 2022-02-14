
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev_attr {int address; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int s16 ;


 int FUNC_0 (struct device*,int ,int*) ;
 int FUNC_1 (char*,char*,int) ;
 struct iio_dev_attr* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
        struct device_attribute *VAR_1,
        char *VAR_2)
{
 int VAR_3;
 s16 VAR_4 = 0;
 struct iio_dev_attr *VAR_5 = FUNC_2(VAR_1);

 VAR_3 = FUNC_0(VAR_0, VAR_5->address, &VAR_4);

 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_2, "%d\n", VAR_4);
}
