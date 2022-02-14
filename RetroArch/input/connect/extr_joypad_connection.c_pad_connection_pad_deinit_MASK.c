
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int connected; TYPE_1__* iface; int data; } ;
typedef TYPE_2__ joypad_connection_t ;
struct TYPE_4__ {int (* deinit ) (int ) ;int (* set_rumble ) (int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(joypad_connection_t *VAR_2, uint32_t VAR_3)
{
   if (!VAR_2 || !VAR_2->connected)
       return;

   if (VAR_2->iface)
   {
      VAR_2->iface->set_rumble(VAR_2->data, VAR_0, 0);
      VAR_2->iface->set_rumble(VAR_2->data, VAR_1, 0);

      if (VAR_2->iface->deinit)
         VAR_2->iface->deinit(VAR_2->data);
   }

   VAR_2->iface = ((void*)0);
   VAR_2->connected = 0;
}
