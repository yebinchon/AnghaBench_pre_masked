
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ep93xx_pwm {int duty_percent; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct ep93xx_pwm* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct platform_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_2(VAR_0);
 struct ep93xx_pwm *VAR_4 = FUNC_0(VAR_3);

 return FUNC_1(VAR_2, "%d\n", VAR_4->duty_percent);
}
