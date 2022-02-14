
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
struct hexium {int cur_bw; scalar_t__ cur_std; } ;
struct file {int dummy; } ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_5__ {TYPE_1__* core_ops; } ;
struct TYPE_4__ {int (* vidioc_s_ctrl ) (struct file*,void*,struct v4l2_control*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct hexium*,int ) ;
 int FUNC_2 (struct file*,void*,struct v4l2_control*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_12, void *VAR_13, struct v4l2_control *VAR_14)
{
 struct saa7146_dev *VAR_15 = ((struct saa7146_fh *)VAR_13)->dev;
 struct hexium *VAR_16 = (struct hexium *) VAR_15->ext_priv;
 int VAR_17 = 0;

 for (VAR_17 = VAR_1 - 1; VAR_17 >= 0; VAR_17--) {
  if (VAR_6[VAR_17].id == VAR_14->id)
   break;
 }

 if (VAR_17 < 0)
  return VAR_15->ext_vv_data->core_ops->vidioc_s_ctrl(VAR_12, VAR_13, VAR_14);

 if (VAR_14->id == VAR_2)
  VAR_16->cur_bw = VAR_14->value;

 FUNC_0(("VIDIOC_S_CTRL BW:%d.\n", VAR_16->cur_bw));

 if (0 == VAR_16->cur_bw && VAR_4 == VAR_16->cur_std) {
  FUNC_1(VAR_16, VAR_9);
  return 0;
 }
 if (0 == VAR_16->cur_bw && VAR_3 == VAR_16->cur_std) {
  FUNC_1(VAR_16, VAR_7);
  return 0;
 }
 if (0 == VAR_16->cur_bw && VAR_5 == VAR_16->cur_std) {
  FUNC_1(VAR_16, VAR_11);
  return 0;
 }
 if (1 == VAR_16->cur_bw && VAR_4 == VAR_16->cur_std) {
  FUNC_1(VAR_16, VAR_10);
  return 0;
 }
 if (1 == VAR_16->cur_bw && VAR_3 == VAR_16->cur_std) {
  FUNC_1(VAR_16, VAR_8);
  return 0;
 }
 if (1 == VAR_16->cur_bw && VAR_5 == VAR_16->cur_std)

  return -VAR_0;

 return -VAR_0;
}
