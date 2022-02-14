
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {struct gpio_trig_data* trigger_data; } ;
struct gpio_trig_data {unsigned int gpio; int work; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct led_classdev* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct led_classdev*) ;
 int FUNC_4 (unsigned int) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,int,char*,struct led_classdev*) ;
 int FUNC_6 (char const*,char*,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_5,
  struct device_attribute *VAR_6, const char *VAR_7, size_t VAR_8)
{
 struct led_classdev *VAR_9 = FUNC_1(VAR_5);
 struct gpio_trig_data *VAR_10 = VAR_9->trigger_data;
 unsigned VAR_11;
 int VAR_12;

 VAR_12 = FUNC_6(VAR_7, "%u", &VAR_11);
 if (VAR_12 < 1) {
  FUNC_0(VAR_5, "couldn't read gpio number\n");
  FUNC_2(&VAR_10->work);
  return -VAR_0;
 }

 if (VAR_10->gpio == VAR_11)
  return VAR_8;

 if (!VAR_11) {
  if (VAR_10->gpio != 0)
   FUNC_3(FUNC_4(VAR_10->gpio), VAR_9);
  VAR_10->gpio = 0;
  return VAR_8;
 }

 VAR_12 = FUNC_5(FUNC_4(VAR_11), VAR_4,
   VAR_1 | VAR_3
   | VAR_2, "ledtrig-gpio", VAR_9);
 if (VAR_12) {
  FUNC_0(VAR_5, "request_irq failed with error %d\n", VAR_12);
 } else {
  if (VAR_10->gpio != 0)
   FUNC_3(FUNC_4(VAR_10->gpio), VAR_9);
  VAR_10->gpio = VAR_11;
 }

 return VAR_12 ? VAR_12 : VAR_8;
}
