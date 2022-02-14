
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_crop {int dummy; } ;
struct file {int dummy; } ;
struct cx25821_fh {int prio; struct cx25821_dev* dev; } ;
struct cx25821_dev {int prio; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

int FUNC_1(struct file *VAR_1, void *VAR_2, struct v4l2_crop *VAR_3)
{
 struct cx25821_dev *VAR_4 = ((struct cx25821_fh *)VAR_2)->dev;
 struct cx25821_fh *VAR_5 = VAR_2;
 int VAR_6;

 if (VAR_5) {
  VAR_6 = FUNC_0(&VAR_4->prio, &VAR_5->prio);
  if (0 != VAR_6)
   return VAR_6;
 }

 return -VAR_0;
}
