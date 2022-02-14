
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rx_size; int rx_buffer; int handle; int state; int connected; } ;
typedef TYPE_1__ wiiu_adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(wiiu_adapter_t *VAR_3)
{
   if (!VAR_3->connected)
   {
      VAR_3->state = VAR_0;
      return;
   }

   VAR_3->state = VAR_1;
   FUNC_0(VAR_3->handle, VAR_3->rx_buffer, VAR_3->rx_size,
      VAR_2, VAR_3);
}
