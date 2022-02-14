
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int polling_thread_quit; int * polling_thread_stack; int * polling_thread; int * client; } ;
typedef TYPE_1__ wiiu_hid_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(wiiu_hid_t *VAR_0)
{
   int VAR_1 = 0;
   FUNC_2("[hid]: stopping polling thread.\n");

   if (!VAR_0 || !VAR_0->polling_thread)
      return;


   if (VAR_0->client)
   {
     FUNC_0(VAR_0->client);
     VAR_0->client = ((void*)0);
   }


   VAR_0->polling_thread_quit = 1;

   FUNC_1(VAR_0->polling_thread, &VAR_1);
   FUNC_3(VAR_0->polling_thread);
   FUNC_3(VAR_0->polling_thread_stack);
   VAR_0->polling_thread = ((void*)0);
   VAR_0->polling_thread_stack = ((void*)0);
}
