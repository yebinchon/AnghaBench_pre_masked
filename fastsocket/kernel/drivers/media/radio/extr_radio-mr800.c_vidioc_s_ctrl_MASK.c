
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_control {int id; int value; } ;
struct file {int dummy; } ;
struct amradio_device {TYPE_1__* videodev; scalar_t__ removed; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct amradio_device*,int ) ;
 int FUNC_2 (struct file*) ;
 struct amradio_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4, void *VAR_5,
    struct v4l2_control *VAR_6)
{
 struct amradio_device *VAR_7 = FUNC_3(FUNC_2(VAR_4));
 int VAR_8;


 if (VAR_7->removed)
  return -VAR_3;

 switch (VAR_6->id) {
 case 128:
  if (VAR_6->value) {
   VAR_8 = FUNC_1(VAR_7, VAR_1);
   if (VAR_8 < 0) {
    FUNC_0(&VAR_7->videodev->dev,
     "amradio_stop failed\n");
    return -1;
   }
  } else {
   VAR_8 = FUNC_1(VAR_7, VAR_0);
   if (VAR_8 < 0) {
    FUNC_0(&VAR_7->videodev->dev,
     "amradio_start failed\n");
    return -1;
   }
  }
  return 0;
 }
 return -VAR_2;
}
