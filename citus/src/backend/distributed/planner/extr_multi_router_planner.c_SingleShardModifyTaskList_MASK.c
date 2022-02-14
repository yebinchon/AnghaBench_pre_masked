
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* uint64 ;
struct TYPE_11__ {int replicationModel; int * relationShardList; int * taskPlacementList; void* jobId; void* anchorShardId; int queryString; } ;
typedef TYPE_1__ Task ;
struct TYPE_14__ {char partitionMethod; int replicationModel; } ;
struct TYPE_13__ {int relid; } ;
struct TYPE_12__ {int data; } ;
typedef TYPE_2__* StringInfo ;
typedef TYPE_3__ RangeTblEntry ;
typedef int Query ;
typedef int Node ;
typedef int List ;
typedef TYPE_4__ DistTableCacheEntry ;


 TYPE_1__* FUNC_0 (int ) ;
 char VAR_0 ;
 TYPE_4__* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int **) ;
 TYPE_3__* FUNC_3 (int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (TYPE_1__*) ;
 TYPE_2__* FUNC_9 () ;
 int FUNC_10 (int *,TYPE_2__*) ;

__attribute__((used)) static List *
FUNC_11(Query *VAR_5, uint64 VAR_6, List *VAR_7,
        List *VAR_8, uint64 VAR_9)
{
 Task *VAR_10 = FUNC_0(VAR_3);
 StringInfo VAR_11 = FUNC_9();
 DistTableCacheEntry *VAR_12 = ((void*)0);
 char VAR_13 = 0;
 List *VAR_14 = VAR_4;
 RangeTblEntry *VAR_15 = ((void*)0);

 FUNC_2((Node *) VAR_5, &VAR_14);
 VAR_15 = FUNC_3(VAR_5);

 VAR_12 = FUNC_1(VAR_15->relid);
 VAR_13 = VAR_12->partitionMethod;

 if (VAR_13 == VAR_0 &&
  FUNC_4(VAR_14, VAR_5))
 {
  FUNC_5(VAR_2, (FUNC_6(VAR_1),
      FUNC_7("cannot perform select on a distributed table "
          "and modify a reference table")));
 }

 FUNC_10(VAR_5, VAR_11);

 VAR_10->queryString = VAR_11->data;
 VAR_10->anchorShardId = VAR_9;
 VAR_10->jobId = VAR_6;
 VAR_10->taskPlacementList = VAR_8;
 VAR_10->relationShardList = VAR_7;
 VAR_10->replicationModel = VAR_12->replicationModel;

 return FUNC_8(VAR_10);
}
