
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sem; TYPE_1__* waiters; } ;
typedef TYPE_2__ WFC_WAITPOOL_T ;
struct TYPE_4__ {int sem; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(WFC_WAITPOOL_T *VAR_1)
{
   int VAR_2;

   for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
      FUNC_0(&VAR_1->waiters[VAR_2].sem);

   FUNC_0(&VAR_1->sem);
}
