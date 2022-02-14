
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {struct iio_prtc_trigger_info* private_data; } ;
struct iio_prtc_trigger_info {char* name; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct iio_trigger* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
        struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct iio_trigger *VAR_3 = FUNC_0(VAR_0);
 struct iio_prtc_trigger_info *VAR_4 = VAR_3->private_data;
 return FUNC_1(VAR_2, "%s\n", VAR_4->name);
}
