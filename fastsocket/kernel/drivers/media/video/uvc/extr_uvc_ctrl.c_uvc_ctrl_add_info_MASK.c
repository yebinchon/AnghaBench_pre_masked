
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uvc_device {TYPE_1__* udev; } ;
struct uvc_control_info {int dummy; } ;
struct TYPE_6__ {int size; int selector; int entity; int mappings; } ;
struct uvc_control {int initialized; int * uvc_data; TYPE_2__* entity; TYPE_3__ info; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_4__ {int devpath; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_3__*,struct uvc_control_info const*,int) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct uvc_device *VAR_4, struct uvc_control *VAR_5,
 const struct uvc_control_info *VAR_6)
{
 int VAR_7 = 0;

 FUNC_3(&VAR_5->info, VAR_6, sizeof(*VAR_6));
 FUNC_0(&VAR_5->info.mappings);


 VAR_5->uvc_data = FUNC_2(VAR_5->info.size * VAR_2 + 1,
     VAR_1);
 if (VAR_5->uvc_data == ((void*)0)) {
  VAR_7 = -VAR_0;
  goto done;
 }

 VAR_5->initialized = 1;

 FUNC_4(VAR_3, "Added control %pUl/%u to device %s "
  "entity %u\n", VAR_5->info.entity, VAR_5->info.selector,
  VAR_4->udev->devpath, VAR_5->entity->id);

done:
 if (VAR_7 < 0)
  FUNC_1(VAR_5->uvc_data);
 return VAR_7;
}
