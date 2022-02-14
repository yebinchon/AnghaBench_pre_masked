
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_queryctrl {scalar_t__ id; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {TYPE_2__* ext_vv_data; } ;
struct file {int dummy; } ;
struct TYPE_4__ {TYPE_1__* core_ops; } ;
struct TYPE_3__ {int (* vidioc_queryctrl ) (struct file*,void*,struct v4l2_queryctrl*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct v4l2_queryctrl* VAR_1 ;
 int FUNC_1 (struct file*,void*,struct v4l2_queryctrl*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, struct v4l2_queryctrl *VAR_4)
{
 struct saa7146_dev *VAR_5 = ((struct saa7146_fh *)VAR_3)->dev;
 int VAR_6;

 for (VAR_6 = VAR_0 - 1; VAR_6 >= 0; VAR_6--) {
  if (VAR_1[VAR_6].id == VAR_4->id) {
   *VAR_4 = VAR_1[VAR_6];
   FUNC_0(("VIDIOC_QUERYCTRL %d.\n", VAR_4->id));
   return 0;
  }
 }
 return VAR_5->ext_vv_data->core_ops->vidioc_queryctrl(VAR_2, VAR_3, VAR_4);
}
