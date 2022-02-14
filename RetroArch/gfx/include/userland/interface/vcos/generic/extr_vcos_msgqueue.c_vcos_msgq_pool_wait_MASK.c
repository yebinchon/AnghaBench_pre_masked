
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
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

VCOS_MSG_T *FUNC_3(VCOS_MSGQ_POOL_T *VAR_1)
{
   VCOS_MSG_T *VAR_2;
   FUNC_2(&VAR_1->sem);
   VAR_2 = FUNC_1(&VAR_1->blockpool);
   FUNC_0(VAR_2);
   VAR_2->magic = VAR_0;
   VAR_2->waiter = &VAR_1->waiter;
   VAR_2->pool = VAR_1;
   return VAR_2;
}
