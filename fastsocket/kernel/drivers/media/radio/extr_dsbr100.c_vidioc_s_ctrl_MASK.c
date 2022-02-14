
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_control {int id; int value; } ;
struct file {int dummy; } ;
struct dsbr100_device {TYPE_1__* usbdev; scalar_t__ removed; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct dsbr100_device*) ;
 int FUNC_2 (struct dsbr100_device*) ;
 struct dsbr100_device* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
    struct v4l2_control *VAR_5)
{
 struct dsbr100_device *VAR_6 = FUNC_3(VAR_3);
 int VAR_7;


 if (VAR_6->removed)
  return -VAR_2;

 switch (VAR_5->id) {
 case 128:
  if (VAR_5->value) {
   VAR_7 = FUNC_2(VAR_6);
   if (VAR_7 < 0) {
    FUNC_0(&VAR_6->usbdev->dev,
      "Radio did not respond properly\n");
    return -VAR_0;
   }
  } else {
   VAR_7 = FUNC_1(VAR_6);
   if (VAR_7 < 0) {
    FUNC_0(&VAR_6->usbdev->dev,
      "Radio did not respond properly\n");
    return -VAR_0;
   }
  }
  return 0;
 }
 return -VAR_1;
}
