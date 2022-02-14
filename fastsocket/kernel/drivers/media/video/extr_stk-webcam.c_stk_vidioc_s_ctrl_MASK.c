
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_control {int id; int value; } ;
struct TYPE_2__ {int brightness; int hflip; int vflip; } ;
struct stk_camera {TYPE_1__ vsettings; } ;
struct file {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct stk_camera*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1,
  void *VAR_2, struct v4l2_control *VAR_3)
{
 struct stk_camera *VAR_4 = VAR_2;
 switch (VAR_3->id) {
 case 130:
  VAR_4->vsettings.brightness = VAR_3->value;
  return FUNC_0(VAR_4, VAR_3->value >> 8);
 case 129:
  VAR_4->vsettings.hflip = VAR_3->value;
  return 0;
 case 128:
  VAR_4->vsettings.vflip = VAR_3->value;
  return 0;
 default:
  return -VAR_0;
 }
 return 0;
}
