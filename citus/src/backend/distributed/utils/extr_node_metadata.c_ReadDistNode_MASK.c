
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nodeCluster; } ;
typedef TYPE_1__ WorkerNode ;
typedef int * TupleDesc ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int List ;
typedef int * HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *,int *) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 int * FUNC_8 (int ,int ,int,int *,int,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;

List *
FUNC_11(bool VAR_6)
{
 SysScanDesc VAR_7 = ((void*)0);
 ScanKeyData VAR_8[1];
 int VAR_9 = 0;
 HeapTuple VAR_10 = ((void*)0);
 List *VAR_11 = VAR_3;
 TupleDesc VAR_12 = ((void*)0);

 Relation VAR_13 = FUNC_5(FUNC_0(), VAR_0);

 VAR_7 = FUNC_8(VAR_13,
          VAR_2, 0,
          ((void*)0), VAR_9, VAR_8);

 VAR_12 = FUNC_2(VAR_13);

 VAR_10 = FUNC_10(VAR_7);
 while (FUNC_1(VAR_10))
 {
  WorkerNode *VAR_14 = FUNC_3(VAR_12, VAR_10);

  if (VAR_6 ||
   FUNC_7(VAR_14->nodeCluster, VAR_1, VAR_5) == 0)
  {

   VAR_11 = FUNC_6(VAR_11, VAR_14);
  }

  VAR_10 = FUNC_10(VAR_7);
 }

 FUNC_9(VAR_7);
 FUNC_4(VAR_13, VAR_4);

 return VAR_11;
}
