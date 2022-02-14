
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct cx231xx_fh* private_data; } ;
struct cx231xx_fh {int vidq; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, enum v4l2_buf_type VAR_2)
{
 struct cx231xx_fh *VAR_3 = VAR_0->private_data;

 return FUNC_0(&VAR_3->vidq);
}
