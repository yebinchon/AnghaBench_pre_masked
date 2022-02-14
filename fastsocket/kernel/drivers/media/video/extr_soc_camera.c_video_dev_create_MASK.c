
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {void* tvnorms; int release; int * ioctl_ops; int * fops; void* current_norm; TYPE_1__* parent; int name; } ;
struct soc_camera_host {int drv_name; } ;
struct TYPE_2__ {int parent; } ;
struct soc_camera_device {struct video_device* vdev; TYPE_1__ dev; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 struct soc_camera_host* FUNC_1 (int ) ;
 struct video_device* FUNC_2 () ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct soc_camera_device *VAR_5)
{
 struct soc_camera_host *VAR_6 = FUNC_1(VAR_5->dev.parent);
 struct video_device *VAR_7 = FUNC_2();

 if (!VAR_7)
  return -VAR_0;

 FUNC_0(VAR_7->name, VAR_6->drv_name, sizeof(VAR_7->name));

 VAR_7->parent = &VAR_5->dev;
 VAR_7->current_norm = VAR_1;
 VAR_7->fops = &VAR_2;
 VAR_7->ioctl_ops = &VAR_3;
 VAR_7->release = VAR_4;
 VAR_7->tvnorms = VAR_1;

 VAR_5->vdev = VAR_7;

 return 0;
}
