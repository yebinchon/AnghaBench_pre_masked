
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef scalar_t__ int64 ;
struct TYPE_13__ {TYPE_1__* currentTask; TYPE_3__* workerPool; TYPE_6__* connection; } ;
typedef TYPE_2__ WorkerSession ;
struct TYPE_14__ {TYPE_8__* distributedExecution; } ;
typedef TYPE_3__ WorkerPool ;
typedef int Tuplestorestate ;
typedef TYPE_4__* TupleDesc ;
struct TYPE_19__ {char** columnArray; scalar_t__ rowsProcessed; int * tupleStore; int * attributeInputMetadata; TYPE_4__* tupleDescriptor; TYPE_7__* executionStats; } ;
struct TYPE_18__ {int totalIntermediateResultSize; } ;
struct TYPE_17__ {int pgConn; } ;
struct TYPE_16__ {int gotResults; } ;
struct TYPE_15__ {scalar_t__ natts; } ;
struct TYPE_12__ {TYPE_5__* shardCommandExecution; } ;
typedef TYPE_5__ ShardCommandExecution ;
typedef int PGresult ;
typedef TYPE_6__ MultiConnection ;
typedef int * MemoryContext ;
typedef int * HeapTuple ;
typedef scalar_t__ ExecStatusType ;
typedef TYPE_7__ DistributedExecutionStats ;
typedef TYPE_8__ DistributedExecution ;
typedef int AttInMetadata ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,char**) ;
 scalar_t__ FUNC_3 (TYPE_7__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (int *) ;
 int * FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (int *,scalar_t__,scalar_t__) ;
 char* FUNC_13 (int *,scalar_t__,scalar_t__) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (TYPE_6__*,int *,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (char*,scalar_t__,scalar_t__) ;
 int FUNC_21 (char**,int ,scalar_t__) ;
 int FUNC_22 (char*,int,scalar_t__*) ;
 int FUNC_23 (int *,int *) ;

__attribute__((used)) static bool
FUNC_24(WorkerSession *VAR_9, bool VAR_10)
{
 bool VAR_11 = 0;
 MultiConnection *VAR_12 = VAR_9->connection;
 WorkerPool *VAR_13 = VAR_9->workerPool;
 DistributedExecution *VAR_14 = VAR_13->distributedExecution;
 DistributedExecutionStats *VAR_15 = VAR_14->executionStats;
 TupleDesc VAR_16 = VAR_14->tupleDescriptor;
 AttInMetadata *VAR_17 = VAR_14->attributeInputMetadata;
 uint32 VAR_18 = 0;
 char **VAR_19 = VAR_14->columnArray;
 Tuplestorestate *VAR_20 = VAR_14->tupleStore;
 MemoryContext VAR_21 = ((void*)0);

 if (VAR_16 != ((void*)0))
 {
  VAR_18 = VAR_16->natts;
 }






 VAR_21 = FUNC_0(VAR_3,
           "IoContext",
           VAR_2,
           VAR_0,
           VAR_1);

 while (!FUNC_14(VAR_12->pgConn))
 {
  uint32 VAR_22 = 0;
  uint32 VAR_23 = 0;
  uint32 VAR_24 = 0;
  uint32 VAR_25 = 0;
  ExecStatusType VAR_26 = 0;

  PGresult *VAR_27 = FUNC_10(VAR_12->pgConn);
  if (VAR_27 == ((void*)0))
  {

   VAR_11 = 1;
   break;
  }

  VAR_26 = FUNC_17(VAR_27);
  if (VAR_26 == VAR_5)
  {
   char *VAR_28 = FUNC_9(VAR_27);
   int64 VAR_29 = 0;
   ShardCommandExecution *VAR_30 =
    VAR_9->currentTask->shardCommandExecution;


   if (!VAR_30->gotResults && *VAR_28 != '\0')
   {
    FUNC_22(VAR_28, 0, &VAR_29);
    FUNC_1(VAR_29 >= 0);

    VAR_14->rowsProcessed += VAR_29;
   }

   FUNC_8(VAR_27);


   VAR_11 = 1;
   break;
  }
  else if (VAR_26 == VAR_7)
  {




   FUNC_1(FUNC_16(VAR_27) == 0);
   FUNC_8(VAR_27);

   VAR_11 = 1;
   break;
  }
  else if (VAR_26 != VAR_6)
  {

   FUNC_18(VAR_12, VAR_27, VAR_4);
  }
  else if (!VAR_10)
  {




   FUNC_8(VAR_27);
   continue;
  }

  VAR_24 = FUNC_16(VAR_27);
  VAR_25 = FUNC_15(VAR_27);

  if (VAR_25 != VAR_18)
  {
   FUNC_19(VAR_4, (FUNC_20("unexpected number of columns from worker: %d, "
           "expected %d",
           VAR_25, VAR_18)));
  }

  for (VAR_22 = 0; VAR_22 < VAR_24; VAR_22++)
  {
   HeapTuple VAR_31 = ((void*)0);
   MemoryContext VAR_32 = ((void*)0);
   FUNC_21(VAR_19, 0, VAR_25 * sizeof(char *));

   for (VAR_23 = 0; VAR_23 < VAR_25; VAR_23++)
   {
    if (FUNC_11(VAR_27, VAR_22, VAR_23))
    {
     VAR_19[VAR_23] = ((void*)0);
    }
    else
    {
     VAR_19[VAR_23] = FUNC_13(VAR_27, VAR_22, VAR_23);
     if (VAR_8 > 0 && VAR_15 != ((void*)0))
     {
      VAR_15->totalIntermediateResultSize += FUNC_12(VAR_27,
                       VAR_22,
                       VAR_23);
     }
    }
   }






   VAR_32 = FUNC_7(VAR_21);

   VAR_31 = FUNC_2(VAR_17, VAR_19);

   FUNC_7(VAR_32);

   FUNC_23(VAR_20, VAR_31);
   FUNC_6(VAR_21);

   VAR_14->rowsProcessed++;
  }

  FUNC_8(VAR_27);

  if (VAR_15 != ((void*)0) && FUNC_3(VAR_15))
  {
   FUNC_4();
  }
 }


 FUNC_5(VAR_21);

 return VAR_11;
}
