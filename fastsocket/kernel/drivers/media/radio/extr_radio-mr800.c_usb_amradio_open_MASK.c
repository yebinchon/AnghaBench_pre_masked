
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct amradio_device {int users; int muted; TYPE_1__* videodev; int curfreq; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct amradio_device*,int ) ;
 int FUNC_2 (struct amradio_device*,int ) ;
 int FUNC_3 (struct amradio_device*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct file*) ;
 struct amradio_device* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_3)
{
 struct amradio_device *VAR_4 = FUNC_7(FUNC_6(VAR_3));
 int VAR_5;

 FUNC_4();

 VAR_4->users = 1;
 VAR_4->muted = 1;

 VAR_5 = FUNC_1(VAR_4, VAR_0);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_4->videodev->dev,
   "radio did not start up properly\n");
  VAR_4->users = 0;
  FUNC_5();
  return -VAR_1;
 }

 VAR_5 = FUNC_2(VAR_4, VAR_2);
 if (VAR_5 < 0)
  FUNC_0(&VAR_4->videodev->dev,
   "set stereo failed\n");

 VAR_5 = FUNC_3(VAR_4, VAR_4->curfreq);
 if (VAR_5 < 0)
  FUNC_0(&VAR_4->videodev->dev,
   "set frequency failed\n");

 FUNC_5();
 return 0;
}
