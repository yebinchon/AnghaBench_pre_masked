
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct generic_bl_info* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct generic_bl_info {int limit_mask; char* name; int default_intensity; int max_intensity; } ;
struct TYPE_3__ {int brightness; int power; int max_brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 struct backlight_device* FUNC_2 (char const*,TYPE_2__*,int *,int *) ;
 int FUNC_3 (struct backlight_device*) ;
 struct generic_bl_info* VAR_1 ;
 struct backlight_device* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct platform_device*,struct backlight_device*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct generic_bl_info *VAR_5 = VAR_4->dev.platform_data;
 const char *VAR_6 = "generic-bl";
 struct backlight_device *VAR_7;

 VAR_1 = VAR_5;
 if (!VAR_5->limit_mask)
  VAR_5->limit_mask = -1;

 if (VAR_5->name)
  VAR_6 = VAR_5->name;

 VAR_7 = FUNC_2 (VAR_6,
  &VAR_4->dev, ((void*)0), &VAR_3);
 if (FUNC_0 (VAR_7))
  return FUNC_1 (VAR_7);

 FUNC_4(VAR_4, VAR_7);

 VAR_7->props.max_brightness = VAR_5->max_intensity;
 VAR_7->props.power = VAR_0;
 VAR_7->props.brightness = VAR_5->default_intensity;
 FUNC_3(VAR_7);

 VAR_2 = VAR_7;

 FUNC_5("Generic Backlight Driver Initialized.\n");
 return 0;
}
