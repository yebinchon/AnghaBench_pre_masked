
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* prevReuse; } ;
typedef TYPE_1__ pte_thread_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int * VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;

void FUNC_4(void)
{
   pte_thread_t * VAR_7, * VAR_8;

   if (!VAR_3)
      return;

   if (VAR_4 != ((void*)0))
   {



      FUNC_3 (VAR_4);

      VAR_4 = ((void*)0);
   }

   if (VAR_2 != ((void*)0))
   {



      FUNC_3 (VAR_2);

      VAR_2 = ((void*)0);
   }

   FUNC_1 (VAR_6);


   VAR_7 = VAR_5;
   while (VAR_7 != VAR_1)
   {
      VAR_8 = VAR_7->prevReuse;
      FUNC_0 (VAR_7);
      VAR_7 = VAR_8;
   }

   FUNC_2(VAR_6);

   VAR_3 = VAR_0;
}
