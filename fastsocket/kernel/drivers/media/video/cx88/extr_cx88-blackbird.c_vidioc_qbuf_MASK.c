
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct file {int dummy; } ;
struct cx8802_fh {int mpegq; } ;


 int FUNC_0 (int *,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_1 (struct file *VAR_0, void *VAR_1, struct v4l2_buffer *VAR_2)
{
 struct cx8802_fh *VAR_3 = VAR_1;
 return (FUNC_0(&VAR_3->mpegq, VAR_2));
}
