
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* pthread_cond_t ;
struct TYPE_4__ {struct TYPE_4__* next; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__**) ;

void *
FUNC_3 (void *VAR_3)
{
   int VAR_4 = 0;
   pthread_cond_t VAR_5;

   FUNC_0 (VAR_2);

   VAR_5 = VAR_1;

   while (VAR_5 != ((void*)0) && 0 == VAR_4)
   {
      VAR_4 = FUNC_2 (&VAR_5);
      VAR_5 = VAR_5->next;
   }

   FUNC_1(VAR_2);

   return (void *) (VAR_4 != 0 ? VAR_0 : 0);
}
