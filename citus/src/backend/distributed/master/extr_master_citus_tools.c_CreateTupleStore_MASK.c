
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int text ;
typedef int Tuplestorestate ;
typedef int TupleDesc ;
struct TYPE_4__ {int len; int data; } ;
typedef TYPE_1__* StringInfo ;
typedef int * HeapTuple ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ) ;
 int * FUNC_4 (int ,int *,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static Tuplestorestate *
FUNC_10(TupleDesc VAR_1,
     StringInfo *VAR_2, int *VAR_3, bool *VAR_4,
     StringInfo *VAR_5, int VAR_6)
{
 Tuplestorestate *VAR_7 = FUNC_7(1, 0, VAR_0);
 int VAR_8 = 0;
 bool VAR_9[4] = { 0, 0, 0, 0 };

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
 {
  Datum VAR_10[4];
  HeapTuple VAR_11 = ((void*)0);
  StringInfo VAR_12 = VAR_2[VAR_8];
  StringInfo VAR_13 = VAR_5[VAR_8];
  text *VAR_14 = FUNC_3(VAR_12->data,
               VAR_12->len);
  text *VAR_15 = FUNC_3(VAR_13->data,
             VAR_13->len);

  VAR_10[0] = FUNC_2(VAR_14);
  VAR_10[1] = FUNC_1(VAR_3[VAR_8]);
  VAR_10[2] = FUNC_0(VAR_4[VAR_8]);
  VAR_10[3] = FUNC_2(VAR_15);

  VAR_11 = FUNC_4(VAR_1, VAR_10, VAR_9);
  FUNC_9(VAR_7, VAR_11);

  FUNC_5(VAR_11);
  FUNC_6(VAR_14);
  FUNC_6(VAR_15);
 }

 FUNC_8(VAR_7);

 return VAR_7;
}
