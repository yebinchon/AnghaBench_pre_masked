
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct videobuf_buffer {int dummy; } ;
struct TYPE_7__ {int pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct omap24xxcam_fh {int vbq_lock; int vbq; int pix; struct omap24xxcam_device* cam; } ;
struct omap24xxcam_device {TYPE_3__* sdev; int mutex; int users; TYPE_1__* vfd; } ;
struct file {struct omap24xxcam_fh* private_data; } ;
struct TYPE_10__ {struct omap24xxcam_device* priv; } ;
struct TYPE_9__ {int minor; } ;
struct TYPE_8__ {int module; } ;
struct TYPE_6__ {int minor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct omap24xxcam_fh*) ;
 struct omap24xxcam_fh* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_5__ VAR_5 ;
 int FUNC_6 (struct omap24xxcam_device*) ;
 int FUNC_7 (struct omap24xxcam_device*) ;
 scalar_t__ FUNC_8 (struct omap24xxcam_device*) ;
 int VAR_6 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 TYPE_4__* FUNC_11 (struct file*) ;
 int FUNC_12 (int *,int *,int *,int *,int ,int ,int,struct omap24xxcam_fh*) ;
 int FUNC_13 (TYPE_3__*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_7)
{
 int VAR_8 = FUNC_11(VAR_7)->minor;
 struct omap24xxcam_device *VAR_9 = VAR_5.priv;
 struct omap24xxcam_fh *VAR_10;
 struct v4l2_format VAR_11;

 if (!VAR_9 || !VAR_9->vfd || (VAR_9->vfd->minor != VAR_8))
  return -VAR_0;

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_2);
 if (VAR_10 == ((void*)0))
  return -VAR_1;

 FUNC_4(&VAR_9->mutex);
 if (VAR_9->sdev == ((void*)0) || !FUNC_10(VAR_9->sdev->module)) {
  FUNC_5(&VAR_9->mutex);
  goto out_try_module_get;
 }

 if (FUNC_0(&VAR_9->users) == 1) {
  FUNC_6(VAR_9);
  if (FUNC_8(VAR_9)) {
   FUNC_5(&VAR_9->mutex);
   goto out_omap24xxcam_sensor_enable;
  }
 }
 FUNC_5(&VAR_9->mutex);

 VAR_10->cam = VAR_9;
 FUNC_4(&VAR_9->mutex);
 FUNC_13(VAR_9->sdev, &VAR_11);
 FUNC_5(&VAR_9->mutex);

 VAR_10->pix = VAR_11.fmt.pix;

 VAR_7->private_data = VAR_10;

 FUNC_9(&VAR_10->vbq_lock);

 FUNC_12(&VAR_10->vbq, &VAR_6, ((void*)0),
    &VAR_10->vbq_lock, VAR_3,
    VAR_4,
    sizeof(struct videobuf_buffer), VAR_10);

 return 0;

out_omap24xxcam_sensor_enable:
 FUNC_7(VAR_9);
 FUNC_3(VAR_9->sdev->module);

out_try_module_get:
 FUNC_1(VAR_10);

 return -VAR_0;
}
