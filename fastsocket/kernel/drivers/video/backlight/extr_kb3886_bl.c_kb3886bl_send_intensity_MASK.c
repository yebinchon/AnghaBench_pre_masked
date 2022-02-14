
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int brightness; scalar_t__ power; scalar_t__ fb_blank; } ;
struct backlight_device {TYPE_1__ props; } ;
struct TYPE_4__ {int (* set_bl_intensity ) (int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct backlight_device *VAR_5)
{
 int VAR_6 = VAR_5->props.brightness;

 if (VAR_5->props.power != VAR_0)
  VAR_6 = 0;
 if (VAR_5->props.fb_blank != VAR_0)
  VAR_6 = 0;
 if (VAR_3 & VAR_1)
  VAR_6 = 0;

 VAR_2->set_bl_intensity(VAR_6);

 VAR_4 = VAR_6;
 return 0;
}
