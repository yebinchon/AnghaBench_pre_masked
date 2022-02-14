
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct corgi_lcd {int gpio_backlight_cont_inverted; int intensity; int (* kick_battery ) () ;int gpio_backlight_on; int gpio_backlight_cont; } ;


 int VAR_0 ;
 int FUNC_0 (struct corgi_lcd*,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct corgi_lcd *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_2 > 0x10)
  VAR_2 += 0x10;

 FUNC_0(VAR_1, VAR_0, VAR_2);


 VAR_3 = !!(VAR_2 & 0x20) ^ VAR_1->gpio_backlight_cont_inverted;

 if (FUNC_1(VAR_1->gpio_backlight_cont))
  FUNC_2(VAR_1->gpio_backlight_cont, VAR_3);

 if (FUNC_1(VAR_1->gpio_backlight_on))
  FUNC_2(VAR_1->gpio_backlight_on, VAR_2);

 if (VAR_1->kick_battery)
  VAR_1->kick_battery();

 VAR_1->intensity = VAR_2;
 return 0;
}
