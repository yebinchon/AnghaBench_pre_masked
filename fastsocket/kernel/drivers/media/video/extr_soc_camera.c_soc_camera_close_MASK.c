
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct soc_camera_link {int dummy; } ;
struct soc_camera_host {TYPE_2__* ops; } ;
struct TYPE_6__ {int parent; } ;
struct soc_camera_device {TYPE_3__ dev; struct file* streamer; TYPE_1__* vdev; int use_count; } ;
struct file {struct soc_camera_device* private_data; } ;
struct TYPE_5__ {int owner; int (* remove ) (struct soc_camera_device*) ;} ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct soc_camera_device*,struct soc_camera_link*,int ) ;
 int FUNC_5 (struct soc_camera_device*) ;
 struct soc_camera_host* FUNC_6 (int ) ;
 struct soc_camera_link* FUNC_7 (struct soc_camera_device*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_0)
{
 struct soc_camera_device *VAR_1 = VAR_0->private_data;
 struct soc_camera_host *VAR_2 = FUNC_6(VAR_1->dev.parent);

 VAR_1->use_count--;
 if (!VAR_1->use_count) {
  struct soc_camera_link *VAR_3 = FUNC_7(VAR_1);

  FUNC_3(&VAR_1->vdev->dev);
  FUNC_2(&VAR_1->vdev->dev);

  VAR_2->ops->remove(VAR_1);

  FUNC_4(VAR_1, VAR_3, 0);
 }

 if (VAR_1->streamer == VAR_0)
  VAR_1->streamer = ((void*)0);

 FUNC_1(VAR_2->ops->owner);

 FUNC_0(&VAR_1->dev, "camera device close\n");

 return 0;
}
