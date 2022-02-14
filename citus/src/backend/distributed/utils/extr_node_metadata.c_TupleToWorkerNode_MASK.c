
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isNullArray ;
struct TYPE_3__ {int nodeCluster; void* shouldHaveShards; int nodeRole; void* isActive; void* metadataSynced; void* hasMetadata; int workerRack; int workerName; int groupId; void* workerPort; void* nodeId; } ;
typedef TYPE_1__ WorkerNode ;
typedef int TupleDesc ;
typedef int * Name ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_11 ;
 char* FUNC_8 (int ) ;
 int VAR_12 ;
 char* FUNC_9 (char*) ;
 int VAR_13 ;
 int FUNC_10 (int ,int ,int *,int*) ;
 int FUNC_11 (int*,int,int) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int ,char*,int ) ;

__attribute__((used)) static WorkerNode *
FUNC_14(TupleDesc VAR_14, HeapTuple VAR_15)
{
 WorkerNode *VAR_16 = ((void*)0);
 Datum VAR_17[VAR_12];
 bool VAR_18[VAR_12];
 char *VAR_19 = ((void*)0);
 char *VAR_20 = ((void*)0);

 FUNC_0(!FUNC_7(VAR_15));






 FUNC_11(VAR_18, 1, sizeof(VAR_18));





 FUNC_10(VAR_15, VAR_14, VAR_17, VAR_18);

 VAR_19 = FUNC_2(VAR_17[VAR_6 - 1]);
 VAR_20 = FUNC_2(VAR_17[VAR_8 - 1]);

 VAR_16 = (WorkerNode *) FUNC_12(sizeof(WorkerNode));
 VAR_16->nodeId = FUNC_6(VAR_17[VAR_5 - 1]);
 VAR_16->workerPort = FUNC_6(VAR_17[VAR_7 - 1]);
 VAR_16->groupId = FUNC_3(VAR_17[VAR_0 - 1]);
 FUNC_13(VAR_16->workerName, FUNC_9(VAR_19), VAR_13);
 FUNC_13(VAR_16->workerRack, FUNC_9(VAR_20), VAR_13);
 VAR_16->hasMetadata = FUNC_1(VAR_17[VAR_1 - 1]);
 VAR_16->metadataSynced =
  FUNC_1(VAR_17[VAR_3 - 1]);
 VAR_16->isActive = FUNC_1(VAR_17[VAR_2 - 1]);
 VAR_16->nodeRole = FUNC_5(VAR_17[VAR_9 - 1]);
 VAR_16->shouldHaveShards = FUNC_1(
  VAR_17[VAR_10 -
       1]);






 if (!VAR_18[VAR_4 - 1])
 {
  Name VAR_21 =
   FUNC_4(VAR_17[VAR_4 - 1]);
  char *VAR_22 = FUNC_8(*VAR_21);
  FUNC_13(VAR_16->nodeCluster, VAR_22, VAR_11);
 }

 return VAR_16;
}
