
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; struct TYPE_4__* next; } ;
typedef TYPE_1__ wiiu_adapter_t ;
struct TYPE_5__ {TYPE_1__* list; } ;
typedef int OSThread ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 TYPE_3__ VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(OSThread *VAR_2, void *VAR_3)
{
   int VAR_4 = 0;
   int VAR_5 = 0;
   wiiu_adapter_t *VAR_6 = ((void*)0);

   FUNC_0("Waiting for in-flight reads to finish.\n");




   do
   {
      VAR_4 = 0;
      for (VAR_6 = VAR_1.list; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
      {
         if (VAR_6->state == VAR_0)
            VAR_4++;
      }

      if (VAR_4 == 0)
      {
         FUNC_0("All in-flight reads complete.\n");
         while(VAR_1.list != ((void*)0))
         {
            FUNC_0("[hid]: shutting down adapter..\n");
            VAR_6 = VAR_1.list;
            VAR_1.list = VAR_6->next;
            FUNC_2(VAR_6);
         }
      }

      if (VAR_4)
         FUNC_3(5000);

      if (++VAR_5 >= 1000)
      {
         FUNC_1("[hid]: timed out waiting for in-flight read to finish.\n");
         VAR_4 = 0;
      }
   } while(VAR_4);
}
