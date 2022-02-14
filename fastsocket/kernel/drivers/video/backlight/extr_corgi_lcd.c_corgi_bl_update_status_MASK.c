
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct corgi_lcd {int limit_mask; } ;
struct TYPE_2__ {int brightness; scalar_t__ power; scalar_t__ fb_blank; } ;
struct backlight_device {TYPE_1__ props; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct corgi_lcd*,int) ;
 int VAR_3 ;
 struct corgi_lcd* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_4)
{
 struct corgi_lcd *VAR_5 = FUNC_1(&VAR_4->dev);
 int VAR_6 = VAR_4->props.brightness;

 if (VAR_4->props.power != VAR_2)
  VAR_6 = 0;

 if (VAR_4->props.fb_blank != VAR_2)
  VAR_6 = 0;

 if (VAR_3 & VAR_1)
  VAR_6 = 0;

 if ((VAR_3 & VAR_0) && VAR_6 > VAR_5->limit_mask)
  VAR_6 = VAR_5->limit_mask;

 return FUNC_0(VAR_5, VAR_6);
}
