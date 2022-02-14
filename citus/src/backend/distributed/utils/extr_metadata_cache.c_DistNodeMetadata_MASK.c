
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * TupleDesc ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef scalar_t__ Oid ;
typedef int * HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int *,int*) ;
 int * FUNC_8 (scalar_t__,int ) ;
 int * FUNC_9 (int *,scalar_t__,int,int *,int const,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;

Datum
FUNC_12(void)
{
 Datum VAR_5 = 0;
 SysScanDesc VAR_6 = ((void*)0);
 ScanKeyData VAR_7[1];
 const int VAR_8 = 0;
 HeapTuple VAR_9 = ((void*)0);
 Oid VAR_10 = VAR_3;
 Relation VAR_11 = ((void*)0);
 TupleDesc VAR_12 = ((void*)0);

 VAR_10 = FUNC_5("pg_dist_node_metadata",
           VAR_4);
 if (VAR_10 == VAR_3)
 {
  FUNC_3(VAR_2, (FUNC_4("pg_dist_node_metadata was not found")));
 }

 VAR_11 = FUNC_8(VAR_10, VAR_0);
 VAR_6 = FUNC_9(VAR_11,
          VAR_3, 0,
          ((void*)0), VAR_8, VAR_7);
 VAR_12 = FUNC_2(VAR_11);

 VAR_9 = FUNC_11(VAR_6);
 if (FUNC_1(VAR_9))
 {
  bool VAR_13 = 0;
  VAR_5 = FUNC_7(VAR_9, VAR_1,
        VAR_12, &VAR_13);
  FUNC_0(!VAR_13);
 }
 else
 {
  FUNC_3(VAR_2, (FUNC_4(
       "could not find any entries in pg_dist_metadata")));
 }

 FUNC_10(VAR_6);
 FUNC_6(VAR_11, VAR_0);

 return VAR_5;
}
