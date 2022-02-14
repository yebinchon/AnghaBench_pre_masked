
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_control {int id; int value; } ;
struct TYPE_2__ {int vflip; int hflip; int brightness; } ;
struct stk_camera {TYPE_1__ vsettings; } ;
struct file {int dummy; } ;


 int VAR_0 ;




__attribute__((used)) static int FUNC_0(struct file *VAR_1,
  void *VAR_2, struct v4l2_control *VAR_3)
{
 struct stk_camera *VAR_4 = VAR_2;
 switch (VAR_3->id) {
 case 130:
  VAR_3->value = VAR_4->vsettings.brightness;
  break;
 case 129:
  VAR_3->value = VAR_4->vsettings.hflip;
  break;
 case 128:
  VAR_3->value = VAR_4->vsettings.vflip;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
