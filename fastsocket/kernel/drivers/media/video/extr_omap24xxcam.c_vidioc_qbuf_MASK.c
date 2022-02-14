
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct omap24xxcam_fh {int vbq; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, struct v4l2_buffer *VAR_2)
{
 struct omap24xxcam_fh *VAR_3 = VAR_1;

 return FUNC_0(&VAR_3->vbq, VAR_2);
}
