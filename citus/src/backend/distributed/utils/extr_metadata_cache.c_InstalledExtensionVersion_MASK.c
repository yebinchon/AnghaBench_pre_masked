
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleDesc ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef int * MemoryContext ;
typedef int * HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 int * FUNC_4 (int *) ;
 int * VAR_9 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int,int ,int*) ;
 int * FUNC_12 (int ,int ) ;
 int FUNC_13 (int *,int ,int,int *,int,int *) ;
 int FUNC_14 (int ) ;
 int * FUNC_15 (int ) ;
 char* FUNC_16 (int ) ;

__attribute__((used)) static char *
FUNC_17(void)
{
 Relation VAR_10 = ((void*)0);
 SysScanDesc VAR_11;
 ScanKeyData VAR_12[1];
 HeapTuple VAR_13 = ((void*)0);
 char *VAR_14 = ((void*)0);

 FUNC_3();

 VAR_10 = FUNC_12(VAR_7, VAR_0);

 FUNC_6(&VAR_12[0], VAR_1, VAR_3, VAR_8,
    FUNC_0("citus"));

 VAR_11 = FUNC_13(VAR_10, VAR_6, 1,
          ((void*)0), 1, VAR_12);

 VAR_13 = FUNC_15(VAR_11);


 if (FUNC_2(VAR_13))
 {
  MemoryContext VAR_15 = ((void*)0);
  int VAR_16 = VAR_2;
  TupleDesc VAR_17 = FUNC_5(VAR_10);
  bool VAR_18 = 0;

  Datum VAR_19 = FUNC_11(VAR_13, VAR_16,
             VAR_17, &VAR_18);

  if (VAR_18)
  {
   FUNC_7(VAR_5, (FUNC_8(VAR_4),
       FUNC_9("citus extension version is null")));
  }


  VAR_15 = FUNC_4(VAR_9);

  VAR_14 = FUNC_16(FUNC_1(VAR_19));

  FUNC_4(VAR_15);
 }
 else
 {
  FUNC_7(VAR_5, (FUNC_8(VAR_4),
      FUNC_9("citus extension is not loaded")));
 }

 FUNC_14(VAR_11);

 FUNC_10(VAR_10, VAR_0);

 return VAR_14;
}
