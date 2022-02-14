
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* pthread_mutex_t ;
struct TYPE_4__ {scalar_t__ kind; scalar_t__ recursive_count; int handle; int lock_idx; int * ownerThread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 () ;

int FUNC_4 (pthread_mutex_t * VAR_6)
{
   int VAR_7 = 0;
   pthread_mutex_t VAR_8 = *VAR_6;
   if (VAR_8 < VAR_3)
   {
      if (VAR_8->kind == VAR_4)
      {
         int VAR_9;

         VAR_9 = FUNC_0 (&VAR_8->lock_idx,0);
         if (VAR_9 != 0)
         {
            if (VAR_9 < 0)
            {



               if (FUNC_1(VAR_8->handle,1) != VAR_2)
                  VAR_7 = VAR_0;
            }
         }
         else
         {



            VAR_7 = VAR_1;
         }
      }
      else
      {
         if (FUNC_2 (VAR_8->ownerThread, FUNC_3 ()))
         {
            if (VAR_8->kind != VAR_5
                  || 0 == --VAR_8->recursive_count)
            {
               VAR_8->ownerThread = ((void*)0);

               if (FUNC_0 (&VAR_8->lock_idx,0) < 0)
               {
                  if (FUNC_1(VAR_8->handle,1) != VAR_2)
                     VAR_7 = VAR_0;
               }
            }
         }
         else
            VAR_7 = VAR_1;
      }
   }
   else
      VAR_7 = VAR_0;

   return (VAR_7);
}
