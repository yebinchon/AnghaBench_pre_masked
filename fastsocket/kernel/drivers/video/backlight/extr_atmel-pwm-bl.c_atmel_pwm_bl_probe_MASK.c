
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct atmel_pwm_bl_platform_data* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_3__ {scalar_t__ max_brightness; int brightness; int power; } ;
struct backlight_device {TYPE_1__ props; } ;
struct atmel_pwm_bl_platform_data {scalar_t__ pwm_compare_max; scalar_t__ pwm_duty_max; scalar_t__ pwm_duty_min; scalar_t__ pwm_frequency; int gpio_on; int on_active_low; int pwm_channel; } ;
struct atmel_pwm_bl {int gpio_on; int pwmc; struct backlight_device* bldev; struct atmel_pwm_bl_platform_data const* pdata; struct platform_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 int FUNC_2 (struct atmel_pwm_bl*) ;
 int VAR_5 ;
 int FUNC_3 (struct backlight_device*) ;
 struct backlight_device* FUNC_4 (char*,TYPE_2__*,struct atmel_pwm_bl*,int *) ;
 int FUNC_5 (struct backlight_device*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (struct atmel_pwm_bl*) ;
 struct atmel_pwm_bl* FUNC_10 (int,int ) ;
 int FUNC_11 (struct platform_device*,struct atmel_pwm_bl*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_6)
{
 const struct atmel_pwm_bl_platform_data *VAR_7;
 struct backlight_device *VAR_8;
 struct atmel_pwm_bl *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_10(sizeof(struct atmel_pwm_bl), VAR_4);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->pdev = VAR_6;

 VAR_7 = VAR_6->dev.platform_data;
 if (!VAR_7) {
  VAR_10 = -VAR_1;
  goto err_free_mem;
 }

 if (VAR_7->pwm_compare_max < VAR_7->pwm_duty_max ||
   VAR_7->pwm_duty_min > VAR_7->pwm_duty_max ||
   VAR_7->pwm_frequency == 0) {
  VAR_10 = -VAR_0;
  goto err_free_mem;
 }

 VAR_9->pdata = VAR_7;
 VAR_9->gpio_on = VAR_7->gpio_on;

 VAR_10 = FUNC_12(VAR_7->pwm_channel, &VAR_9->pwmc);
 if (VAR_10)
  goto err_free_mem;

 if (VAR_9->gpio_on != -1) {
  VAR_10 = FUNC_8(VAR_9->gpio_on, "gpio_atmel_pwm_bl");
  if (VAR_10) {
   VAR_9->gpio_on = -1;
   goto err_free_pwm;
  }


  VAR_10 = FUNC_6(VAR_9->gpio_on,
    0 ^ VAR_7->on_active_low);
  if (VAR_10)
   goto err_free_gpio;
 }

 VAR_8 = FUNC_4("atmel-pwm-bl",
   &VAR_6->dev, VAR_9, &VAR_5);
 if (FUNC_0(VAR_8)) {
  VAR_10 = FUNC_1(VAR_8);
  goto err_free_gpio;
 }

 VAR_9->bldev = VAR_8;

 FUNC_11(VAR_6, VAR_9);


 VAR_8->props.power = VAR_3;
 VAR_8->props.max_brightness = VAR_7->pwm_duty_max - VAR_7->pwm_duty_min;
 VAR_8->props.brightness = VAR_8->props.max_brightness / 2;

 VAR_10 = FUNC_2(VAR_9);
 if (VAR_10)
  goto err_free_bl_dev;

 FUNC_3(VAR_8);

 return 0;

err_free_bl_dev:
 FUNC_11(VAR_6, ((void*)0));
 FUNC_5(VAR_8);
err_free_gpio:
 if (VAR_9->gpio_on != -1)
  FUNC_7(VAR_9->gpio_on);
err_free_pwm:
 FUNC_13(&VAR_9->pwmc);
err_free_mem:
 FUNC_9(VAR_9);
 return VAR_10;
}
