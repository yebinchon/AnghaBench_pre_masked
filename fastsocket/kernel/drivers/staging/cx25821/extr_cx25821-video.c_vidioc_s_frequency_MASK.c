
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int dummy; } ;
struct file {int dummy; } ;
struct cx25821_fh {int prio; struct cx25821_dev* dev; } ;
struct cx25821_dev {int prio; } ;


 int FUNC_0 (struct cx25821_dev*,struct v4l2_frequency*) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(struct file *VAR_0, void *VAR_1, struct v4l2_frequency *VAR_2)
{
 struct cx25821_fh *VAR_3 = VAR_1;
 struct cx25821_dev *VAR_4 = VAR_3->dev;
 int VAR_5;

 if (VAR_3) {
  VAR_5 = FUNC_1(&VAR_4->prio, &VAR_3->prio);
  if (0 != VAR_5)
   return VAR_5;
 }

 return FUNC_0(VAR_4, VAR_2);
}
