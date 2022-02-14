
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int power; } ;
struct backlight_device {TYPE_1__ props; } ;


 struct backlight_device* VAR_0 ;
 int FUNC_0 (struct backlight_device*) ;

__attribute__((used)) static void FUNC_1(int VAR_1)
{
 struct backlight_device *VAR_2 = VAR_0;

 if (VAR_2) {
  VAR_2->props.power = VAR_1;
  FUNC_0(VAR_2);
 }
}
