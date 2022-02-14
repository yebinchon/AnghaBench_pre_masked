
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* driver; int * driver_handle; } ;
typedef TYPE_2__ wiiu_adapter_t ;
typedef int uint8_t ;
struct TYPE_5__ {int name; int * (* init ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int * FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static uint8_t FUNC_2(wiiu_adapter_t *VAR_2)
{
   VAR_2->driver_handle = VAR_2->driver->init(VAR_2);
   if (VAR_2->driver_handle == ((void*)0))
   {
     FUNC_0("[hid]: Failed to initialize driver: %s\n",
        VAR_2->driver->name);
     return VAR_0;
   }

   return VAR_1;
}
