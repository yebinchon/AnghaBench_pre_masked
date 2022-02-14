
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int connected; int * data; int * iface; } ;
typedef TYPE_1__ joypad_connection_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int,int) ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;

joypad_connection_t *FUNC_3(unsigned VAR_1)
{
   unsigned VAR_2;
   joypad_connection_t *VAR_3;

   if(VAR_1 > VAR_0)
   {
     FUNC_0("[joypad] invalid number of pads requested (%d), using default (%d)\n",
      VAR_1, VAR_0);
     VAR_1 = VAR_0;
   }

   VAR_3 = (joypad_connection_t*)FUNC_1(VAR_1+1, sizeof(joypad_connection_t));

   if (!VAR_3)
      return ((void*)0);

   for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
   {
      joypad_connection_t *VAR_4 = (joypad_connection_t*)&VAR_3[VAR_2];

      VAR_4->connected = 0;
      VAR_4->iface = ((void*)0);
      VAR_4->data = ((void*)0);
   }

   FUNC_2(VAR_3, VAR_1);

   return VAR_3;
}
