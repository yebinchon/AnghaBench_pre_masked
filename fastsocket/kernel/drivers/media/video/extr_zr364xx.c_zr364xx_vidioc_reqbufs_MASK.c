
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zr364xx_camera {int vb_vidq; } ;
struct v4l2_requestbuffers {int dummy; } ;
struct file {int dummy; } ;


 struct zr364xx_camera* FUNC_0 (struct file*) ;
 int FUNC_1 (int *,struct v4l2_requestbuffers*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
     struct v4l2_requestbuffers *VAR_2)
{
 int VAR_3;
 struct zr364xx_camera *VAR_4 = FUNC_0(VAR_0);
 VAR_3 = FUNC_1(&VAR_4->vb_vidq, VAR_2);
 return VAR_3;
}
