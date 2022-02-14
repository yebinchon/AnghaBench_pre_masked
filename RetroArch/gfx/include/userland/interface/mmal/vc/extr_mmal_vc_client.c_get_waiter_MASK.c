
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* waiters; int sem; } ;
struct TYPE_8__ {int lock; TYPE_1__ waitpool; } ;
struct TYPE_7__ {scalar_t__ inuse; } ;
typedef TYPE_2__ MMAL_WAITER_T ;
typedef TYPE_3__ MMAL_CLIENT_T ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static MMAL_WAITER_T *FUNC_4(MMAL_CLIENT_T *VAR_1)
{
   int VAR_2;
   MMAL_WAITER_T *VAR_3 = ((void*)0);
   FUNC_2(&VAR_1->waitpool.sem);
   FUNC_0(&VAR_1->lock);
   for (VAR_2=0; VAR_2<VAR_0; VAR_2++)
   {
      if (VAR_1->waitpool.waiters[VAR_2].inuse == 0)
         break;
   }

   if (FUNC_3(VAR_2 != VAR_0))
   {
      VAR_3 = VAR_1->waitpool.waiters+VAR_2;
      VAR_3->inuse = 1;
   }
   FUNC_1(&VAR_1->lock);

   return VAR_3;
}
