
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_led_platdata {int flags; int gpio; } ;
struct s3c24xx_gpio_led {struct s3c24xx_led_platdata* pdata; } ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 struct s3c24xx_gpio_led* FUNC_2 (struct led_classdev*) ;

__attribute__((used)) static void FUNC_3(struct led_classdev *VAR_4,
       enum led_brightness VAR_5)
{
 struct s3c24xx_gpio_led *VAR_6 = FUNC_2(VAR_4);
 struct s3c24xx_led_platdata *VAR_7 = VAR_6->pdata;




 FUNC_1(VAR_7->gpio, (VAR_5 ? 1 : 0) ^
       (VAR_7->flags & VAR_2));

 if (VAR_7->flags & VAR_3)
  FUNC_0(VAR_7->gpio,
   VAR_5 ? VAR_1 : VAR_0);

}
