
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int* tts_isnull; int * tts_values; } ;
typedef TYPE_1__ TupleTableSlot ;
typedef int TupleDesc ;
struct TYPE_9__ {int fe_msgbuf; } ;
struct TYPE_8__ {int tuplesSent; int fileCompat; scalar_t__ writeLocalFile; int * executorState; int * columnOutputFunctions; TYPE_3__* copyOutState; int * connectionList; int tupleDescriptor; } ;
typedef int StringInfo ;
typedef TYPE_2__ RemoteFileDestReceiver ;
typedef int MemoryContext ;
typedef int List ;
typedef int FmgrInfo ;
typedef int EState ;
typedef int DestReceiver ;
typedef int Datum ;
typedef TYPE_3__* CopyOutState ;


 int FUNC_0 (int *,int*,int ,TYPE_3__*,int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_8(TupleTableSlot *VAR_0, DestReceiver *VAR_1)
{
 RemoteFileDestReceiver *VAR_2 = (RemoteFileDestReceiver *) VAR_1;

 TupleDesc VAR_3 = VAR_2->tupleDescriptor;

 List *VAR_4 = VAR_2->connectionList;
 CopyOutState VAR_5 = VAR_2->copyOutState;
 FmgrInfo *VAR_6 = VAR_2->columnOutputFunctions;

 Datum *VAR_7 = ((void*)0);
 bool *VAR_8 = ((void*)0);
 StringInfo VAR_9 = VAR_5->fe_msgbuf;

 EState *VAR_10 = VAR_2->executorState;
 MemoryContext VAR_11 = FUNC_2(VAR_10);
 MemoryContext VAR_12 = FUNC_3(VAR_11);

 FUNC_7(VAR_0);

 VAR_7 = VAR_0->tts_values;
 VAR_8 = VAR_0->tts_isnull;

 FUNC_6(VAR_9);


 FUNC_0(VAR_7, VAR_8, VAR_3,
       VAR_5, VAR_6, ((void*)0));


 FUNC_1(VAR_9, VAR_4);


 if (VAR_2->writeLocalFile)
 {
  FUNC_5(VAR_5->fe_msgbuf, &VAR_2->fileCompat);
 }

 FUNC_3(VAR_12);

 VAR_2->tuplesSent++;

 FUNC_4(VAR_10);

 return 1;
}
