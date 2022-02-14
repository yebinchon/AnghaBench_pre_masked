
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap24xxcam_fh {int vbq; struct omap24xxcam_device* cam; } ;
struct omap24xxcam_device {int mutex; TYPE_1__* dev; struct file* streaming; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct omap24xxcam_device*) ;
 int FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_1, void *VAR_2, enum v4l2_buf_type VAR_3)
{
 struct omap24xxcam_fh *VAR_4 = VAR_2;
 struct omap24xxcam_device *VAR_5 = VAR_4->cam;
 int VAR_6;

 FUNC_1(&VAR_5->mutex);
 if (VAR_5->streaming) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_5->dev, "vidioc_int_g_ifparm failed\n");
  goto out;
 }

 VAR_6 = FUNC_5(&VAR_4->vbq);
 if (!VAR_6) {
  VAR_5->streaming = VAR_1;
  FUNC_4(&VAR_5->dev->kobj, ((void*)0), "streaming");
 }

out:
 FUNC_2(&VAR_5->mutex);

 return VAR_6;
}
