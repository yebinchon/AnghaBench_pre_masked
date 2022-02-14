
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct file {int f_flags; } ;
struct cx231xx_fh {int vb_vidq; struct cx231xx* dev; } ;
struct cx231xx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx231xx*) ;
 int FUNC_1 (int *,struct v4l2_buffer*,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2, struct v4l2_buffer *VAR_3)
{
 struct cx231xx_fh *VAR_4 = VAR_2;
 struct cx231xx *VAR_5 = VAR_4->dev;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_1(&VAR_4->vb_vidq, VAR_3, VAR_1->f_flags & VAR_0);
}
