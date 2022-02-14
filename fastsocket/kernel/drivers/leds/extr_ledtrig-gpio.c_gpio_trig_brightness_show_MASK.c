
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {struct gpio_trig_data* trigger_data; } ;
struct gpio_trig_data {int desired_brightness; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct led_classdev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct led_classdev *VAR_3 = FUNC_0(VAR_0);
 struct gpio_trig_data *VAR_4 = VAR_3->trigger_data;

 return FUNC_1(VAR_2, "%u\n", VAR_4->desired_brightness);
}
