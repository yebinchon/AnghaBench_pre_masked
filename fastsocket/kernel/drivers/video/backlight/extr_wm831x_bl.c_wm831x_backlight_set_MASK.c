
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_backlight_data {int current_brightness; int isink_reg; struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct backlight_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct wm831x_backlight_data* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct wm831x*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_5, int VAR_6)
{
 struct wm831x_backlight_data *VAR_7 = FUNC_0(VAR_5);
 struct wm831x *VAR_8 = VAR_7->wm831x;
 int VAR_9 = !VAR_7->current_brightness && VAR_6;
 int VAR_10 = VAR_7->current_brightness && !VAR_6;
 int VAR_11;

 if (VAR_9) {

  VAR_11 = FUNC_1(VAR_8, VAR_7->isink_reg,
          VAR_1, VAR_1);
  if (VAR_11 < 0)
   goto err;


  VAR_11 = FUNC_1(VAR_8, VAR_4,
          VAR_3, VAR_3);
  if (VAR_11 < 0)
   goto err;
 }

 if (VAR_10) {

  VAR_11 = FUNC_1(VAR_8, VAR_4,
          VAR_3, 0);
  if (VAR_11 < 0)
   goto err;


  VAR_11 = FUNC_1(VAR_8, VAR_7->isink_reg,
          VAR_0 | VAR_1, 0);
  if (VAR_11 < 0)
   goto err;
 }


 VAR_11 = FUNC_1(VAR_8, VAR_7->isink_reg,
         VAR_2, VAR_6);
 if (VAR_11 < 0)
  goto err;

 if (VAR_9) {

  VAR_11 = FUNC_1(VAR_8, VAR_7->isink_reg,
          VAR_0, VAR_0);
  if (VAR_11 < 0)
   return VAR_11;
 }

 VAR_7->current_brightness = VAR_6;

 return 0;

err:



 if (VAR_9 || VAR_10) {
  FUNC_1(VAR_8, VAR_4, VAR_3, 0);
  FUNC_1(VAR_8, VAR_7->isink_reg, VAR_1, 0);
 }

 return VAR_11;
}
