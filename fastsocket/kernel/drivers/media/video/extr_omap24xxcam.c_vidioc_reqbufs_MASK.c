
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_requestbuffers {scalar_t__ memory; } ;
struct omap24xxcam_fh {int vbq; struct omap24xxcam_device* cam; } ;
struct omap24xxcam_device {int mutex; scalar_t__ streaming; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct v4l2_requestbuffers*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, void *VAR_3,
     struct v4l2_requestbuffers *VAR_4)
{
 struct omap24xxcam_fh *VAR_5 = VAR_3;
 struct omap24xxcam_device *VAR_6 = VAR_5->cam;
 int VAR_7;

 FUNC_0(&VAR_6->mutex);
 if (VAR_6->streaming) {
  FUNC_1(&VAR_6->mutex);
  return -VAR_0;
 }

 FUNC_3(&VAR_5->vbq);
 FUNC_1(&VAR_6->mutex);

 VAR_7 = FUNC_4(&VAR_5->vbq, VAR_4);





 if (VAR_7 < 0 || VAR_4->memory != VAR_1)
  goto out;

 VAR_7 = FUNC_2(&VAR_5->vbq, VAR_7);
 if (VAR_7)
  FUNC_3(&VAR_5->vbq);

out:
 return VAR_7;
}
