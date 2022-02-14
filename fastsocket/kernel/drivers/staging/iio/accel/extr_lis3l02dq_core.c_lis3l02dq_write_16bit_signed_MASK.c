
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev_attr {int address; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*,int ,long) ;
 int FUNC_1 (char const*,int,long*) ;
 struct iio_dev_attr* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
         struct device_attribute *VAR_1,
         const char *VAR_2,
         size_t VAR_3)
{
 struct iio_dev_attr *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;
 long VAR_6;

 VAR_5 = FUNC_1(VAR_2, 10, &VAR_6);
 if (VAR_5)
  goto error_ret;
 VAR_5 = FUNC_0(VAR_0, VAR_4->address, VAR_6);

error_ret:
 return VAR_5 ? VAR_5 : VAR_3;
}
