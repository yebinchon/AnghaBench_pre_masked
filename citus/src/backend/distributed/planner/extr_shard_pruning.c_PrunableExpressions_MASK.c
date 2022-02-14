
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pendingInstances; int * currentPruningInstance; } ;
struct TYPE_5__ {int * continueAt; int instance; } ;
typedef int PruningInstance ;
typedef TYPE_1__ PendingPruningInstance ;
typedef int Node ;
typedef TYPE_2__ ClauseWalkerContext ;


 int * FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(Node *VAR_1, ClauseWalkerContext *VAR_2)
{
 FUNC_1(VAR_1, VAR_2);
 while (VAR_2->pendingInstances != VAR_0)
 {
  PendingPruningInstance *VAR_3 =
   (PendingPruningInstance *) FUNC_2(VAR_2->pendingInstances);
  PruningInstance *VAR_4 = FUNC_0(VAR_3->instance);

  VAR_2->pendingInstances = FUNC_3(VAR_2->pendingInstances);

  VAR_2->currentPruningInstance = VAR_4;
  FUNC_1(VAR_3->continueAt, VAR_2);
  VAR_2->currentPruningInstance = ((void*)0);
 }
}
