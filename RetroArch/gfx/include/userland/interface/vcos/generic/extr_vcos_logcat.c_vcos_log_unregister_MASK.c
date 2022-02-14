
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ refcount; struct TYPE_5__* next; } ;
typedef TYPE_1__ VCOS_LOG_CAT_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(VCOS_LOG_CAT_T *VAR_2)
{
   VCOS_LOG_CAT_T **VAR_3;

   FUNC_2(&VAR_0);
   VAR_2->refcount--;
   if (VAR_2->refcount == 0)
   {
      VAR_3 = &VAR_1;
      while (*VAR_3 != VAR_2)
      {
         if (!*VAR_3)
            break;
         if ((*VAR_3)->next == ((void*)0))
         {
            FUNC_0(0);
            FUNC_3(&VAR_0);
            return;
         }
         VAR_3 = &(*VAR_3)->next;
      }
      if (*VAR_3)
         *VAR_3 = VAR_2->next;

      FUNC_1(VAR_2);
   }
   FUNC_3(&VAR_0);
}
