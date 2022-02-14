
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT64 ;
typedef int UINT ;
typedef int JSON_VALUE ;
typedef int JSON_OBJECT ;
typedef int JSON_ARRAY ;
 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *,int) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,char*) ;

int FUNC_12(JSON_VALUE *VAR_0, JSON_VALUE *VAR_1) {
 JSON_OBJECT *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
 JSON_ARRAY *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 char *VAR_8 = ((void*)0);
 UINT VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 UINT VAR_12, VAR_13;
 UINT64 VAR_14, VAR_15;
 VAR_12 = FUNC_10(VAR_0);
 VAR_13 = FUNC_10(VAR_1);
 if (VAR_12 != VAR_13) {
  return 0;
 }
 switch (VAR_12) {
 case 134:
  VAR_4 = FUNC_5(VAR_0);
  VAR_5 = FUNC_5(VAR_1);
  VAR_9 = FUNC_1(VAR_4);
  VAR_10 = FUNC_1(VAR_5);
  if (VAR_9 != VAR_10) {
   return 0;
  }
  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
   if (!FUNC_12(FUNC_0(VAR_4, VAR_11),
    FUNC_0(VAR_5, VAR_11))) {
     return 0;
   }
  }
  return 1;
 case 129:
  VAR_2 = FUNC_8(VAR_0);
  VAR_3 = FUNC_8(VAR_1);
  VAR_9 = FUNC_3(VAR_2);
  VAR_10 = FUNC_3(VAR_3);
  if (VAR_9 != VAR_10) {
   return 0;
  }
  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
   VAR_8 = FUNC_4(VAR_2, VAR_11);
   if (!FUNC_12(FUNC_2(VAR_2, VAR_8),
    FUNC_2(VAR_3, VAR_8))) {
     return 0;
   }
  }
  return 1;
 case 128:
  VAR_6 = FUNC_9(VAR_0);
  VAR_7 = FUNC_9(VAR_1);
  if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
   return 0;
  }
  return FUNC_11(VAR_6, VAR_7) == 0;
 case 133:
  return FUNC_6(VAR_0) == FUNC_6(VAR_1);
 case 130:
  VAR_14 = FUNC_7(VAR_0);
  VAR_15 = FUNC_7(VAR_1);
  return VAR_14 == VAR_15;
 case 132:
  return 1;
 case 131:
  return 1;
 default:
  return 1;
 }
}
