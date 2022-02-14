
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u32 ;
struct platform_device {int dummy; } ;
struct ep93xx_pwm {long duty_percent; int clk; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 long VAR_1 ;
 long FUNC_0 (int ) ;
 int FUNC_1 (struct ep93xx_pwm*) ;
 int FUNC_2 (struct ep93xx_pwm*) ;
 int FUNC_3 (struct ep93xx_pwm*) ;
 long FUNC_4 (struct ep93xx_pwm*) ;
 int FUNC_5 (struct ep93xx_pwm*,long) ;
 int FUNC_6 (struct ep93xx_pwm*,long) ;
 struct ep93xx_pwm* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (char const*,int,long*) ;
 struct platform_device* FUNC_9 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct platform_device *VAR_6 = FUNC_9(VAR_2);
 struct ep93xx_pwm *VAR_7 = FUNC_7(VAR_6);
 long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_8(VAR_4, 10, &VAR_8);
 if (VAR_9)
  return -VAR_0;

 if (VAR_8 == 0) {
  FUNC_1(VAR_7);
 } else if (VAR_8 <= (FUNC_0(VAR_7->clk) / 2)) {
  u32 VAR_10, VAR_11;

  VAR_8 = (FUNC_0(VAR_7->clk) / VAR_8) - 1;
  if (VAR_8 > VAR_1)
   VAR_8 = VAR_1;
  if (VAR_8 < 1)
   VAR_8 = 1;

  VAR_10 = FUNC_4(VAR_7);
  VAR_11 = ((VAR_8 + 1) * VAR_7->duty_percent / 100) - 1;


  if (VAR_8 > VAR_10) {
   FUNC_6(VAR_7, VAR_8);
   FUNC_5(VAR_7, VAR_11);
  } else {
   FUNC_5(VAR_7, VAR_11);
   FUNC_6(VAR_7, VAR_8);
  }

  if (!FUNC_3(VAR_7))
   FUNC_2(VAR_7);
 } else {
  return -VAR_0;
 }

 return VAR_5;
}
