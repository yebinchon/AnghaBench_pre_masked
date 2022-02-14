
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint64 ;
struct TYPE_7__ {int * relationRowLockList; int * relationShardList; int * taskPlacementList; void* jobId; void* anchorShardId; int queryString; } ;
typedef TYPE_1__ Task ;
struct TYPE_8__ {int data; } ;
typedef TYPE_2__* StringInfo ;
typedef int Query ;
typedef int Node ;
typedef int List ;


 TYPE_1__* FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int **) ;
 int * FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (int *,TYPE_2__*) ;

__attribute__((used)) static List *
FUNC_5(Query *VAR_2, uint64 VAR_3, List *VAR_4,
        List *VAR_5,
        uint64 VAR_6)
{
 Task *VAR_7 = FUNC_0(VAR_1);
 StringInfo VAR_8 = FUNC_3();
 List *VAR_9 = VAR_0;

 FUNC_1((Node *) VAR_2, &VAR_9);
 FUNC_4(VAR_2, VAR_8);

 VAR_7->queryString = VAR_8->data;
 VAR_7->anchorShardId = VAR_6;
 VAR_7->jobId = VAR_3;
 VAR_7->taskPlacementList = VAR_5;
 VAR_7->relationShardList = VAR_4;
 VAR_7->relationRowLockList = VAR_9;

 return FUNC_2(VAR_7);
}
