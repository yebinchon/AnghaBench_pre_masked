
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct soc_camera_link {int regulators; int num_regulators; int (* del_device ) (struct soc_camera_link*) ;scalar_t__ board_info; } ;
struct soc_camera_device {struct video_device* vdev; } ;
struct device_driver {int owner; } ;
struct device {int parent; } ;
struct TYPE_2__ {struct device_driver* driver; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct soc_camera_device*) ;
 int FUNC_4 (struct soc_camera_device*) ;
 int FUNC_5 (struct soc_camera_link*) ;
 TYPE_1__* FUNC_6 (struct soc_camera_device*) ;
 struct soc_camera_device* FUNC_7 (struct device*) ;
 struct soc_camera_link* FUNC_8 (struct soc_camera_device*) ;
 int FUNC_9 (struct video_device*) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_0)
{
 struct soc_camera_device *VAR_1 = FUNC_7(VAR_0);
 struct soc_camera_link *VAR_2 = FUNC_8(VAR_1);
 struct video_device *VAR_3 = VAR_1->vdev;

 FUNC_0(!VAR_0->parent);

 if (VAR_3) {
  FUNC_9(VAR_3);
  VAR_1->vdev = ((void*)0);
 }

 if (VAR_2->board_info) {
  FUNC_3(VAR_1);
 } else {
  struct device_driver *VAR_4 = FUNC_6(VAR_1) ?
   FUNC_6(VAR_1)->driver : ((void*)0);
  if (VAR_4) {
   VAR_2->del_device(VAR_2);
   FUNC_1(VAR_4->owner);
  }
 }
 FUNC_4(VAR_1);

 FUNC_2(VAR_2->num_regulators, VAR_2->regulators);

 return 0;
}
