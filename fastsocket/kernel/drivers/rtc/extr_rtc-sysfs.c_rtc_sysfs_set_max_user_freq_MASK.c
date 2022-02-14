
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int max_user_freq; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned long FUNC_0 (char const*,int *,int ) ;
 struct rtc_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct rtc_device *VAR_5 = FUNC_1(VAR_1);
 unsigned long VAR_6 = FUNC_0(VAR_3, ((void*)0), 0);

 if (VAR_6 >= 4096 || VAR_6 == 0)
  return -VAR_0;

 VAR_5->max_user_freq = (int)VAR_6;

 return VAR_4;
}
