
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {struct gpio_trig_data* trigger_data; } ;
struct gpio_trig_data {unsigned int desired_brightness; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct led_classdev* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,char*,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct led_classdev *VAR_5 = FUNC_1(VAR_1);
 struct gpio_trig_data *VAR_6 = VAR_5->trigger_data;
 unsigned VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_3, "%u", &VAR_7);
 if (VAR_8 < 1 || VAR_7 > 255) {
  FUNC_0(VAR_1, "invalid value\n");
  return -VAR_0;
 }

 VAR_6->desired_brightness = VAR_7;

 return VAR_4;
}
