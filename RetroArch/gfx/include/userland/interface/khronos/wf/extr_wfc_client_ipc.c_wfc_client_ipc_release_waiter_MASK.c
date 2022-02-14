
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* inuse; } ;
typedef TYPE_2__ WFC_WAITER_T ;
struct TYPE_8__ {int sem; } ;
struct TYPE_10__ {TYPE_1__ waitpool; } ;
typedef TYPE_3__ WFC_CLIENT_IPC_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,int ,TYPE_2__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(WFC_CLIENT_IPC_T *VAR_1, WFC_WAITER_T *VAR_2)
{
   FUNC_1("%s: at %p", VAR_0, VAR_2);

   FUNC_0(VAR_2);
   FUNC_0(VAR_2->inuse);

   VAR_2->inuse = 0;
   FUNC_2(&VAR_1->waitpool.sem);
}
