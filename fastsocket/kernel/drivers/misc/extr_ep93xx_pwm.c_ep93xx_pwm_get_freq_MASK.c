
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct platform_device {int dummy; } ;
struct ep93xx_pwm {int clk; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ep93xx_pwm*) ;
 int FUNC_2 (struct ep93xx_pwm*) ;
 struct ep93xx_pwm* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (char*,char*,...) ;
 struct platform_device* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_5(VAR_0);
 struct ep93xx_pwm *VAR_4 = FUNC_3(VAR_3);

 if (FUNC_1(VAR_4)) {
  unsigned long VAR_5 = FUNC_0(VAR_4->clk);
  u16 VAR_6 = FUNC_2(VAR_4);

  return FUNC_4(VAR_2, "%ld\n", VAR_5 / (VAR_6 + 1));
 } else {
  return FUNC_4(VAR_2, "disabled\n");
 }
}
