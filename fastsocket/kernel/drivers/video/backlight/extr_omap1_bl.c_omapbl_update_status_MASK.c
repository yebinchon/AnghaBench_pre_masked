
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_backlight {scalar_t__ current_intensity; scalar_t__ powermode; } ;
struct TYPE_2__ {scalar_t__ brightness; scalar_t__ fb_blank; } ;
struct backlight_device {TYPE_1__ props; int dev; } ;


 scalar_t__ VAR_0 ;
 struct omap_backlight* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct backlight_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct backlight_device *VAR_1)
{
 struct omap_backlight *VAR_2 = FUNC_0(&VAR_1->dev);

 if (VAR_2->current_intensity != VAR_1->props.brightness) {
  if (VAR_2->powermode == VAR_0)
   FUNC_1(VAR_1->props.brightness);
  VAR_2->current_intensity = VAR_1->props.brightness;
 }

 if (VAR_1->props.fb_blank != VAR_2->powermode)
  FUNC_2(VAR_1, VAR_1->props.fb_blank);

 return 0;
}
