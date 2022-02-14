
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int data; TYPE_1__* iface; } ;
typedef TYPE_2__ joypad_connection_t ;
typedef int int16_t ;
struct TYPE_4__ {int (* get_axis ) (int ,unsigned int) ;} ;


 int FUNC_0 (int ,unsigned int) ;

int16_t FUNC_1(joypad_connection_t *VAR_0,
   unsigned VAR_1, unsigned VAR_2)
{
   if (!VAR_0 || !VAR_0->iface)
      return 0;
   return VAR_0->iface->get_axis(VAR_0->data, VAR_2);
}
