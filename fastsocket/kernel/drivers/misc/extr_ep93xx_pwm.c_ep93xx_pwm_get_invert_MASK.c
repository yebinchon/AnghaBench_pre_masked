
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ep93xx_pwm {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct ep93xx_pwm*) ;
 struct ep93xx_pwm* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (char*,char*,int) ;
 struct platform_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_3(VAR_0);
 struct ep93xx_pwm *VAR_4 = FUNC_1(VAR_3);

 return FUNC_2(VAR_2, "%d\n", FUNC_0(VAR_4));
}
