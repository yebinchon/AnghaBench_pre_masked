
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int* tts_isnull; int * tts_values; } ;
typedef TYPE_1__ TupleTableSlot ;
typedef int TupleDesc ;
struct TYPE_9__ {int tuplesSent; int * executorState; int * columnOutputFunctions; TYPE_3__* copyOutState; int tupleDescriptor; } ;
typedef TYPE_2__ TaskFileDestReceiver ;
struct TYPE_10__ {int fe_msgbuf; } ;
typedef int StringInfo ;
typedef int MemoryContext ;
typedef int FmgrInfo ;
typedef int EState ;
typedef int DestReceiver ;
typedef int Datum ;
typedef TYPE_3__* CopyOutState ;


 int FUNC_0 (int *,int*,int ,TYPE_3__*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_7(TupleTableSlot *VAR_0, DestReceiver *VAR_1)
{
 TaskFileDestReceiver *VAR_2 = (TaskFileDestReceiver *) VAR_1;

 TupleDesc VAR_3 = VAR_2->tupleDescriptor;

 CopyOutState VAR_4 = VAR_2->copyOutState;
 FmgrInfo *VAR_5 = VAR_2->columnOutputFunctions;

 Datum *VAR_6 = ((void*)0);
 bool *VAR_7 = ((void*)0);
 StringInfo VAR_8 = VAR_4->fe_msgbuf;

 EState *VAR_9 = VAR_2->executorState;
 MemoryContext VAR_10 = FUNC_1(VAR_9);
 MemoryContext VAR_11 = FUNC_2(VAR_10);

 FUNC_6(VAR_0);

 VAR_6 = VAR_0->tts_values;
 VAR_7 = VAR_0->tts_isnull;

 FUNC_5(VAR_8);


 FUNC_0(VAR_6, VAR_7, VAR_3,
       VAR_4, VAR_5, ((void*)0));

 FUNC_4(VAR_4->fe_msgbuf, VAR_2);

 FUNC_2(VAR_11);

 VAR_2->tuplesSent++;

 FUNC_3(VAR_9);

 return 1;
}
