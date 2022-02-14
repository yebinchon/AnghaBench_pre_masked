
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ finished; int (* handler ) (TYPE_1__*) ;struct TYPE_7__* next; } ;
typedef TYPE_1__ retro_task_t ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(void)
{
   retro_task_t *VAR_2 = ((void*)0);
   retro_task_t *VAR_3 = ((void*)0);
   retro_task_t *VAR_4 = ((void*)0);

   while ((VAR_2 = FUNC_3(&VAR_1)) != ((void*)0))
   {
      VAR_2->next = VAR_3;
      VAR_3 = VAR_2;
   }

   for (VAR_2 = VAR_3; VAR_2; VAR_2 = VAR_4)
   {
      VAR_4 = VAR_2->next;
      VAR_2->handler(VAR_2);

      FUNC_4(VAR_2);

      if (VAR_2->finished)
         FUNC_5(&VAR_0, VAR_2);
      else
         FUNC_1(VAR_2);
   }

   FUNC_0();
}
