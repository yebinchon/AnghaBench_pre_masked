
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; int driver_handle; TYPE_1__* driver; } ;
typedef TYPE_2__ wiiu_adapter_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_4__ {int (* handle_packet ) (int ,int *,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,TYPE_2__*,int ) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_3(uint32_t VAR_2, int32_t VAR_3,
              uint8_t *VAR_4, uint32_t VAR_5, void *VAR_6)
{
   wiiu_adapter_t *VAR_7 = (wiiu_adapter_t *)VAR_6;
   if (!VAR_7)
   {
      FUNC_0("read_loop_callback: bad userdata\n");
      return;
   }

   if (VAR_3 < 0)
   {
      FUNC_1("async read failed", VAR_7, VAR_3);
   }

   if (VAR_7->state == VAR_0)
   {
      VAR_7->state = VAR_1;

      if (VAR_3 == 0)
      {
         VAR_7->driver->handle_packet(VAR_7->driver_handle,
            VAR_4, VAR_5);
      }
   }
}
