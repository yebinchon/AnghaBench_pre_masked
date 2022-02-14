
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* driver; int * driver_handle; struct TYPE_6__* tx_buffer; struct TYPE_6__* rx_buffer; } ;
typedef TYPE_2__ wiiu_adapter_t ;
struct TYPE_5__ {int (* free ) (int *) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(wiiu_adapter_t *VAR_0)
{
   if (!VAR_0)
      return;

   if (VAR_0->rx_buffer)
   {
      FUNC_0(VAR_0->rx_buffer);
      VAR_0->rx_buffer = ((void*)0);
   }
   if (VAR_0->tx_buffer)
   {
      FUNC_0(VAR_0->tx_buffer);
      VAR_0->tx_buffer = ((void*)0);
   }
   if (VAR_0->driver && VAR_0->driver_handle) {
      VAR_0->driver->free(VAR_0->driver_handle);
      VAR_0->driver_handle = ((void*)0);
      VAR_0->driver = ((void*)0);
   }

   FUNC_0(VAR_0);
}
