
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_queryctrl {int id; int flags; } ;
struct si470x_device {TYPE_1__* videodev; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct v4l2_queryctrl*,int ,int,int,int) ;
 struct si470x_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
  struct v4l2_queryctrl *VAR_6)
{
 struct si470x_device *VAR_7 = FUNC_2(VAR_4);
 int VAR_8 = -VAR_0;


 if (VAR_6->id < VAR_1)
  goto done;


 switch (VAR_6->id) {
 case 128:
  return FUNC_1(VAR_6, 0, 15, 1, 15);
 case 129:
  return FUNC_1(VAR_6, 0, 1, 1, 1);
 }



 if ((VAR_8 == -VAR_0) && (VAR_6->id < VAR_2)) {
  VAR_6->flags = VAR_3;
  VAR_8 = 0;
 }

done:
 if (VAR_8 < 0)
  FUNC_0(&VAR_7->videodev->dev,
   "query controls failed with %d\n", VAR_8);
 return VAR_8;
}
