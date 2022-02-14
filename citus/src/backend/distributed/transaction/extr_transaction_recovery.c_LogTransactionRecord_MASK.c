
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int values ;
typedef int isNulls ;
typedef int int32 ;
typedef int * TupleDesc ;
typedef int * Relation ;
typedef int * HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (int *,int*,int*) ;
 int * FUNC_8 (int ,int ) ;
 int FUNC_9 (int*,int,int) ;

void
FUNC_10(int32 VAR_5, char *VAR_6)
{
 Relation VAR_7 = ((void*)0);
 TupleDesc VAR_8 = ((void*)0);
 HeapTuple VAR_9 = ((void*)0);
 Datum VAR_10[VAR_2];
 bool VAR_11[VAR_2];


 FUNC_9(VAR_10, 0, sizeof(VAR_10));
 FUNC_9(VAR_11, 0, sizeof(VAR_11));

 VAR_10[VAR_1 - 1] = FUNC_4(VAR_5);
 VAR_10[VAR_0 - 1] = FUNC_0(VAR_6);


 VAR_7 = FUNC_8(FUNC_3(), VAR_4);

 VAR_8 = FUNC_5(VAR_7);
 VAR_9 = FUNC_7(VAR_8, VAR_10, VAR_11);

 FUNC_1(VAR_7, VAR_9);

 FUNC_2();


 FUNC_6(VAR_7, VAR_3);
}
