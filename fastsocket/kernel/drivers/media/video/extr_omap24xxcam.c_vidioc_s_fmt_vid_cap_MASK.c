
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct TYPE_4__ {int vb_lock; } ;
struct omap24xxcam_fh {TYPE_2__ vbq; int pix; struct omap24xxcam_device* cam; } ;
struct omap24xxcam_device {int mutex; int sdev; scalar_t__ streaming; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_format*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_4 (int ,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_1, void *VAR_2,
    struct v4l2_format *VAR_3)
{
 struct omap24xxcam_fh *VAR_4 = VAR_2;
 struct omap24xxcam_device *VAR_5 = VAR_4->cam;
 int VAR_6;

 FUNC_1(&VAR_5->mutex);
 if (VAR_5->streaming) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_6 = FUNC_4(VAR_5->sdev, VAR_3);

out:
 FUNC_2(&VAR_5->mutex);

 if (!VAR_6) {
  FUNC_1(&VAR_4->vbq.vb_lock);
  VAR_4->pix = VAR_3->fmt.pix;
  FUNC_2(&VAR_4->vbq.vb_lock);
 }

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 FUNC_3(VAR_1, VAR_2, VAR_3);

 return VAR_6;
}
