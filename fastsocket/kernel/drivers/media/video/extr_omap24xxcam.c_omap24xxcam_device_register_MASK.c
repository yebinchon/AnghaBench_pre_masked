
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct video_device {int minor; int * ioctl_ops; int * fops; int name; int parent; int release; } ;
struct TYPE_6__ {TYPE_2__* slave; } ;
struct v4l2_int_device {TYPE_3__ u; } ;
struct omap24xxcam_device {int dev; struct video_device* vfd; struct v4l2_int_device* sdev; } ;
struct TYPE_5__ {TYPE_1__* master; } ;
struct TYPE_4__ {struct omap24xxcam_device* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (struct v4l2_int_device*) ;
 int VAR_5 ;
 int FUNC_4 (struct omap24xxcam_device*) ;
 int VAR_6 ;
 int FUNC_5 (struct omap24xxcam_device*) ;
 int FUNC_6 (struct omap24xxcam_device*) ;
 int FUNC_7 (int ,int ,int) ;
 struct video_device* FUNC_8 () ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (struct video_device*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct v4l2_int_device *VAR_9)
{
 struct omap24xxcam_device *VAR_10 = VAR_9->u.slave->master->priv;
 struct video_device *VAR_11;
 int VAR_12;


 if (VAR_10->sdev)
  return -VAR_1;

 VAR_10->sdev = VAR_9;

 if (FUNC_2(VAR_10->dev, &VAR_4) != 0) {
  FUNC_0(VAR_10->dev, "could not register sysfs entry\n");
  VAR_12 = -VAR_1;
  goto err;
 }


 VAR_11 = VAR_10->vfd = FUNC_8();
 if (!VAR_11) {
  FUNC_0(VAR_10->dev, "could not allocate video device struct\n");
  VAR_12 = -VAR_2;
  goto err;
 }
 VAR_11->release = VAR_7;

 VAR_11->parent = VAR_10->dev;

 FUNC_7(VAR_11->name, VAR_0, sizeof(VAR_11->name));
 VAR_11->fops = &VAR_5;
 VAR_11->minor = -1;
 VAR_11->ioctl_ops = &VAR_6;

 FUNC_4(VAR_10);

 VAR_12 = FUNC_6(VAR_10);
 if (VAR_12)
  goto err;

 if (FUNC_9(VAR_11, VAR_3, VAR_8) < 0) {
  FUNC_0(VAR_10->dev, "could not register V4L device\n");
  VAR_11->minor = -1;
  VAR_12 = -VAR_1;
  goto err;
 }

 FUNC_5(VAR_10);

 FUNC_1(VAR_10->dev, "registered device video%d\n", VAR_11->minor);

 return 0;

err:
 FUNC_3(VAR_9);

 return VAR_12;
}
