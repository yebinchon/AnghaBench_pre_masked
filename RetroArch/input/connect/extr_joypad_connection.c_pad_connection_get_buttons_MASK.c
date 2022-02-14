
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int data; TYPE_1__* iface; } ;
typedef TYPE_2__ joypad_connection_t ;
typedef int input_bits_t ;
struct TYPE_4__ {int (* get_buttons ) (int ,int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(joypad_connection_t *VAR_0,
      unsigned VAR_1, input_bits_t *VAR_2)
{
 if (VAR_0 && VAR_0->iface)
  VAR_0->iface->get_buttons(VAR_0->data, VAR_2);
   else
  FUNC_0( VAR_2 );
}
