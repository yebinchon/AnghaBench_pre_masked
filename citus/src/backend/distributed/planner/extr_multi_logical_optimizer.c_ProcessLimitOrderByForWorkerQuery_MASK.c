
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nextSortGroupRefIndex; int workerSortClauseList; int workerLimitCount; } ;
struct TYPE_5__ {int targetEntryList; int targetProjectionNumber; } ;
typedef TYPE_1__ QueryTargetList ;
typedef TYPE_2__ QueryOrderByLimit ;
typedef int OrderByLimitReference ;
typedef int Node ;
typedef int List ;


 int * FUNC_0 (int *,int ,int *,int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int *,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(OrderByLimitReference VAR_1,
          Node *VAR_2, Node *VAR_3,
          List *VAR_4, List *VAR_5,
          List *VAR_6,
          QueryOrderByLimit *VAR_7,
          QueryTargetList *VAR_8)
{
 List *VAR_9 = VAR_0;

 VAR_7->workerLimitCount =
  FUNC_1(VAR_2, VAR_3, VAR_1);

 VAR_7->workerSortClauseList =
  FUNC_2(VAR_2,
        VAR_5,
        VAR_4,
        VAR_1);





 VAR_9 =
  FUNC_0(VAR_6,
              VAR_7->workerSortClauseList,
              &(VAR_8->targetProjectionNumber),
              VAR_7->nextSortGroupRefIndex);

 VAR_8->targetEntryList =
  FUNC_3(VAR_8->targetEntryList, VAR_9);
}
