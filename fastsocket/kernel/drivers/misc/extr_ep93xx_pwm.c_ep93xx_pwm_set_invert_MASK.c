
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ep93xx_pwm {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct ep93xx_pwm*) ;
 int FUNC_1 (struct ep93xx_pwm*) ;
 struct ep93xx_pwm* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (char const*,int,long*) ;
 struct platform_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct platform_device *VAR_5 = FUNC_4(VAR_1);
 struct ep93xx_pwm *VAR_6 = FUNC_2(VAR_5);
 long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3, 10, &VAR_7);
 if (VAR_8)
  return -VAR_0;

 if (VAR_7 == 0)
  FUNC_1(VAR_6);
 else if (VAR_7 == 1)
  FUNC_0(VAR_6);
 else
  return -VAR_0;

 return VAR_4;
}
