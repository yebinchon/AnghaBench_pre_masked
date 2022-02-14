
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wiiu_hid_t ;
typedef int uint16_t ;
struct TYPE_5__ {int data; TYPE_1__* iface; } ;
typedef TYPE_2__ joypad_connection_t ;
typedef enum retro_rumble_effect { ____Placeholder_retro_rumble_effect } retro_rumble_effect ;
struct TYPE_4__ {int (* set_rumble ) (int ,int,int ) ;} ;


 TYPE_2__* FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static bool FUNC_2(void *VAR_0, unsigned VAR_1,
      enum retro_rumble_effect VAR_2, uint16_t VAR_3)
{
   joypad_connection_t *VAR_4 = FUNC_0((wiiu_hid_t *)VAR_0, VAR_1);

   if (!VAR_4)
      return 0;

   VAR_4->iface->set_rumble(VAR_4->data, VAR_2, VAR_3);
   return 0;
}
