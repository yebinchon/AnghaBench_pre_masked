
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_rect {scalar_t__ width; scalar_t__ height; int top; int left; } ;
struct v4l2_crop {scalar_t__ type; struct v4l2_rect c; } ;
struct soc_camera_host {TYPE_2__* ops; } ;
struct TYPE_7__ {int parent; } ;
struct TYPE_5__ {scalar_t__* bufs; } ;
struct soc_camera_device {TYPE_3__ dev; TYPE_1__ vb_vidq; } ;
struct file {struct soc_camera_device* private_data; } ;
struct TYPE_6__ {int (* get_crop ) (struct soc_camera_device*,struct v4l2_crop*) ;int (* set_crop ) (struct soc_camera_device*,struct v4l2_crop*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,char*,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (struct soc_camera_device*,struct v4l2_crop*) ;
 int FUNC_3 (struct soc_camera_device*,struct v4l2_crop*) ;
 struct soc_camera_host* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, void *VAR_4,
        struct v4l2_crop *VAR_5)
{
 struct soc_camera_device *VAR_6 = VAR_3->private_data;
 struct soc_camera_host *VAR_7 = FUNC_4(VAR_6->dev.parent);
 struct v4l2_rect *VAR_8 = &VAR_5->c;
 struct v4l2_crop VAR_9;
 int VAR_10;

 if (VAR_5->type != VAR_2)
  return -VAR_1;

 FUNC_0(&VAR_6->dev, "S_CROP(%ux%u@%u:%u)\n",
  VAR_8->width, VAR_8->height, VAR_8->left, VAR_8->top);


 VAR_10 = VAR_7->ops->get_crop(VAR_6, &VAR_9);


 if (VAR_10 < 0) {
  FUNC_1(&VAR_6->dev,
   "S_CROP denied: getting current crop failed\n");
 } else if (VAR_6->vb_vidq.bufs[0] &&
     (VAR_5->c.width != VAR_9.c.width ||
      VAR_5->c.height != VAR_9.c.height)) {
  FUNC_1(&VAR_6->dev,
   "S_CROP denied: queue initialised and sizes differ\n");
  VAR_10 = -VAR_0;
 } else {
  VAR_10 = VAR_7->ops->set_crop(VAR_6, VAR_5);
 }

 return VAR_10;
}
