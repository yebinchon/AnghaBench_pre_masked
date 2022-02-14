
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64 ;
typedef int TupleDesc ;
struct TYPE_3__ {int shardId; } ;
typedef int * SysScanDesc ;
typedef TYPE_1__ ShardInterval ;
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
FUNC_13(ShardInterval *VAR_6)
{
 int64 VAR_7 = VAR_6->shardId;
 List *VAR_8 = VAR_4;
 Relation VAR_9 = ((void*)0);
 SysScanDesc VAR_10 = ((void*)0);
 ScanKeyData VAR_11[1];
 int VAR_12 = 1;
 bool VAR_13 = 1;
 HeapTuple VAR_14 = ((void*)0);

 VAR_9 = FUNC_8(FUNC_0(), VAR_0);

 FUNC_5(&VAR_11[0], VAR_1,
    VAR_2, VAR_3, FUNC_3(VAR_7));

 VAR_10 = FUNC_10(VAR_9,
          FUNC_1(), VAR_13,
          ((void*)0), VAR_12, VAR_11);

 VAR_14 = FUNC_12(VAR_10);
 while (FUNC_2(VAR_14))
 {
  TupleDesc VAR_15 = FUNC_4(VAR_9);

  GroupShardPlacement *VAR_16 =
   FUNC_6(VAR_15, VAR_14);

  VAR_8 = FUNC_9(VAR_8, VAR_16);

  VAR_14 = FUNC_12(VAR_10);
 }

 FUNC_11(VAR_10);
 FUNC_7(VAR_9, VAR_5);

 return VAR_8;
}
