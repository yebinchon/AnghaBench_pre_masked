
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_frequency {scalar_t__ tuner; int frequency; int type; } ;
struct si470x_device {TYPE_1__* videodev; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct si470x_device*) ;
 int FUNC_2 (struct si470x_device*,int *) ;
 struct si470x_device* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3,
  struct v4l2_frequency *VAR_4)
{
 struct si470x_device *VAR_5 = FUNC_3(VAR_2);
 int VAR_6 = 0;


 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6)
  goto done;

 if (VAR_4->tuner != 0) {
  VAR_6 = -VAR_0;
  goto done;
 }

 VAR_4->type = VAR_1;
 VAR_6 = FUNC_2(VAR_5, &VAR_4->frequency);

done:
 if (VAR_6 < 0)
  FUNC_0(&VAR_5->videodev->dev,
   "get frequency failed with %d\n", VAR_6);
 return VAR_6;
}
