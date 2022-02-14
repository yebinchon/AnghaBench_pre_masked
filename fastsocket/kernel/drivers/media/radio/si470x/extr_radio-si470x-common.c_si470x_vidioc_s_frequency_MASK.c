
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_frequency {scalar_t__ tuner; int frequency; } ;
struct si470x_device {TYPE_1__* videodev; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct si470x_device*) ;
 int FUNC_2 (struct si470x_device*,int ) ;
 struct si470x_device* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2,
  struct v4l2_frequency *VAR_3)
{
 struct si470x_device *VAR_4 = FUNC_3(VAR_1);
 int VAR_5 = 0;


 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  goto done;

 if (VAR_3->tuner != 0) {
  VAR_5 = -VAR_0;
  goto done;
 }

 VAR_5 = FUNC_2(VAR_4, VAR_3->frequency);

done:
 if (VAR_5 < 0)
  FUNC_0(&VAR_4->videodev->dev,
   "set frequency failed with %d\n", VAR_5);
 return VAR_5;
}
