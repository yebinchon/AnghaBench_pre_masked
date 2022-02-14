
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pad_list; scalar_t__ os_driver_data; TYPE_1__* os_driver; } ;
typedef TYPE_2__ hid_driver_instance_t ;
struct TYPE_5__ {int (* free ) (scalar_t__) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(hid_driver_instance_t *VAR_0)
{
   if(!VAR_0)
      return;

   FUNC_0("[hid]: destroying instance\n");

   if(VAR_0->os_driver && VAR_0->os_driver_data)
   {
      FUNC_0("[hid]: tearing down HID subsystem driver...\n");
      VAR_0->os_driver->free(VAR_0->os_driver_data);
   }

   FUNC_0("[hid]: destroying pad data...\n");
   FUNC_2(VAR_0->pad_list);

   FUNC_0("[hid]: wiping instance data...\n");
   FUNC_1(VAR_0, 0, sizeof(hid_driver_instance_t));
}
