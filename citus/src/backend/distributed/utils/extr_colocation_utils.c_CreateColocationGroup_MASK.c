
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int values ;
typedef int uint32 ;
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
 int FUNC_0 (int *,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *) ;
 int VAR_5 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 (int *,int*,int*) ;
 int * FUNC_9 (int ,int ) ;
 int FUNC_10 (int*,int,int) ;

uint32
FUNC_11(int VAR_6, int VAR_7, Oid VAR_8)
{
 uint32 VAR_9 = FUNC_3();
 Relation VAR_10 = ((void*)0);
 TupleDesc VAR_11 = ((void*)0);
 HeapTuple VAR_12 = ((void*)0);
 Datum VAR_13[VAR_4];
 bool VAR_14[VAR_4];


 FUNC_10(VAR_13, 0, sizeof(VAR_13));
 FUNC_10(VAR_14, 0, sizeof(VAR_14));

 VAR_13[VAR_0 - 1] = FUNC_6(VAR_9);
 VAR_13[VAR_3 - 1] = FUNC_6(VAR_6);
 VAR_13[VAR_2 - 1] =
  FUNC_6(VAR_7);
 VAR_13[VAR_1 - 1] =
  FUNC_4(VAR_8);


 VAR_10 = FUNC_9(FUNC_2(), VAR_5);

 VAR_11 = FUNC_5(VAR_10);
 VAR_12 = FUNC_8(VAR_11, VAR_13, VAR_14);

 FUNC_0(VAR_10, VAR_12);


 FUNC_1();
 FUNC_7(VAR_10, VAR_5);

 return VAR_9;
}
