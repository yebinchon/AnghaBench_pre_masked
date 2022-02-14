
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ iface; scalar_t__ connected; } ;
typedef TYPE_1__ joypad_connection_t ;


 unsigned int VAR_0 ;

bool FUNC_0(joypad_connection_t *VAR_1, unsigned VAR_2)
{
   if ( VAR_1 && VAR_2 < VAR_0
         && VAR_1[VAR_2].connected
         && VAR_1[VAR_2].iface)
      return 1;
   return 0;
}
