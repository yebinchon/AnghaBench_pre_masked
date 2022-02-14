
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct led_pwm_platform_data* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct led_pwm_platform_data {int num_leds; struct led_pwm* leds; } ;
struct TYPE_5__ {int flags; int brightness; int brightness_set; int default_trigger; int name; } ;
struct led_pwm_data {int pwm; TYPE_1__ cdev; int period; int max_brightness; int active_low; } ;
struct led_pwm {int pwm_period_ns; int max_brightness; int active_low; int default_trigger; int name; int pwm_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (struct led_pwm_data*) ;
 struct led_pwm_data* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_6 (struct platform_device*,struct led_pwm_data*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_6)
{
 struct led_pwm_platform_data *VAR_7 = VAR_6->dev.platform_data;
 struct led_pwm *VAR_8;
 struct led_pwm_data *VAR_9, *VAR_10;
 int VAR_11, VAR_12 = 0;

 if (!VAR_7)
  return -VAR_0;

 VAR_9 = FUNC_3(sizeof(struct led_pwm_data) * VAR_7->num_leds,
    VAR_2);
 if (!VAR_9)
  return -VAR_1;

 for (VAR_11 = 0; VAR_11 < VAR_7->num_leds; VAR_11++) {
  VAR_8 = &VAR_7->leds[VAR_11];
  VAR_10 = &VAR_9[VAR_11];

  VAR_10->pwm = FUNC_8(VAR_8->pwm_id,
    VAR_8->name);
  if (FUNC_0(VAR_10->pwm)) {
   FUNC_1(&VAR_6->dev, "unable to request PWM %d\n",
     VAR_8->pwm_id);
   goto err;
  }

  VAR_10->cdev.name = VAR_8->name;
  VAR_10->cdev.default_trigger = VAR_8->default_trigger;
  VAR_10->active_low = VAR_8->active_low;
  VAR_10->max_brightness = VAR_8->max_brightness;
  VAR_10->period = VAR_8->pwm_period_ns;
  VAR_10->cdev.brightness_set = VAR_5;
  VAR_10->cdev.brightness = VAR_4;
  VAR_10->cdev.flags |= VAR_3;

  VAR_12 = FUNC_4(&VAR_6->dev, &VAR_10->cdev);
  if (VAR_12 < 0) {
   FUNC_7(VAR_10->pwm);
   goto err;
  }
 }

 FUNC_6(VAR_6, VAR_9);

 return 0;

err:
 if (VAR_11 > 0) {
  for (VAR_11 = VAR_11 - 1; VAR_11 >= 0; VAR_11--) {
   FUNC_5(&VAR_9[VAR_11].cdev);
   FUNC_7(VAR_9[VAR_11].pwm);
  }
 }

 FUNC_2(VAR_9);

 return VAR_12;
}
