
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivi_fh {int vb_vidq; } ;
struct v4l2_requestbuffers {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *,struct v4l2_requestbuffers*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
     struct v4l2_requestbuffers *VAR_2)
{
 struct vivi_fh *VAR_3 = VAR_1;

 return (FUNC_0(&VAR_3->vb_vidq, VAR_2));
}
