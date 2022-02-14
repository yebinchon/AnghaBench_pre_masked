
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct cx231xx_fh* private_data; } ;
struct cx231xx_fh {scalar_t__ type; int vb_vidq; struct cx231xx* dev; } ;
struct cx231xx {int dummy; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct cx231xx*) ;
 int FUNC_1 (struct cx231xx_fh*) ;
 scalar_t__ FUNC_2 (int) ;
 unsigned int FUNC_3 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_4(struct file *VAR_3, poll_table *VAR_4)
{
 struct cx231xx_fh *VAR_5 = VAR_3->private_data;
 struct cx231xx *VAR_6 = VAR_5->dev;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_5);

 if (FUNC_2(VAR_7 < 0))
  return VAR_0;

 if ((VAR_2 == VAR_5->type) ||
     (VAR_1 == VAR_5->type))
  return FUNC_3(VAR_3, &VAR_5->vb_vidq, VAR_4);
 else
  return VAR_0;
}
