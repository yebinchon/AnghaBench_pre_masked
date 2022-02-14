
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int brightness; } ;
struct zr364xx_camera {TYPE_1__ mode; } ;
struct v4l2_queryctrl {int id; int maximum; int step; int flags; int default_value; int minimum; int name; int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct zr364xx_camera* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
        struct v4l2_queryctrl *VAR_5)
{
 struct zr364xx_camera *VAR_6;

 if (VAR_3 == ((void*)0))
  return -VAR_1;
 VAR_6 = FUNC_1(VAR_3);

 switch (VAR_5->id) {
 case 128:
  VAR_5->type = VAR_2;
  FUNC_0(VAR_5->name, "Brightness");
  VAR_5->minimum = 0;
  VAR_5->maximum = 127;
  VAR_5->step = 1;
  VAR_5->default_value = VAR_6->mode.brightness;
  VAR_5->flags = 0;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
