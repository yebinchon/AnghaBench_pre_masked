
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* pthread_mutex_t ;
struct TYPE_7__ {scalar_t__ kind; int recursive_count; int handle; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__**) ;
 int FUNC_5 (TYPE_1__**) ;

int FUNC_6 (pthread_mutex_t * VAR_4)
{
   int VAR_5 = 0;
   pthread_mutex_t VAR_6;
   if (*VAR_4 < VAR_1)
   {
      VAR_6 = *VAR_4;

      VAR_5 = FUNC_4 (&VAR_6);





      if (VAR_5 == 0)
      {
         if (VAR_6->kind != VAR_2 || 1 == VAR_6->recursive_count)
         {
            *VAR_4 = ((void*)0);

            VAR_5 = FUNC_5 (&VAR_6);

            if (VAR_5 == 0)
            {
               FUNC_3(VAR_6->handle);

               FUNC_0(VAR_6);

            }
            else
            {



               *VAR_4 = VAR_6;
            }
         }
         else
         {



            VAR_6->recursive_count--;
            VAR_5 = VAR_0;
         }
      }
   }
   else
   {




      FUNC_1 (VAR_3);





      if (*VAR_4 >= VAR_1)
      {






         *VAR_4 = ((void*)0);
      }
      else
      {




         VAR_5 = VAR_0;
      }

      FUNC_2(VAR_3);

   }

   return (VAR_5);
}
