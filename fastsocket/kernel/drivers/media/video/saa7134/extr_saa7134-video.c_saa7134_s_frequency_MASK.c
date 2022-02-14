
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; scalar_t__ type; int frequency; } ;
struct saa7134_fh {int radio; int prio; struct saa7134_dev* dev; } ;
struct saa7134_dev {int lock; int ctl_freq; int prio; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (struct saa7134_dev*) ;
 int FUNC_3 (struct saa7134_dev*,int ,int ,struct v4l2_frequency*) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_5, void *VAR_6,
     struct v4l2_frequency *VAR_7)
{
 struct saa7134_fh *VAR_8 = VAR_6;
 struct saa7134_dev *VAR_9 = VAR_8->dev;
 int VAR_10;

 VAR_10 = FUNC_4(&VAR_9->prio, VAR_8->prio);
 if (0 != VAR_10)
  return VAR_10;

 if (0 != VAR_7->tuner)
  return -VAR_0;
 if (0 == VAR_8->radio && VAR_1 != VAR_7->type)
  return -VAR_0;
 if (1 == VAR_8->radio && VAR_2 != VAR_7->type)
  return -VAR_0;
 FUNC_0(&VAR_9->lock);
 VAR_9->ctl_freq = VAR_7->frequency;

 FUNC_3(VAR_9, VAR_4, VAR_3, VAR_7);

 FUNC_2(VAR_9);
 FUNC_1(&VAR_9->lock);
 return 0;
}
