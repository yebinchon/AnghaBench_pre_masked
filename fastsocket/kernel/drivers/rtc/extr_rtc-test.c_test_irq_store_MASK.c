
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int dummy; } ;
struct platform_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rtc_device* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct rtc_device*,int,int) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 struct platform_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_5,
    struct device_attribute *VAR_6,
    const char *VAR_7, size_t VAR_8)
{
 int VAR_9;
 struct platform_device *VAR_10 = FUNC_3(VAR_5);
 struct rtc_device *VAR_11 = FUNC_0(VAR_10);

 VAR_9 = VAR_8;
 if (FUNC_2(VAR_7, "tick", 4) == 0)
  FUNC_1(VAR_11, 1, VAR_3 | VAR_2);
 else if (FUNC_2(VAR_7, "alarm", 5) == 0)
  FUNC_1(VAR_11, 1, VAR_1 | VAR_2);
 else if (FUNC_2(VAR_7, "update", 6) == 0)
  FUNC_1(VAR_11, 1, VAR_4 | VAR_2);
 else
  VAR_9 = -VAR_0;

 return VAR_9;
}
