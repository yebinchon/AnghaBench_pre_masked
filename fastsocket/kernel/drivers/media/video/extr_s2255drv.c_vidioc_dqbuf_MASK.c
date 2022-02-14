
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct s2255_fh {int vb_vidq; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct v4l2_buffer*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2, struct v4l2_buffer *VAR_3)
{
 int VAR_4;
 struct s2255_fh *VAR_5 = VAR_2;
 VAR_4 = FUNC_0(&VAR_5->vb_vidq, VAR_3, VAR_1->f_flags & VAR_0);
 return VAR_4;
}
