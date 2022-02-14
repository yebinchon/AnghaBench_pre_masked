
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* sem_t ;
struct TYPE_2__ {int lock; int value; int sem; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,unsigned int*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void * VAR_1)
{
   sem_t VAR_2 = (sem_t) VAR_1;
   unsigned int VAR_3;

   if (FUNC_1 (&VAR_2->lock) == 0)
   {







      VAR_3 = 0;
      if (FUNC_0(VAR_2->sem, &VAR_3) != VAR_0)
      {
         ++VAR_2->value;






      }
      (void) FUNC_2 (&VAR_2->lock);
   }
}
