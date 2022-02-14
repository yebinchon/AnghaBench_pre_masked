
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* pthread_barrier_t ;
struct TYPE_4__ {int pshared; int * semBarrierBreeched; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;

int FUNC_3 (pthread_barrier_t * VAR_2)
{
   int VAR_3 = 0;
   pthread_barrier_t VAR_4;

   if (VAR_2 == ((void*)0) || *VAR_2 == (pthread_barrier_t) VAR_1)
      return VAR_0;

   VAR_4 = *VAR_2;
   *VAR_2 = ((void*)0);

   if (0 == (VAR_3 = FUNC_1 (&(VAR_4->semBarrierBreeched[0]))))
   {
      if (0 == (VAR_3 = FUNC_1 (&(VAR_4->semBarrierBreeched[1]))))
      {
         (void) FUNC_0 (VAR_4);
         return 0;
      }
      (void) FUNC_2 (&(VAR_4->semBarrierBreeched[0]), VAR_4->pshared, 0);
   }

   *VAR_2 = VAR_4;
   return (VAR_3);
}
