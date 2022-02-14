
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wiiu_hid_t ;
struct TYPE_5__ {int data; TYPE_1__* iface; } ;
typedef TYPE_2__ joypad_connection_t ;
struct TYPE_4__ {char const* (* get_name ) (int ) ;} ;


 TYPE_2__* FUNC_0 (int *,unsigned int) ;
 char const* FUNC_1 (int ) ;

__attribute__((used)) static const char *FUNC_2(void *VAR_0, unsigned VAR_1)
{
   joypad_connection_t *VAR_2 = FUNC_0((wiiu_hid_t *)VAR_0, VAR_1);

   if (!VAR_2)
      return ((void*)0);

   return VAR_2->iface->get_name(VAR_2->data);
}
