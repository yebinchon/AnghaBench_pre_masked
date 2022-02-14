
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int brightness; } ;
struct zr364xx_camera {int lock; int udev; TYPE_1__ mode; } ;
struct v4l2_control {int id; int value; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,int,int ,int *,int ) ;
 struct zr364xx_camera* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3,
     struct v4l2_control *VAR_4)
{
 struct zr364xx_camera *VAR_5;
 int VAR_6;

 if (VAR_2 == ((void*)0))
  return -VAR_1;
 VAR_5 = FUNC_3(VAR_2);

 switch (VAR_4->id) {
 case 128:
  VAR_5->mode.brightness = VAR_4->value;

  FUNC_0(&VAR_5->lock);
  FUNC_2(VAR_5->udev, 1, 0x2001, 0, ((void*)0), 0);
  VAR_6 = (0x60 << 8) + 127 - VAR_5->mode.brightness;
  FUNC_2(VAR_5->udev, 1, VAR_6, 0, ((void*)0), 0);
  FUNC_1(&VAR_5->lock);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
