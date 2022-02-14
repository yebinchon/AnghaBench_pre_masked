
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int FUNC_0 (struct backlight_device*,int ) ;
 struct backlight_device* VAR_1 ;

__attribute__((used)) static int FUNC_1(void)
{

 struct backlight_device *VAR_2 = VAR_1;
 if (VAR_2) {
  int VAR_3 = VAR_2->props.brightness;
  FUNC_0(VAR_2, VAR_0);
  return VAR_3;
 }
 return -1;
}
