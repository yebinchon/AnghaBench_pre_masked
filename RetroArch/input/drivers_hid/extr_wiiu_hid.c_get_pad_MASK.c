
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wiiu_hid_t ;
struct TYPE_4__ {int data; int iface; int connected; } ;
typedef TYPE_1__ joypad_connection_t ;


 TYPE_1__* FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static joypad_connection_t *FUNC_2(wiiu_hid_t *VAR_0, unsigned VAR_1)
{
   if (!FUNC_1(VAR_0, VAR_1))
      return ((void*)0);

   joypad_connection_t *VAR_2 = FUNC_0(VAR_1);
   if (!VAR_2 || !VAR_2->connected || !VAR_2->iface || !VAR_2->data)
      return ((void*)0);

   return VAR_2;
}
