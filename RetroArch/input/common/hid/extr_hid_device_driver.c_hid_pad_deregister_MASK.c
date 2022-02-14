
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int connected; TYPE_1__* iface; int * data; } ;
typedef TYPE_2__ joypad_connection_t ;
struct TYPE_4__ {int (* deinit ) (int *) ;} ;


 int FUNC_0 (int *) ;

void FUNC_1(joypad_connection_t *VAR_0)
{
   if(!VAR_0)
      return;

   if(VAR_0->data) {
      VAR_0->iface->deinit(VAR_0->data);
      VAR_0->data = ((void*)0);
   }

   VAR_0->iface = ((void*)0);
   VAR_0->connected = 0;
}
