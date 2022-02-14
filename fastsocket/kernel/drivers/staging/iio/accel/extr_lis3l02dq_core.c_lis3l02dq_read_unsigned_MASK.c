
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev_attr {int address; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*,int ,int*) ;
 int FUNC_1 (char*,char*,int) ;
 struct iio_dev_attr* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
           struct device_attribute *VAR_1,
           char *VAR_2)
{
 int VAR_3;
 u8 VAR_4;
 struct iio_dev_attr *VAR_5 = FUNC_2(VAR_1);

 VAR_3 = FUNC_0(VAR_0, VAR_5->address, &VAR_4);

 return VAR_3 ? VAR_3 : FUNC_1(VAR_2, "%d\n", VAR_4);
}
