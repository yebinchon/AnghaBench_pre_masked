
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm97xx {struct input_dev* input_dev; int touch_dev; } ;
struct input_dev {int dummy; } ;
struct atmel_wm97xx {int pen_timer; int gpio_pen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct input_dev*,int ,int ) ;
 int FUNC_2 (struct input_dev*,int ,int ) ;
 int FUNC_3 (struct input_dev*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 struct atmel_wm97xx* FUNC_6 (int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_7(struct wm97xx *VAR_4)
{
 struct atmel_wm97xx *VAR_5 = FUNC_6(VAR_4->touch_dev);
 struct input_dev *VAR_6 = VAR_4->input_dev;
 int VAR_7 = FUNC_0(VAR_5->gpio_pen);

 if (VAR_7 != 0) {
  FUNC_4(&VAR_5->pen_timer,
     VAR_2 + FUNC_5(1));
 } else {
  if (VAR_3)
   FUNC_1(VAR_6, VAR_0, 0);
  FUNC_2(VAR_6, VAR_1, 0);
  FUNC_3(VAR_6);
 }
}
