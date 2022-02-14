
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct camera_data {TYPE_1__* vdev; int open_count; } ;
struct TYPE_2__ {int num; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct camera_data *VAR_0)
{
 if (!VAR_0->open_count) {
  FUNC_1(VAR_0->vdev);
 } else {
  FUNC_0("/dev/video%d removed while open, "
      "deferring video_unregister_device\n",
      VAR_0->vdev->num);
 }
}
