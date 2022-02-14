
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int TupleDesc ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef int List ;
typedef int * HeapTuple ;
typedef int GroupShardPlacement ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int * FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 (int ,int ) ;
 int * FUNC_9 (int *,int *) ;
 int * FUNC_10 (int *,int ,int,int *,int,int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;

List *
FUNC_13(int32 VAR_6)
{
 List *VAR_7 = VAR_4;
 Relation VAR_8 = ((void*)0);
 SysScanDesc VAR_9 = ((void*)0);
 ScanKeyData VAR_10[1];
 int VAR_11 = 1;
 bool VAR_12 = 1;
 HeapTuple VAR_13 = ((void*)0);

 VAR_8 = FUNC_8(FUNC_1(), VAR_0);

 FUNC_5(&VAR_10[0], VAR_1,
    VAR_2, VAR_3, FUNC_3(VAR_6));

 VAR_9 = FUNC_10(VAR_8,
          FUNC_0(), VAR_12,
          ((void*)0), VAR_11, VAR_10);

 VAR_13 = FUNC_12(VAR_9);
 while (FUNC_2(VAR_13))
 {
  TupleDesc VAR_14 = FUNC_4(VAR_8);

  GroupShardPlacement *VAR_15 =
   FUNC_6(VAR_14, VAR_13);

  VAR_7 = FUNC_9(VAR_7, VAR_15);

  VAR_13 = FUNC_12(VAR_9);
 }

 FUNC_11(VAR_9);
 FUNC_7(VAR_8, VAR_5);

 return VAR_7;
}
