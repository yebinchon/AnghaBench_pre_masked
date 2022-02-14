
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int newValues ;
typedef int newNulls ;
typedef int Var ;
typedef int * Relation ;
typedef int Oid ;
typedef int Node ;
typedef int * HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 char VAR_5 ;
 int FUNC_5 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 int VAR_8 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ) ;
 int * FUNC_12 (int ,int*,int*) ;
 int * FUNC_13 (int ,int ) ;
 int FUNC_14 (int*,int,int) ;
 char* FUNC_15 (int *) ;

void
FUNC_16(Oid VAR_9, char VAR_10,
        Var *VAR_11, uint32 VAR_12,
        char VAR_13)
{
 Relation VAR_14 = ((void*)0);
 char *VAR_15 = ((void*)0);

 HeapTuple VAR_16 = ((void*)0);
 Datum VAR_17[VAR_6];
 bool VAR_18[VAR_6];


 VAR_14 = FUNC_13(FUNC_5(), VAR_8);


 FUNC_14(VAR_17, 0, sizeof(VAR_17));
 FUNC_14(VAR_18, 0, sizeof(VAR_18));

 VAR_17[VAR_1 - 1] =
  FUNC_6(VAR_9);
 VAR_17[VAR_3 - 1] =
  FUNC_2(VAR_10);
 VAR_17[VAR_0 - 1] = FUNC_10(VAR_12);
 VAR_17[VAR_4 - 1] = FUNC_2(VAR_13);


 if (VAR_10 != VAR_5)
 {
  VAR_15 = FUNC_15((Node *) VAR_11);

  VAR_17[VAR_2 - 1] =
   FUNC_0(VAR_15);
 }
 else
 {
  VAR_17[VAR_2 - 1] = FUNC_7(((void*)0));
  VAR_18[VAR_2 - 1] = 1;
 }

 VAR_16 = FUNC_12(FUNC_9(VAR_14), VAR_17, VAR_18);


 FUNC_1(VAR_14, VAR_16);

 FUNC_3(VAR_9);

 FUNC_8(VAR_9, (Node *) VAR_11);

 FUNC_4();
 FUNC_11(VAR_14, VAR_7);
}
