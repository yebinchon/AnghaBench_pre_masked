
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int u8 ;
struct iio_dev_attr {int address; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*,int ,int *) ;
 int FUNC_1 (char const*,int,int *) ;
 struct iio_dev_attr* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1,
     const char *VAR_2,
     size_t VAR_3)
{
 int VAR_4;
 ulong VAR_5;
 u8 VAR_6;
 struct iio_dev_attr *VAR_7 = FUNC_2(VAR_1);

 VAR_4 = FUNC_1(VAR_2, 10, &VAR_5);
 if (VAR_4)
  goto err_ret;
 VAR_6 = VAR_5;
 VAR_4 = FUNC_0(VAR_0, VAR_7->address, &VAR_6);

err_ret:
 return VAR_4 ? VAR_4 : VAR_3;
}
