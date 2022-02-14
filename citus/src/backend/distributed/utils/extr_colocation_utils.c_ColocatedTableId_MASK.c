
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ,int ,int ) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int *,int ,int *,int*) ;
 int * FUNC_12 (int ,int ) ;
 int * FUNC_13 (int *,int ,int,int *,int,int *) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;

Oid
FUNC_16(Oid VAR_7)
{
 Oid VAR_8 = VAR_6;
 Relation VAR_9 = ((void*)0);
 TupleDesc VAR_10 = ((void*)0);
 SysScanDesc VAR_11 = ((void*)0);
 HeapTuple VAR_12 = ((void*)0);
 bool VAR_13 = 1;
 bool VAR_14 = 0;
 ScanKeyData VAR_15[1];
 int VAR_16 = 1;





 if (VAR_7 == VAR_5)
 {
  return VAR_8;
 }

 FUNC_9(&VAR_15[0], VAR_1,
    VAR_3, VAR_4, FUNC_4(VAR_7));

 VAR_9 = FUNC_12(FUNC_1(), VAR_0);
 VAR_10 = FUNC_6(VAR_9);
 VAR_11 = FUNC_13(VAR_9,
          FUNC_0(),
          VAR_13, ((void*)0), VAR_16, VAR_15);

 VAR_12 = FUNC_15(VAR_11);
 while (FUNC_2(VAR_12))
 {
  Relation VAR_17 = ((void*)0);

  VAR_8 = FUNC_11(VAR_12, VAR_2,
          VAR_10, &VAR_14);





  FUNC_3(VAR_8, VAR_0);





  VAR_17 = FUNC_7(VAR_8);
  if (FUNC_8(VAR_17))
  {

   FUNC_5(VAR_17);
   break;
  }


  VAR_8 = VAR_6;

  VAR_12 = FUNC_15(VAR_11);
 }

 FUNC_14(VAR_11);
 FUNC_10(VAR_9, VAR_0);

 return VAR_8;
}
