
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int values ;
typedef scalar_t__ uint64 ;
typedef int isNulls ;
typedef int int32 ;
typedef int * TupleDesc ;
typedef int * Relation ;
typedef int * HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_7 (int *) ;
 int VAR_8 ;
 int FUNC_8 (int *,int ) ;
 int * FUNC_9 (int *,int*,int*) ;
 int * FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int*,int,int) ;

uint64
FUNC_13(uint64 VAR_9, uint64 VAR_10,
      char VAR_11, uint64 VAR_12,
      int32 VAR_13)
{
 Relation VAR_14 = ((void*)0);
 TupleDesc VAR_15 = ((void*)0);
 HeapTuple VAR_16 = ((void*)0);
 Datum VAR_17[VAR_6];
 bool VAR_18[VAR_6];


 FUNC_12(VAR_17, 0, sizeof(VAR_17));
 FUNC_12(VAR_18, 0, sizeof(VAR_18));

 if (VAR_10 == VAR_5)
 {
  VAR_10 = FUNC_11(((void*)0));
 }
 VAR_17[VAR_1 - 1] = FUNC_6(VAR_10);
 VAR_17[VAR_2 - 1] = FUNC_6(VAR_9);
 VAR_17[VAR_4 - 1] = FUNC_1(VAR_11);
 VAR_17[VAR_3 - 1] = FUNC_6(VAR_12);
 VAR_17[VAR_0 - 1] = FUNC_5(VAR_13);


 VAR_14 = FUNC_10(FUNC_4(), VAR_8);

 VAR_15 = FUNC_7(VAR_14);
 VAR_16 = FUNC_9(VAR_15, VAR_17, VAR_18);

 FUNC_0(VAR_14, VAR_16);

 FUNC_2(VAR_9);

 FUNC_3();
 FUNC_8(VAR_14, VAR_7);

 return VAR_10;
}
