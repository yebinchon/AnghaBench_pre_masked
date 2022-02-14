
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct backlight_device {TYPE_1__ dev; } ;
typedef enum backlight_update_reason { ____Placeholder_backlight_update_reason } backlight_update_reason ;




 int VAR_0 ;
 int FUNC_0 (int *,int ,char**) ;
 int FUNC_1 (int *,int *,char*) ;

__attribute__((used)) static void FUNC_2(struct backlight_device *VAR_1,
         enum backlight_update_reason VAR_2)
{
 char *VAR_3[2];

 switch (VAR_2) {
 case 128:
  VAR_3[0] = "SOURCE=sysfs";
  break;
 case 129:
  VAR_3[0] = "SOURCE=hotkey";
  break;
 default:
  VAR_3[0] = "SOURCE=unknown";
  break;
 }
 VAR_3[1] = ((void*)0);
 FUNC_0(&VAR_1->dev.kobj, VAR_0, VAR_3);
 FUNC_1(&VAR_1->dev.kobj, ((void*)0), "actual_brightness");
}
