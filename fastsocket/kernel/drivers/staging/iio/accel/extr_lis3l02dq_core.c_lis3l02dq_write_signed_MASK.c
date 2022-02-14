
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev_attr {int address; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef long s8 ;


 int FUNC_0 (struct device*,int ,int *) ;
 int FUNC_1 (char const*,int,long*) ;
 struct iio_dev_attr* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
          struct device_attribute *VAR_1,
          const char *VAR_2,
          size_t VAR_3)
{
 long VAR_4;
 s8 VAR_5;
 int VAR_6;
 struct iio_dev_attr *VAR_7 = FUNC_2(VAR_1);

 VAR_6 = FUNC_1(VAR_2, 10, &VAR_4);
 if (VAR_6)
  goto error_ret;
 VAR_5 = VAR_4;
 VAR_6 = FUNC_0(VAR_0, VAR_7->address, (u8 *)&VAR_5);

error_ret:
 return VAR_6 ? VAR_6 : VAR_3;
}
