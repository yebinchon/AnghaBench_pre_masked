
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* resultPtr; TYPE_2__* sem; } ;
typedef TYPE_1__ sem_timedwait_cleanup_args_t ;
typedef TYPE_2__* sem_t ;
struct TYPE_4__ {int lock; int value; int sem; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,unsigned int*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3 (void * VAR_1)
{
   sem_timedwait_cleanup_args_t * VAR_2 = (sem_timedwait_cleanup_args_t *)VAR_1;
   sem_t VAR_3 = VAR_2->sem;

   if (FUNC_1 (&VAR_3->lock) == 0)
   {
      unsigned int VAR_4 = 0;
      if (FUNC_0(VAR_3->sem, &VAR_4) == VAR_0)
      {

         *(VAR_2->resultPtr) = 0;
      }
      else
      {

         VAR_3->value++;






      }
      (void) FUNC_2 (&VAR_3->lock);
   }
}
