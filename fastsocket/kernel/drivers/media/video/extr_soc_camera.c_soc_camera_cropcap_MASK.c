
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_cropcap {int dummy; } ;
struct soc_camera_host {TYPE_2__* ops; } ;
struct TYPE_3__ {int parent; } ;
struct soc_camera_device {TYPE_1__ dev; } ;
struct file {struct soc_camera_device* private_data; } ;
struct TYPE_4__ {int (* cropcap ) (struct soc_camera_device*,struct v4l2_cropcap*) ;} ;


 int FUNC_0 (struct soc_camera_device*,struct v4l2_cropcap*) ;
 struct soc_camera_host* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
         struct v4l2_cropcap *VAR_2)
{
 struct soc_camera_device *VAR_3 = VAR_0->private_data;
 struct soc_camera_host *VAR_4 = FUNC_1(VAR_3->dev.parent);

 return VAR_4->ops->cropcap(VAR_3, VAR_2);
}
