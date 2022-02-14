
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350_led {int value; int value_lock; int work; } ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct wm8350_led* FUNC_3 (struct led_classdev*) ;

__attribute__((used)) static void FUNC_4(struct led_classdev *VAR_0,
      enum led_brightness VAR_1)
{
 struct wm8350_led *VAR_2 = FUNC_3(VAR_0);
 unsigned long VAR_3;

 FUNC_1(&VAR_2->value_lock, VAR_3);
 VAR_2->value = VAR_1;
 FUNC_0(&VAR_2->work);
 FUNC_2(&VAR_2->value_lock, VAR_3);
}
