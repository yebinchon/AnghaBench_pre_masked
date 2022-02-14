
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {scalar_t__ currentmode; int scan_timestamp; int mlock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

ssize_t FUNC_3(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4,
        size_t VAR_5)
{
 int VAR_6 = 0;
 struct iio_dev *VAR_7 = FUNC_0(VAR_2);
 bool VAR_8;
 VAR_8 = !(VAR_4[0] == '0');
 FUNC_1(&VAR_7->mlock);
 if (VAR_7->currentmode == VAR_1) {
  VAR_6 = -VAR_0;
  goto error_ret;
 }
 VAR_7->scan_timestamp = VAR_8;
error_ret:
 FUNC_2(&VAR_7->mlock);

 return VAR_6 ? VAR_6 : VAR_5;
}
