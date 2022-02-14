
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int replace ;
struct TYPE_11__ {int workerPort; int workerName; int nodeId; } ;
typedef TYPE_1__ WorkerNode ;
typedef int TupleDesc ;
struct TYPE_12__ {int t_self; } ;
typedef int Relation ;
typedef TYPE_2__* HeapTuple ;
typedef int Datum ;




 int FUNC_0 (int ,int *,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_0 ;
 TYPE_2__* FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int FUNC_8 (int ,char*) ;
 char* FUNC_9 (int ,int ) ;
 TYPE_1__* FUNC_10 (int ,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char*,int ,int ) ;
 int FUNC_13 (int ,int ) ;
 TYPE_2__* FUNC_14 (TYPE_2__*,int ,int *,int*,int*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int*,int ,int) ;

__attribute__((used)) static WorkerNode *
FUNC_17(WorkerNode *VAR_5, int VAR_6, Datum VAR_7)
{
 Relation VAR_8 = FUNC_15(FUNC_4(), VAR_3);
 TupleDesc VAR_9 = FUNC_7(VAR_8);
 HeapTuple VAR_10 = FUNC_5(VAR_5->workerName, VAR_5->workerPort);
 WorkerNode *VAR_11 = ((void*)0);

 Datum VAR_12[VAR_1];
 bool VAR_13[VAR_1];
 bool VAR_14[VAR_1];
 char *VAR_15 = ((void*)0);


 switch (VAR_6)
 {
  case 129:
  {
   VAR_15 = FUNC_6(VAR_5->nodeId,
               FUNC_3(VAR_7));
   break;
  }

  case 128:
  {
   VAR_15 = FUNC_9(VAR_5->nodeId,
                FUNC_3(VAR_7));
   break;
  }

  default:
  {
   FUNC_11(VAR_0, (FUNC_12("could not find valid entry for node \"%s:%d\"",
           VAR_5->workerName, VAR_5->workerPort)));
  }
 }

 if (VAR_10 == ((void*)0))
 {
  FUNC_11(VAR_0, (FUNC_12("could not find valid entry for node \"%s:%d\"",
          VAR_5->workerName, VAR_5->workerPort)));
 }

 FUNC_16(VAR_14, 0, sizeof(VAR_14));
 VAR_12[VAR_6 - 1] = VAR_7;
 VAR_13[VAR_6 - 1] = 0;
 VAR_14[VAR_6 - 1] = 1;

 VAR_10 = FUNC_14(VAR_10, VAR_9, VAR_12, VAR_13, VAR_14);

 FUNC_0(VAR_8, &VAR_10->t_self, VAR_10);

 FUNC_1(FUNC_4());
 FUNC_2();

 VAR_11 = FUNC_10(VAR_9, VAR_10);

 FUNC_13(VAR_8, VAR_2);


 FUNC_8(VAR_4, VAR_15);
 return VAR_11;
}
