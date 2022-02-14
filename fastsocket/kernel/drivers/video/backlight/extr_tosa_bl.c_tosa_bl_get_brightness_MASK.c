
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backlight_properties {int brightness; } ;
struct backlight_device {struct backlight_properties props; } ;



__attribute__((used)) static int FUNC_0(struct backlight_device *VAR_0)
{
 struct backlight_properties *VAR_1 = &VAR_0->props;

 return VAR_1->brightness;
}
