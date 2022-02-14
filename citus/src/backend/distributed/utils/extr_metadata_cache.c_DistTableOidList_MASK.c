
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * TupleDesc ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int List ;
typedef int * HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ,int *,int*) ;
 int FUNC_6 (int ,int ) ;
 int * FUNC_7 (int *,int ) ;
 int * FUNC_8 (int ,int ,int,int *,int,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;

List *
FUNC_11(void)
{
 SysScanDesc VAR_4 = ((void*)0);
 ScanKeyData VAR_5[1];
 int VAR_6 = 0;
 HeapTuple VAR_7 = ((void*)0);
 List *VAR_8 = VAR_3;
 TupleDesc VAR_9 = ((void*)0);

 Relation VAR_10 = FUNC_6(FUNC_1(), VAR_0);

 VAR_4 = FUNC_8(VAR_10,
          VAR_2, 0,
          ((void*)0), VAR_6, VAR_5);

 VAR_9 = FUNC_3(VAR_10);

 VAR_7 = FUNC_10(VAR_4);
 while (FUNC_2(VAR_7))
 {
  bool VAR_11 = 0;
  Oid VAR_12 = VAR_2;
  Datum VAR_13 = FUNC_5(VAR_7,
            VAR_1,
            VAR_9, &VAR_11);
  VAR_12 = FUNC_0(VAR_13);
  VAR_8 = FUNC_7(VAR_8, VAR_12);

  VAR_7 = FUNC_10(VAR_4);
 }

 FUNC_9(VAR_4);
 FUNC_4(VAR_10, VAR_0);

 return VAR_8;
}
