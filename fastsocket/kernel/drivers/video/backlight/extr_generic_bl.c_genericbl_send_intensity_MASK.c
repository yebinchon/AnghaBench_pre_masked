
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int brightness; scalar_t__ power; int state; } ;
struct backlight_device {TYPE_1__ props; } ;
struct TYPE_4__ {int limit_mask; int (* kick_battery ) () ;int (* set_bl_intensity ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_6)
{
 int VAR_7 = VAR_6->props.brightness;

 if (VAR_6->props.power != VAR_2)
  VAR_7 = 0;
 if (VAR_6->props.state & VAR_0)
  VAR_7 = 0;
 if (VAR_6->props.state & VAR_1)
  VAR_7 = 0;
 if (VAR_6->props.state & VAR_3)
  VAR_7 &= VAR_4->limit_mask;

 VAR_4->set_bl_intensity(VAR_7);

 VAR_5 = VAR_7;

 if (VAR_4->kick_battery)
  VAR_4->kick_battery();

 return 0;
}
