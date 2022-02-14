
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_scan_el {int number; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct iio_dev*,int ) ;
 int FUNC_2 (char*,char*,int) ;
 struct iio_scan_el* FUNC_3 (struct device_attribute*) ;

ssize_t FUNC_4(struct device *VAR_0,
    struct device_attribute *VAR_1,
    char *VAR_2)
{
 int VAR_3;
 struct iio_dev *VAR_4 = FUNC_0(VAR_0);
 struct iio_scan_el *VAR_5 = FUNC_3(VAR_1);

 VAR_3 = FUNC_1(VAR_4, VAR_5->number);
 if (VAR_3 < 0)
  return VAR_3;
 return FUNC_2(VAR_2, "%d\n", VAR_3);
}
