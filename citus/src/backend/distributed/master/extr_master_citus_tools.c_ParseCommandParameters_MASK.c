
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int int32 ;
typedef int StringInfo ;
typedef int FunctionCallInfo ;
typedef int Datum ;
typedef int ArrayType ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;
 void* FUNC_11 (int) ;
 char* FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(FunctionCallInfo VAR_2, StringInfo **VAR_3,
        int **VAR_4, StringInfo **VAR_5,
        bool *VAR_6)
{
 ArrayType *VAR_7 = FUNC_4(0);
 ArrayType *VAR_8 = FUNC_4(1);
 ArrayType *VAR_9 = FUNC_4(2);
 bool VAR_10 = FUNC_5(3);
 int VAR_11 = FUNC_0(VAR_7);
 int VAR_12 = FUNC_0(VAR_8);
 int VAR_13 = FUNC_0(VAR_9);
 Datum *VAR_14 = FUNC_3(VAR_7);
 Datum *VAR_15 = FUNC_3(VAR_8);
 Datum *VAR_16 = FUNC_3(VAR_9);
 int VAR_17 = 0;
 StringInfo *VAR_18 = ((void*)0);
 int *VAR_19 = ((void*)0);
 StringInfo *VAR_20 = ((void*)0);

 if (VAR_11 != VAR_12 || VAR_11 != VAR_13)
 {
  FUNC_7(VAR_1,
    (FUNC_8(VAR_0),
     FUNC_9("expected same number of node name, port, and query string")));
 }

 VAR_18 = FUNC_11(VAR_11 * sizeof(StringInfo));
 VAR_19 = FUNC_11(VAR_11 * sizeof(int));
 VAR_20 = FUNC_11(VAR_11 * sizeof(StringInfo));

 for (VAR_17 = 0; VAR_17 < VAR_11; VAR_17++)
 {
  text *VAR_21 = FUNC_2(VAR_14[VAR_17]);
  char *VAR_22 = FUNC_12(VAR_21);
  int32 VAR_23 = FUNC_1(VAR_15[VAR_17]);
  text *VAR_24 = FUNC_2(VAR_16[VAR_17]);
  char *VAR_25 = FUNC_12(VAR_24);

  VAR_18[VAR_17] = FUNC_10();
  VAR_20[VAR_17] = FUNC_10();

  FUNC_6(VAR_18[VAR_17], "%s", VAR_22);
  VAR_19[VAR_17] = VAR_23;
  FUNC_6(VAR_20[VAR_17], "%s", VAR_25);
 }

 *VAR_3 = VAR_18;
 *VAR_4 = VAR_19;
 *VAR_5 = VAR_20;
 *VAR_6 = VAR_10;

 return VAR_11;
}
