
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct cx8800_fh {scalar_t__ type; struct cx8800_dev* dev; } ;
struct cx8800_dev {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct cx8800_fh*) ;
 int FUNC_1 (struct cx8800_fh*) ;
 int FUNC_2 (struct cx8800_dev*,struct cx8800_fh*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4, void *VAR_5, enum v4l2_buf_type VAR_6)
{
 struct cx8800_fh *VAR_7 = VAR_5;
 struct cx8800_dev *VAR_8 = VAR_7->dev;



 if (FUNC_3((VAR_7->type != VAR_3) &&
       (VAR_7->type != VAR_2)))
  return -VAR_1;

 if (FUNC_3(VAR_6 != VAR_7->type))
  return -VAR_1;

 if (FUNC_3(!FUNC_2(VAR_8,VAR_7,FUNC_1(VAR_7))))
  return -VAR_0;
 return FUNC_4(FUNC_0(VAR_7));
}
