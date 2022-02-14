
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ semaphore; int state; } ;
typedef TYPE_1__ pthread_once_t ;
typedef int pte_osSemaphoreHandle ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int*,long) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(void * VAR_1)
{
   pthread_once_t * VAR_2 = (pthread_once_t *) VAR_1;

   (void) FUNC_0(&VAR_2->state,VAR_0);


   if (FUNC_1((int*)&VAR_2->semaphore, 0L))
      FUNC_2((pte_osSemaphoreHandle) VAR_2->semaphore, 1);
}
