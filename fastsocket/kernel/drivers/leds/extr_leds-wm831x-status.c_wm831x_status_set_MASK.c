
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_status {int brightness; int value_lock; int work; scalar_t__ blink; } ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct wm831x_status* FUNC_3 (struct led_classdev*) ;

__attribute__((used)) static void FUNC_4(struct led_classdev *VAR_1,
      enum led_brightness VAR_2)
{
 struct wm831x_status *VAR_3 = FUNC_3(VAR_1);
 unsigned long VAR_4;

 FUNC_1(&VAR_3->value_lock, VAR_4);
 VAR_3->brightness = VAR_2;
 if (VAR_2 == VAR_0)
  VAR_3->blink = 0;
 FUNC_0(&VAR_3->work);
 FUNC_2(&VAR_3->value_lock, VAR_4);
}
