
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int values ;
typedef int uint64 ;
typedef int text ;
typedef int isNulls ;
typedef int * TupleDesc ;
typedef int * Relation ;
typedef int Oid ;
typedef int * HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int VAR_8 ;
 int FUNC_9 (int *,int ) ;
 int * FUNC_10 (int *,int*,int*) ;
 int * FUNC_11 (int ,int ) ;
 int FUNC_12 (int*,int,int) ;

void
FUNC_13(Oid VAR_9, uint64 VAR_10, char VAR_11,
      text *VAR_12, text *VAR_13)
{
 Relation VAR_14 = ((void*)0);
 TupleDesc VAR_15 = ((void*)0);
 HeapTuple VAR_16 = ((void*)0);
 Datum VAR_17[VAR_6];
 bool VAR_18[VAR_6];


 FUNC_12(VAR_17, 0, sizeof(VAR_17));
 FUNC_12(VAR_18, 0, sizeof(VAR_18));

 VAR_17[VAR_0 - 1] = FUNC_6(VAR_9);
 VAR_17[VAR_2 - 1] = FUNC_5(VAR_10);
 VAR_17[VAR_5 - 1] = FUNC_1(VAR_11);


 VAR_18[VAR_1 - 1] = 1;


 if (VAR_12 != ((void*)0) && VAR_13 != ((void*)0))
 {
  VAR_17[VAR_4 - 1] = FUNC_7(VAR_12);
  VAR_17[VAR_3 - 1] = FUNC_7(VAR_13);
 }
 else
 {
  VAR_18[VAR_4 - 1] = 1;
  VAR_18[VAR_3 - 1] = 1;
 }


 VAR_14 = FUNC_11(FUNC_4(), VAR_8);

 VAR_15 = FUNC_8(VAR_14);
 VAR_16 = FUNC_10(VAR_15, VAR_17, VAR_18);

 FUNC_0(VAR_14, VAR_16);


 FUNC_2(VAR_9);

 FUNC_3();
 FUNC_9(VAR_14, VAR_7);
}
