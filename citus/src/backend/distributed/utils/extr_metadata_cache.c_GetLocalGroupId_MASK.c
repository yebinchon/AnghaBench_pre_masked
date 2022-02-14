
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int * TupleDesc ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef scalar_t__ Oid ;
typedef int * HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int *,int*) ;
 int * FUNC_7 (scalar_t__,int ) ;
 int * FUNC_8 (int *,scalar_t__,int,int *,int,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;

int32
FUNC_11(void)
{
 SysScanDesc VAR_6 = ((void*)0);
 ScanKeyData VAR_7[1];
 int VAR_8 = 0;
 HeapTuple VAR_9 = ((void*)0);
 TupleDesc VAR_10 = ((void*)0);
 int32 VAR_11 = 0;
 Relation VAR_12 = ((void*)0);
 Oid VAR_13 = VAR_3;

 FUNC_2();




 if (VAR_4 != -1)
 {
  return VAR_4;
 }

 VAR_13 = FUNC_4("pg_dist_local_group", VAR_5);
 if (VAR_13 == VAR_3)
 {
  return 0;
 }

 VAR_12 = FUNC_7(VAR_13, VAR_0);

 VAR_6 = FUNC_8(VAR_12,
          VAR_3, 0,
          ((void*)0), VAR_8, VAR_7);

 VAR_10 = FUNC_3(VAR_12);

 VAR_9 = FUNC_10(VAR_6);

 if (FUNC_1(VAR_9))
 {
  bool VAR_14 = 0;
  Datum VAR_15 = FUNC_6(VAR_9,
            VAR_1,
            VAR_10, &VAR_14);

  VAR_11 = FUNC_0(VAR_15);


  VAR_4 = VAR_11;
 }
 else
 {




  VAR_11 = VAR_2;
 }

 FUNC_9(VAR_6);
 FUNC_5(VAR_12, VAR_0);

 return VAR_11;
}
