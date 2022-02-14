
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int brightness; scalar_t__ power; scalar_t__ fb_blank; } ;
struct backlight_device {TYPE_1__ props; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct backlight_device *VAR_4)
{
 int VAR_5 = VAR_4->props.brightness;

 if (VAR_4->props.power != VAR_0)
  VAR_5 = 0;
 if (VAR_4->props.fb_blank != VAR_0)
  VAR_5 = 0;

 FUNC_0(VAR_3, VAR_2, VAR_5 + VAR_1);

 return 0;
}
