
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int values ;
typedef int isNulls ;
typedef int int64 ;
struct TYPE_3__ {scalar_t__ workerPort; int workerName; } ;
typedef TYPE_1__ WorkerNode ;
typedef int TupleDesc ;
typedef int * HeapTuple ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int * FUNC_3 (int ,int*,int*) ;
 int FUNC_4 (int*,int,int) ;

__attribute__((used)) static Datum
FUNC_5(WorkerNode *VAR_1, TupleDesc VAR_2)
{
 Datum VAR_3[VAR_0];
 bool VAR_4[VAR_0];
 HeapTuple VAR_5 = ((void*)0);
 Datum VAR_6 = 0;

 FUNC_4(VAR_3, 0, sizeof(VAR_3));
 FUNC_4(VAR_4, 0, sizeof(VAR_4));

 VAR_3[0] = FUNC_0(VAR_1->workerName);
 VAR_3[1] = FUNC_2((int64) VAR_1->workerPort);

 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4);
 VAR_6 = FUNC_1(VAR_5);

 return VAR_6;
}
