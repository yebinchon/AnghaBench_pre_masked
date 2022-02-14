
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_control {int id; int value; } ;
struct si470x_device {int* registers; TYPE_1__* videodev; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct si470x_device*) ;
 struct si470x_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
  struct v4l2_control *VAR_7)
{
 struct si470x_device *VAR_8 = FUNC_2(VAR_5);
 int VAR_9 = 0;


 VAR_9 = FUNC_1(VAR_8);
 if (VAR_9)
  goto done;

 switch (VAR_7->id) {
 case 128:
  VAR_7->value = VAR_8->registers[VAR_3] &
    VAR_4;
  break;
 case 129:
  VAR_7->value = ((VAR_8->registers[VAR_1] &
    VAR_2) == 0) ? 1 : 0;
  break;
 default:
  VAR_9 = -VAR_0;
 }

done:
 if (VAR_9 < 0)
  FUNC_0(&VAR_8->videodev->dev,
   "get control failed with %d\n", VAR_9);
 return VAR_9;
}
