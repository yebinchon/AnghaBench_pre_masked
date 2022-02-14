
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int brightness; scalar_t__ power; scalar_t__ fb_blank; } ;
struct backlight_device {TYPE_1__ props; } ;
struct atmel_pwm_bl {int gpio_on; TYPE_2__* pdata; int pwmc; } ;
struct TYPE_4__ {int pwm_duty_min; int pwm_duty_max; int on_active_low; scalar_t__ pwm_active_low; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct atmel_pwm_bl* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int FUNC_5(struct backlight_device *VAR_2)
{
 struct atmel_pwm_bl *VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = VAR_2->props.brightness;
 int VAR_5;

 if (VAR_2->props.power != VAR_0)
  VAR_4 = 0;
 if (VAR_2->props.fb_blank != VAR_0)
  VAR_4 = 0;

 if (VAR_3->pdata->pwm_active_low)
  VAR_5 = VAR_3->pdata->pwm_duty_min + VAR_4;
 else
  VAR_5 = VAR_3->pdata->pwm_duty_max - VAR_4;

 if (VAR_5 > VAR_3->pdata->pwm_duty_max)
  VAR_5 = VAR_3->pdata->pwm_duty_max;
 if (VAR_5 < VAR_3->pdata->pwm_duty_min)
  VAR_5 = VAR_3->pdata->pwm_duty_min;

 if (!VAR_4) {
  if (VAR_3->gpio_on != -1) {
   FUNC_1(VAR_3->gpio_on,
     0 ^ VAR_3->pdata->on_active_low);
  }
  FUNC_4(&VAR_3->pwmc, VAR_1, VAR_5);
  FUNC_2(&VAR_3->pwmc);
 } else {
  FUNC_3(&VAR_3->pwmc);
  FUNC_4(&VAR_3->pwmc, VAR_1, VAR_5);
  if (VAR_3->gpio_on != -1) {
   FUNC_1(VAR_3->gpio_on,
     1 ^ VAR_3->pdata->on_active_low);
  }
 }

 return 0;
}
