
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_frequency {int frequency; } ;
struct file {int dummy; } ;
struct amradio_device {TYPE_1__* videodev; int curfreq; int lock; scalar_t__ removed; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct amradio_device*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct file*) ;
 struct amradio_device* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_1, void *VAR_2,
    struct v4l2_frequency *VAR_3)
{
 struct amradio_device *VAR_4 = FUNC_5(FUNC_4(VAR_1));
 int VAR_5;


 if (VAR_4->removed)
  return -VAR_0;

 FUNC_2(&VAR_4->lock);
 VAR_4->curfreq = VAR_3->frequency;
 FUNC_3(&VAR_4->lock);

 VAR_5 = FUNC_1(VAR_4, VAR_4->curfreq);
 if (VAR_5 < 0)
  FUNC_0(&VAR_4->videodev->dev,
   "set frequency failed\n");
 return 0;
}
