
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* pool; int * waiter; int magic; } ;
typedef TYPE_1__ VCOS_MSG_T ;
struct TYPE_8__ {int waiter; int blockpool; int sem; } ;
typedef TYPE_2__ VCOS_MSGQ_POOL_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

VCOS_MSG_T *FUNC_3(VCOS_MSGQ_POOL_T *VAR_2)
{
   VCOS_MSG_T *VAR_3;
   if (FUNC_2(&VAR_2->sem) == VAR_1)
   {
      VAR_3 = FUNC_1(&VAR_2->blockpool);
      FUNC_0(VAR_3);
      VAR_3->magic = VAR_0;
      VAR_3->waiter = &VAR_2->waiter;
      VAR_3->pool = VAR_2;
   }
   else
   {
      VAR_3 = ((void*)0);
   }
   return VAR_3;
}
