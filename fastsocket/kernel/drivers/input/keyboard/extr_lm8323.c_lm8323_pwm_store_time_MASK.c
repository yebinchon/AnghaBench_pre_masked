
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm8323_pwm {unsigned long fade_time; } ;
struct led_classdev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct lm8323_pwm* FUNC_0 (struct led_classdev*) ;
 struct led_classdev* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct led_classdev *VAR_5 = FUNC_1(VAR_1);
 struct lm8323_pwm *VAR_6 = FUNC_0(VAR_5);
 int VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_2(VAR_3, 10, &VAR_8);

 if (VAR_7)
  return -VAR_0;

 VAR_6->fade_time = VAR_8;

 return FUNC_3(VAR_3);
}
