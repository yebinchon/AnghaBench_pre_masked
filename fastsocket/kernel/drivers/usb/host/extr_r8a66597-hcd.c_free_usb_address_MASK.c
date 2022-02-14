
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r8a66597_device {int address; int device_list; TYPE_1__* udev; int state; } ;
struct r8a66597 {int address_map; int max_root_hub; TYPE_2__* root_hub; } ;
struct TYPE_4__ {struct r8a66597_device* dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct r8a66597_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct r8a66597 *VAR_1,
        struct r8a66597_device *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return;

 FUNC_0("free_addr: addr=%d", VAR_2->address);

 VAR_2->state = VAR_0;
 VAR_1->address_map &= ~(1 << VAR_2->address);
 VAR_2->address = 0;
 FUNC_1(&VAR_2->udev->dev, ((void*)0));
 FUNC_3(&VAR_2->device_list);
 FUNC_2(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_1->max_root_hub; VAR_3++) {
  if (VAR_1->root_hub[VAR_3].dev == VAR_2) {
   VAR_1->root_hub[VAR_3].dev = ((void*)0);
   break;
  }
 }
}
