
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct file {int f_flags; } ;
struct cx23885_fh {int mpegq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct v4l2_buffer*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2, struct v4l2_buffer *VAR_3)
{
 struct cx23885_fh *VAR_4 = VAR_2;

 return FUNC_0(&VAR_4->mpegq, VAR_3, VAR_1->f_flags & VAR_0);
}
