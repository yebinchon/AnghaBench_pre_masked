
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int data; TYPE_1__* iface; int connected; } ;
typedef TYPE_2__ joypad_connection_t ;
typedef enum retro_rumble_effect { ____Placeholder_retro_rumble_effect } retro_rumble_effect ;
struct TYPE_4__ {int (* set_rumble ) (int ,int,int ) ;} ;


 int FUNC_0 (int ,int,int ) ;

bool FUNC_1(joypad_connection_t *VAR_0,
   unsigned VAR_1, enum retro_rumble_effect VAR_2, uint16_t VAR_3)
{
   if (!VAR_0->connected)
      return 0;
   if (!VAR_0->iface || !VAR_0->iface->set_rumble)
      return 0;

   VAR_0->iface->set_rumble(VAR_0->data, VAR_2, VAR_3);
   return 1;
}
