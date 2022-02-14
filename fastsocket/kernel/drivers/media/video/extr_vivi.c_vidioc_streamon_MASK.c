
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivi_fh {scalar_t__ type; int vb_vidq; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3, enum v4l2_buf_type VAR_4)
{
 struct vivi_fh *VAR_5 = VAR_3;

 if (VAR_5->type != VAR_1)
  return -VAR_0;
 if (VAR_4 != VAR_5->type)
  return -VAR_0;

 return FUNC_0(&VAR_5->vb_vidq);
}
