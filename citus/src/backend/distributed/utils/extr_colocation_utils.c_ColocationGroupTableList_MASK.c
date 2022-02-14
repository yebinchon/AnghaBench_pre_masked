
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * TupleDesc ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef scalar_t__ Oid ;
typedef int List ;
typedef int * HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int ,int *,int*) ;
 int * FUNC_8 (int ,int ) ;
 int * FUNC_9 (int *,scalar_t__) ;
 int * FUNC_10 (int *,int ,int,int *,int,int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;

__attribute__((used)) static List *
FUNC_13(Oid VAR_7)
{
 List *VAR_8 = VAR_6;
 Relation VAR_9 = ((void*)0);
 TupleDesc VAR_10 = ((void*)0);
 SysScanDesc VAR_11 = ((void*)0);
 HeapTuple VAR_12 = ((void*)0);
 bool VAR_13 = 1;
 int VAR_14 = 1;
 ScanKeyData VAR_15[1];





 if (VAR_7 == VAR_5)
 {
  return VAR_6;
 }

 FUNC_5(&VAR_15[0], VAR_1,
    VAR_3, VAR_4, FUNC_3(VAR_7));

 VAR_9 = FUNC_8(FUNC_1(), VAR_0);
 VAR_10 = FUNC_4(VAR_9);
 VAR_11 = FUNC_10(VAR_9,
          FUNC_0(),
          VAR_13, ((void*)0), VAR_14, VAR_15);

 VAR_12 = FUNC_12(VAR_11);
 while (FUNC_2(VAR_12))
 {
  bool VAR_16 = 0;
  Oid VAR_17 = FUNC_7(VAR_12,
           VAR_2,
           VAR_10, &VAR_16);

  VAR_8 = FUNC_9(VAR_8, VAR_17);
  VAR_12 = FUNC_12(VAR_11);
 }

 FUNC_11(VAR_11);
 FUNC_6(VAR_9, VAR_0);

 return VAR_8;
}
