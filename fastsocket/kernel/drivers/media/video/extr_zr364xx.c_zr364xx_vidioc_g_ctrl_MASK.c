
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int brightness; } ;
struct zr364xx_camera {TYPE_1__ mode; } ;
struct v4l2_control {int id; int value; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 struct zr364xx_camera* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
     struct v4l2_control *VAR_4)
{
 struct zr364xx_camera *VAR_5;

 if (VAR_2 == ((void*)0))
  return -VAR_1;
 VAR_5 = FUNC_0(VAR_2);

 switch (VAR_4->id) {
 case 128:
  VAR_4->value = VAR_5->mode.brightness;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
