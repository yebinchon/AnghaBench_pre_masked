
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_camera_link {int (* free_bus ) (struct soc_camera_link*) ;} ;
struct TYPE_2__ {int parent; } ;
struct soc_camera_device {int vdev; TYPE_1__ dev; } ;


 int FUNC_0 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_1 (struct soc_camera_link*) ;
 struct soc_camera_link* FUNC_2 (struct soc_camera_device*) ;

__attribute__((used)) static void FUNC_3(struct soc_camera_device *VAR_0)
{
 struct soc_camera_link *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_0->dev, "Video removed: %p, %p\n",
  VAR_0->dev.parent, VAR_0->vdev);
 if (VAR_1->free_bus)
  VAR_1->free_bus(VAR_1);
}
