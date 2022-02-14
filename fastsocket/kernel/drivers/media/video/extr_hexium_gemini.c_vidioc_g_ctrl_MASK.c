
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
struct hexium {int cur_bw; } ;
struct file {int dummy; } ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_5__ {TYPE_1__* core_ops; } ;
struct TYPE_4__ {int (* vidioc_g_ctrl ) (struct file*,void*,struct v4l2_control*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (struct file*,void*,struct v4l2_control*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5, struct v4l2_control *VAR_6)
{
 struct saa7146_dev *VAR_7 = ((struct saa7146_fh *)VAR_5)->dev;
 struct hexium *VAR_8 = (struct hexium *) VAR_7->ext_priv;
 int VAR_9;

 for (VAR_9 = VAR_1 - 1; VAR_9 >= 0; VAR_9--) {
  if (VAR_3[VAR_9].id == VAR_6->id)
   break;
 }

 if (VAR_9 < 0)
  return VAR_7->ext_vv_data->core_ops->vidioc_g_ctrl(VAR_4, VAR_5, VAR_6);

 if (VAR_6->id == VAR_2) {
  VAR_6->value = VAR_8->cur_bw;
  FUNC_0(("VIDIOC_G_CTRL BW:%d.\n", VAR_6->value));
  return 0;
 }
 return -VAR_0;
}
