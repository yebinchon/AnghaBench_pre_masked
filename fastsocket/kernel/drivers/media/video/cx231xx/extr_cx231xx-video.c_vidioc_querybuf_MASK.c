
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct file {int dummy; } ;
struct cx231xx_fh {int vb_vidq; struct cx231xx* dev; } ;
struct cx231xx {int dummy; } ;


 int FUNC_0 (struct cx231xx*) ;
 int FUNC_1 (int *,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1, struct v4l2_buffer *VAR_2)
{
 struct cx231xx_fh *VAR_3 = VAR_1;
 struct cx231xx *VAR_4 = VAR_3->dev;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_1(&VAR_3->vb_vidq, VAR_2);
}
