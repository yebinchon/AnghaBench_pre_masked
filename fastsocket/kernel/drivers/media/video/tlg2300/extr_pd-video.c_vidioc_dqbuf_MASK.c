
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct front_face {int q; } ;
struct file {int f_flags; struct front_face* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct v4l2_buffer*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2, struct v4l2_buffer *VAR_3)
{
 struct front_face *VAR_4 = VAR_1->private_data;
 return FUNC_0(&VAR_4->q, VAR_3, VAR_1->f_flags & VAR_0);
}
