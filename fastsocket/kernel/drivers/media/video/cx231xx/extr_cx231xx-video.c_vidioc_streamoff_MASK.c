
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct cx231xx_fh {scalar_t__ type; int vb_vidq; struct cx231xx* dev; } ;
struct cx231xx {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct cx231xx*) ;
 int FUNC_1 (struct cx231xx*,int ,int ,int ) ;
 int FUNC_2 (struct cx231xx_fh*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, void *VAR_6,
       enum v4l2_buf_type VAR_7)
{
 struct cx231xx_fh *VAR_8 = VAR_6;
 struct cx231xx *VAR_9 = VAR_8->dev;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 if ((VAR_8->type != VAR_2) &&
     (VAR_8->type != VAR_1))
  return -VAR_0;
 if (VAR_7 != VAR_8->type)
  return -VAR_0;

 FUNC_1(VAR_9, VAR_4, VAR_3, 0);

 FUNC_3(&VAR_8->vb_vidq);
 FUNC_2(VAR_8);

 return 0;
}
