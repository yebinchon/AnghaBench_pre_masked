
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int JSON_VALUE ;
typedef int JSON_OBJECT ;
typedef int JSON_ARRAY ;


 int VAR_0 ;







 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *,int ) ;
 int * FUNC_6 () ;
 int * FUNC_7 (int ) ;
 int * FUNC_8 () ;
 int * FUNC_9 (int ) ;
 int * FUNC_10 () ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 char* FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,char*,int *) ;
 int * FUNC_19 (char*) ;
 int FUNC_20 (char*) ;
 char* FUNC_21 (char*) ;

JSON_VALUE * FUNC_22(JSON_VALUE *VAR_1) {
 UINT VAR_2 = 0;
 JSON_VALUE *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 char *VAR_8 = ((void*)0);
 JSON_ARRAY *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 JSON_OBJECT *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);

 switch (FUNC_16(VAR_1)) {
 case 134:
  VAR_9 = FUNC_11(VAR_1);
  VAR_3 = FUNC_6();
  if (VAR_3 == ((void*)0)) {
   return ((void*)0);
  }
  VAR_10 = FUNC_11(VAR_3);
  for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_9); VAR_2++) {
   VAR_5 = FUNC_0(VAR_9, VAR_2);
   VAR_4 = FUNC_22(VAR_5);
   if (VAR_4 == ((void*)0)) {
    FUNC_2(VAR_3);
    return ((void*)0);
   }
   if (FUNC_17(VAR_10, VAR_4) == VAR_0) {
    FUNC_2(VAR_3);
    FUNC_2(VAR_4);
    return ((void*)0);
   }
  }
  return VAR_3;
 case 129:
  VAR_11 = FUNC_14(VAR_1);
  VAR_3 = FUNC_10();
  if (VAR_3 == ((void*)0)) {
   return ((void*)0);
  }
  VAR_12 = FUNC_14(VAR_3);
  for (VAR_2 = 0; VAR_2 < FUNC_4(VAR_11); VAR_2++) {
   VAR_7 = FUNC_5(VAR_11, VAR_2);
   VAR_5 = FUNC_3(VAR_11, VAR_7);
   VAR_4 = FUNC_22(VAR_5);
   if (VAR_4 == ((void*)0)) {
    FUNC_2(VAR_3);
    return ((void*)0);
   }
   if (FUNC_18(VAR_12, VAR_7, VAR_4) == VAR_0) {
    FUNC_2(VAR_3);
    FUNC_2(VAR_4);
    return ((void*)0);
   }
  }
  return VAR_3;
 case 133:
  return FUNC_7(FUNC_12(VAR_1));
 case 130:
  return FUNC_9(FUNC_13(VAR_1));
 case 128:
  VAR_6 = FUNC_15(VAR_1);
  if (VAR_6 == ((void*)0)) {
   return ((void*)0);
  }
  VAR_8 = FUNC_21(VAR_6);
  if (VAR_8 == ((void*)0)) {
   return ((void*)0);
  }
  VAR_3 = FUNC_19(VAR_8);
  if (VAR_3 == ((void*)0)) {
   FUNC_20(VAR_8);
  }
  return VAR_3;
 case 131:
  return FUNC_8();
 case 132:
  return ((void*)0);
 default:
  return ((void*)0);
 }
}
