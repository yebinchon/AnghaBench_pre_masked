
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* pthread_t ;
struct TYPE_4__ {int * prevReuse; } ;
typedef TYPE_1__ pte_thread_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;

pthread_t
FUNC_2 (void)
{
   pthread_t VAR_4 = ((void*)0);

   FUNC_0 (VAR_3);

   if (VAR_0 != VAR_2)
   {
      pte_thread_t * VAR_5;

      VAR_5 = VAR_2;

      VAR_2 = VAR_5->prevReuse;

      if (VAR_0 == VAR_2)
         VAR_1 = VAR_0;

      VAR_5->prevReuse = ((void*)0);

      VAR_4 = VAR_5;
   }

   FUNC_1(VAR_3);

   return VAR_4;

}
