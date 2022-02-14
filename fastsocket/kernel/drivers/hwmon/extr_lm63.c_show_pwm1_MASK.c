
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm63_data {int pwm1_value; int pwm1_freq; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct lm63_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct lm63_data *VAR_3 = FUNC_0(VAR_0);
 return FUNC_1(VAR_2, "%d\n", VAR_3->pwm1_value >= 2 * VAR_3->pwm1_freq ?
         255 : (VAR_3->pwm1_value * 255 + VAR_3->pwm1_freq) /
         (2 * VAR_3->pwm1_freq));
}
