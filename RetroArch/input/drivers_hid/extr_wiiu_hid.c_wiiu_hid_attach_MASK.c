
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int wiiu_hid_t ;
struct TYPE_8__ {int driver; } ;
typedef TYPE_1__ wiiu_attach_event ;
struct TYPE_9__ {int state; int driver; int * hid; } ;
typedef TYPE_2__ wiiu_adapter_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(wiiu_hid_t *VAR_1, wiiu_attach_event *VAR_2)
{
   wiiu_adapter_t *VAR_3 = FUNC_2(VAR_2);

   if (!VAR_3)
   {
      FUNC_0("[hid]: Failed to allocate adapter.\n");
      goto error;
   }

   VAR_3->hid = VAR_1;
   VAR_3->driver = VAR_2->driver;
   VAR_3->state = VAR_0;

   FUNC_3(VAR_3);

   return;

error:
   FUNC_1(VAR_3);
}
