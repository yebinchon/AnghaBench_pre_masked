
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int power; int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int FUNC_4(struct backlight_device *VAR_3)
{
 int VAR_4;
 if (VAR_3->props.power == 4)
  VAR_4 = FUNC_0(VAR_1, 0x1, 0x4, 0x3);
 else
  VAR_4 = FUNC_0(VAR_1, 0x1, 0x4, 0x0);
 if (VAR_4 != 0)
  FUNC_3(VAR_0,
   "Unable to adjust backlight power, error code %i\n",
   VAR_4);

 if (VAR_2)
  VAR_4 = FUNC_2(VAR_3->props.brightness);
 else
  VAR_4 = FUNC_1(VAR_3->props.brightness);
 if (VAR_4 != 0)
  FUNC_3(VAR_0,
   "Unable to adjust LCD brightness, error code %i\n",
   VAR_4);
 return VAR_4;
}
