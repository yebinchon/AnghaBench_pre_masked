
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {struct iio_prtc_trigger_info* private_data; } ;
struct iio_prtc_trigger_info {unsigned long frequency; int task; int rtc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 struct iio_trigger* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int *,unsigned long) ;
 int FUNC_2 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
         struct device_attribute *VAR_1,
         const char *VAR_2,
         size_t VAR_3)
{
 struct iio_trigger *VAR_4 = FUNC_0(VAR_0);
 struct iio_prtc_trigger_info *VAR_5 = VAR_4->private_data;
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_2, 10, &VAR_6);
 if (VAR_7)
  goto error_ret;

 VAR_7 = FUNC_1(VAR_5->rtc, &VAR_5->task, VAR_6);
 if (VAR_7)
  goto error_ret;

 VAR_5->frequency = VAR_6;

 return VAR_3;

error_ret:
 return VAR_7;
}
