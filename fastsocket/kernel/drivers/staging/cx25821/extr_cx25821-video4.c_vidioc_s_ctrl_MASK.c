
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int dummy; } ;
struct file {int dummy; } ;
struct cx25821_fh {int prio; struct cx25821_dev* dev; } ;
struct cx25821_dev {int prio; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx25821_dev*,struct v4l2_control*,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
    struct v4l2_control *VAR_3)
{
 struct cx25821_fh *VAR_4 = VAR_2;
 struct cx25821_dev *VAR_5 = ((struct cx25821_fh *)VAR_2)->dev;
 int VAR_6;

 if (VAR_4) {
  VAR_6 = FUNC_1(&VAR_5->prio, &VAR_4->prio);
  if (0 != VAR_6)
   return VAR_6;
 }

 return FUNC_0(VAR_5, VAR_3, VAR_0);
}
