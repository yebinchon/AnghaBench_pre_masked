
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* init ) (void*,int,int ) ;} ;
typedef TYPE_1__ pad_connection_interface_t ;
struct TYPE_8__ {int connected; int data; TYPE_1__* iface; } ;
typedef TYPE_2__ joypad_connection_t ;
struct TYPE_9__ {int pad_driver; int os_driver; TYPE_2__* pad_list; } ;


 int FUNC_0 (char*) ;
 TYPE_6__ VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (void*,int,int ) ;

joypad_connection_t *FUNC_4(void *VAR_1, pad_connection_interface_t *VAR_2)
{
   int VAR_3;
   joypad_connection_t *VAR_4;

   if(!VAR_1)
      return ((void*)0);

   VAR_3 = FUNC_2(VAR_0.pad_list);
   if(VAR_3 < 0)
   {
      FUNC_0("[hid]: failed to find a vacant pad.\n");
      return ((void*)0);
   }

   VAR_4 = &(VAR_0.pad_list[VAR_3]);
   VAR_4->iface = VAR_2;
   VAR_4->data = VAR_2->init(VAR_1, VAR_3, VAR_0.os_driver);
   VAR_4->connected = 1;
   FUNC_1(VAR_3, VAR_0.pad_driver);

   return VAR_4;
}
