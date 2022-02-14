
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timespec {int dummy; } ;
typedef int pthread_mutex_t ;
typedef TYPE_1__* pthread_cond_t ;
struct TYPE_7__ {int* resultPtr; TYPE_1__* cv; int * mutexPtr; } ;
typedef TYPE_2__ pte_cond_wait_cleanup_args_t ;
struct TYPE_6__ {int semBlockQueue; int semBlockLock; int nWaitersBlocked; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__**) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,struct timespec const*) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7 (pthread_cond_t * VAR_5,
      pthread_mutex_t * VAR_6, const struct timespec *VAR_7)
{
   int VAR_8 = 0;
   pthread_cond_t VAR_9;
   pte_cond_wait_cleanup_args_t VAR_10;

   if (VAR_5 == ((void*)0) || *VAR_5 == ((void*)0))
      return VAR_1;







   if (*VAR_5 == VAR_2)
      VAR_8 = FUNC_0 (VAR_5);

   if (VAR_8 != 0 && VAR_8 != VAR_0)
      return VAR_8;

   VAR_9 = *VAR_5;


   if (FUNC_6 (&(VAR_9->semBlockLock)) != 0)
      return VAR_3;

   ++(VAR_9->nWaitersBlocked);

   if (FUNC_4 (&(VAR_9->semBlockLock)) != 0)
      return VAR_3;




   VAR_10.mutexPtr = VAR_6;
   VAR_10.cv = VAR_9;
   VAR_10.resultPtr = &VAR_8;

   FUNC_2 (VAR_4, (void *) &VAR_10);




   if ((VAR_8 = FUNC_3 (VAR_6)) == 0)
   {
      if (FUNC_5 (&(VAR_9->semBlockQueue), VAR_7) != 0)
         VAR_8 = VAR_3;
   }





   FUNC_1 (1);




   return VAR_8;
}
