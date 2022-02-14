
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_tuner {scalar_t__ index; int audmode; } ;
struct si470x_device {TYPE_1__* videodev; int * registers; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct si470x_device*) ;
 int FUNC_2 (struct si470x_device*,size_t) ;
 struct si470x_device* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
  struct v4l2_tuner *VAR_5)
{
 struct si470x_device *VAR_6 = FUNC_3(VAR_3);
 int VAR_7 = -VAR_0;


 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7)
  goto done;

 if (VAR_5->index != 0)
  goto done;


 switch (VAR_5->audmode) {
 case 129:
  VAR_6->registers[VAR_1] |= VAR_2;
  break;
 case 128:
  VAR_6->registers[VAR_1] &= ~VAR_2;
  break;
 default:
  goto done;
 }

 VAR_7 = FUNC_2(VAR_6, VAR_1);

done:
 if (VAR_7 < 0)
  FUNC_0(&VAR_6->videodev->dev,
   "set tuner failed with %d\n", VAR_7);
 return VAR_7;
}
