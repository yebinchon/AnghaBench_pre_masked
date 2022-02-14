
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_streamparm {int dummy; } ;
struct soc_camera_host {TYPE_2__* ops; } ;
struct TYPE_3__ {int parent; } ;
struct soc_camera_device {TYPE_1__ dev; } ;
struct file {struct soc_camera_device* private_data; } ;
struct TYPE_4__ {int (* set_parm ) (struct soc_camera_device*,struct v4l2_streamparm*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct soc_camera_device*,struct v4l2_streamparm*) ;
 struct soc_camera_host* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
        struct v4l2_streamparm *VAR_3)
{
 struct soc_camera_device *VAR_4 = VAR_1->private_data;
 struct soc_camera_host *VAR_5 = FUNC_1(VAR_4->dev.parent);

 if (VAR_5->ops->set_parm)
  return VAR_5->ops->set_parm(VAR_4, VAR_3);

 return -VAR_0;
}
