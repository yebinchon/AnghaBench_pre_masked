
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int brightness; } ;
struct backlight_device {int ops_lock; TYPE_2__* ops; TYPE_1__ props; } ;
typedef enum backlight_update_reason { ____Placeholder_backlight_update_reason } backlight_update_reason ;
struct TYPE_4__ {int (* get_brightness ) (struct backlight_device*) ;} ;


 int FUNC_0 (struct backlight_device*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct backlight_device*) ;

void FUNC_4(struct backlight_device *VAR_0,
       enum backlight_update_reason VAR_1)
{
 FUNC_1(&VAR_0->ops_lock);
 if (VAR_0->ops && VAR_0->ops->get_brightness)
  VAR_0->props.brightness = VAR_0->ops->get_brightness(VAR_0);
 FUNC_2(&VAR_0->ops_lock);
 FUNC_0(VAR_0, VAR_1);
}
