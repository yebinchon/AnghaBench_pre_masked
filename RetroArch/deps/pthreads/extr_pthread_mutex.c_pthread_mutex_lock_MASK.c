
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* pthread_t ;
typedef TYPE_1__* pthread_mutex_t ;
struct TYPE_5__ {scalar_t__ kind; int recursive_count; void* ownerThread; int handle; int lock_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_1__**) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (void*,void*) ;
 void* FUNC_5 () ;

int FUNC_6 (pthread_mutex_t * VAR_6)
{
   int VAR_7 = 0;
   pthread_mutex_t VAR_8;




   if (*VAR_6 == ((void*)0))
      return VAR_1;







   if (*VAR_6 >= VAR_3)
   {
      if ((VAR_7 = FUNC_2 (VAR_6)) != 0)
         return (VAR_7);
   }

   VAR_8 = *VAR_6;

   if (VAR_8->kind == VAR_4)
   {
      if (FUNC_1(
               &VAR_8->lock_idx,
               1) != 0)
      {
         while (FUNC_1(&VAR_8->lock_idx,-1) != 0)
         {
            if (FUNC_3(VAR_8->handle,((void*)0)) != VAR_2)
            {
               VAR_7 = VAR_1;
               break;
            }
         }
      }
   }
   else
   {
      pthread_t VAR_9 = FUNC_5();

      if (FUNC_0(&VAR_8->lock_idx,1,0) == 0)
      {
         VAR_8->recursive_count = 1;
         VAR_8->ownerThread = VAR_9;
      }
      else
      {
         if (FUNC_4 (VAR_8->ownerThread, VAR_9))
         {
            if (VAR_8->kind == VAR_5)
               VAR_8->recursive_count++;
            else
               VAR_7 = VAR_0;
         }
         else
         {
            while (FUNC_1(&VAR_8->lock_idx,-1) != 0)
            {
               if (FUNC_3(VAR_8->handle,((void*)0)) != VAR_2)
               {
                  VAR_7 = VAR_1;
                  break;
               }
            }

            if (0 == VAR_7)
            {
               VAR_8->recursive_count = 1;
               VAR_8->ownerThread = VAR_9;
            }
         }
      }

   }

   return (VAR_7);
}
