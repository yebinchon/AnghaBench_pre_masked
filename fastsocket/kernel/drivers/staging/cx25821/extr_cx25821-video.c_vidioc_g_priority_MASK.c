
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct cx25821_fh {struct cx25821_dev* dev; } ;
struct cx25821_dev {int prio; } ;
typedef enum v4l2_priority { ____Placeholder_v4l2_priority } v4l2_priority ;


 int FUNC_0 (int *) ;

int FUNC_1(struct file *VAR_0, void *VAR_1, enum v4l2_priority *VAR_2)
{
 struct cx25821_dev *VAR_3 = ((struct cx25821_fh *)VAR_1)->dev;

 *VAR_2 = FUNC_0(&VAR_3->prio);

 return 0;
}
