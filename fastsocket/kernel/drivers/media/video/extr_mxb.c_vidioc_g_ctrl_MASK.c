
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_control {scalar_t__ id; int value; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {TYPE_2__* ext_vv_data; scalar_t__ ext_priv; } ;
struct mxb {int cur_mute; } ;
struct file {int dummy; } ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_5__ {TYPE_1__* core_ops; } ;
struct TYPE_4__ {int (* vidioc_g_ctrl ) (struct file*,void*,struct v4l2_control*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (struct file*,void*,struct v4l2_control*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4, struct v4l2_control *VAR_5)
{
 struct saa7146_dev *VAR_6 = ((struct saa7146_fh *)VAR_4)->dev;
 struct mxb *VAR_7 = (struct mxb *)VAR_6->ext_priv;
 int VAR_8;

 for (VAR_8 = VAR_0 - 1; VAR_8 >= 0; VAR_8--) {
  if (VAR_2[VAR_8].id == VAR_5->id)
   break;
 }

 if (VAR_8 < 0)
  return VAR_6->ext_vv_data->core_ops->vidioc_g_ctrl(VAR_3, VAR_4, VAR_5);

 if (VAR_5->id == VAR_1) {
  VAR_5->value = VAR_7->cur_mute;
  FUNC_0(("VIDIOC_G_CTRL V4L2_CID_AUDIO_MUTE:%d.\n", VAR_5->value));
  return 0;
 }

 FUNC_1(("VIDIOC_G_CTRL V4L2_CID_AUDIO_MUTE:%d.\n", VAR_5->value));
 return 0;
}
