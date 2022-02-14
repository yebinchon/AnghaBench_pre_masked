
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_tuner {int audmode; int rxsubchans; } ;
struct saa7134_fh {int prio; struct saa7134_dev* dev; } ;
struct TYPE_2__ {int mode; } ;
struct saa7134_dev {TYPE_1__ thread; int prio; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct saa7134_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
     struct v4l2_tuner *VAR_3)
{
 struct saa7134_fh *VAR_4 = VAR_2;
 struct saa7134_dev *VAR_5 = VAR_4->dev;
 int VAR_6, VAR_7, VAR_8;

 VAR_8 = FUNC_2(&VAR_5->prio, VAR_4->prio);
 if (0 != VAR_8)
  return VAR_8;

 VAR_7 = VAR_5->thread.mode;
 if (VAR_0 == VAR_7) {
  VAR_6 = FUNC_0(VAR_5);
  VAR_7 = FUNC_1(VAR_3->rxsubchans);
 }
 if (VAR_7 != VAR_3->audmode)
  VAR_5->thread.mode = VAR_3->audmode;

 return 0;
}
