
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int data; TYPE_1__* iface; } ;
typedef TYPE_2__ joypad_connection_t ;
struct TYPE_4__ {char const* (* get_name ) (int ) ;} ;


 char const* FUNC_0 (int ) ;

const char* FUNC_1(joypad_connection_t *VAR_0, unsigned VAR_1)
{
   if (!VAR_0 || !VAR_0->iface || !VAR_0->iface->get_name)
      return ((void*)0);
   return VAR_0->iface->get_name(VAR_0->data);
}
