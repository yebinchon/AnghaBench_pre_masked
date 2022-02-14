
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ data; TYPE_1__* iface; int connected; } ;
typedef TYPE_2__ joypad_connection_t ;
struct TYPE_4__ {int (* packet_handler ) (scalar_t__,int *,int ) ;} ;


 int FUNC_0 (scalar_t__,int *,int ) ;

void FUNC_1(joypad_connection_t *VAR_0, uint32_t VAR_1,
      uint8_t* VAR_2, uint32_t VAR_3)
{
   if (!VAR_0 || !VAR_0->connected)
       return;
   if (VAR_0->iface && VAR_0->data && VAR_0->iface->packet_handler)
      VAR_0->iface->packet_handler(VAR_0->data, VAR_2, VAR_3);
}
