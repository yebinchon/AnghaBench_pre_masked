
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int pendingInstances; TYPE_1__* currentPruningInstance; } ;
struct TYPE_8__ {TYPE_1__* instance; int * continueAt; } ;
struct TYPE_7__ {int isPartial; } ;
typedef TYPE_2__ PendingPruningInstance ;
typedef int OpExpr ;
typedef int Node ;
typedef TYPE_3__ ClauseWalkerContext ;


 int FUNC_0 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(ClauseWalkerContext *VAR_0, OpExpr *VAR_1)
{
 PendingPruningInstance *VAR_2 = FUNC_1(sizeof(PendingPruningInstance));

 VAR_2->instance = VAR_0->currentPruningInstance;
 VAR_2->continueAt = (Node *) VAR_1;






 VAR_2->instance->isPartial = 1;
 VAR_0->pendingInstances = FUNC_0(VAR_0->pendingInstances, VAR_2);
}
