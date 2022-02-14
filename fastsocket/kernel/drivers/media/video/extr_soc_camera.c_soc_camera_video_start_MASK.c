
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int parent; } ;
struct soc_camera_device {TYPE_3__* vdev; TYPE_4__ dev; TYPE_1__* ops; } ;
struct device_type {int dummy; } ;
struct TYPE_6__ {struct device_type* type; } ;
struct TYPE_7__ {TYPE_2__ dev; } ;
struct TYPE_5__ {int set_bus_param; int query_bus_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,char*,int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct soc_camera_device *VAR_3)
{
 struct device_type *VAR_4 = VAR_3->vdev->dev.type;
 int VAR_5;

 if (!VAR_3->dev.parent)
  return -VAR_1;

 if (!VAR_3->ops ||
     !VAR_3->ops->query_bus_param ||
     !VAR_3->ops->set_bus_param)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_3->vdev, VAR_2, -1);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_3->dev, "video_register_device failed: %d\n", VAR_5);
  return VAR_5;
 }


 VAR_3->vdev->dev.type = VAR_4;

 return 0;
}
