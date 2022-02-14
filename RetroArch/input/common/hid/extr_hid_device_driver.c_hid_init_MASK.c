
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int input_device_driver_t ;
struct TYPE_6__ {int (* free ) (int *) ;int * (* init ) () ;} ;
typedef TYPE_1__ hid_driver_t ;
struct TYPE_7__ {int * pad_driver; TYPE_1__* os_driver; int * os_driver_data; } ;
typedef TYPE_2__ hid_driver_instance_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_2__*,unsigned int) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;

bool FUNC_4(hid_driver_instance_t *VAR_1,
              hid_driver_t *VAR_2,
              input_device_driver_t *VAR_3,
              unsigned VAR_4)
{
   FUNC_0("[hid]: initializing instance with %d pad slots\n", VAR_4);
   if(!VAR_1 || !VAR_2 || !VAR_3 || VAR_4 > VAR_0)
      return 0;

   FUNC_0("[hid]: initializing HID subsystem driver...\n");
   VAR_1->os_driver_data = VAR_2->init();
   if(!VAR_1->os_driver_data)
      return 0;

   if(!FUNC_1(VAR_1, VAR_4))
   {
      VAR_2->free(VAR_1->os_driver_data);
      VAR_1->os_driver_data = ((void*)0);
      return 0;
   }

   VAR_1->os_driver = VAR_2;
   VAR_1->pad_driver = VAR_3;

   FUNC_0("[hid]: instance initialization complete.\n");

   return 1;
}
