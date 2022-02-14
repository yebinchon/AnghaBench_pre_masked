
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct cx8800_fh {scalar_t__ type; struct cx8800_dev* dev; } ;
struct cx8800_dev {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct cx8800_fh*) ;
 int FUNC_1 (struct cx8800_fh*) ;
 int FUNC_2 (struct cx8800_dev*,struct cx8800_fh*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4, enum v4l2_buf_type VAR_5)
{
 struct cx8800_fh *VAR_6 = VAR_4;
 struct cx8800_dev *VAR_7 = VAR_6->dev;
 int VAR_8, VAR_9;

 if ((VAR_6->type != VAR_2) &&
     (VAR_6->type != VAR_1))
  return -VAR_0;

 if (VAR_5 != VAR_6->type)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_6);
 VAR_8 = FUNC_3(FUNC_0(VAR_6));
 if (VAR_8 < 0)
  return VAR_8;
 FUNC_2(VAR_7,VAR_6,VAR_9);
 return 0;
}
