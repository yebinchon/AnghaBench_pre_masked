
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int JSON_VALUE ;
typedef int JSON_OBJECT ;
typedef int JSON_ARRAY ;


 int VAR_0 ;
 int VAR_1 ;







 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *,int) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

UINT FUNC_8(JSON_VALUE *VAR_2, JSON_VALUE *VAR_3) {
 JSON_VALUE *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 JSON_ARRAY *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 JSON_OBJECT *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 UINT VAR_10 = 132, VAR_11 = 132;
 char *VAR_12 = ((void*)0);
 UINT VAR_13 = 0, VAR_14 = 0;
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
  return VAR_0;
 }
 VAR_10 = FUNC_7(VAR_2);
 VAR_11 = FUNC_7(VAR_3);
 if (VAR_10 != VAR_11 && VAR_10 != 131) {
  return VAR_0;
 }
 switch (VAR_10) {
 case 134:
  VAR_6 = FUNC_5(VAR_2);
  VAR_7 = FUNC_5(VAR_3);
  VAR_14 = FUNC_1(VAR_6);
  if (VAR_14 == 0) {
   return VAR_1;
  }

  VAR_4 = FUNC_0(VAR_6, 0);
  for (VAR_13 = 0; VAR_13 < FUNC_1(VAR_7); VAR_13++) {
   VAR_5 = FUNC_0(VAR_7, VAR_13);
   if (FUNC_8(VAR_4, VAR_5) == VAR_0) {
    return VAR_0;
   }
  }
  return VAR_1;
 case 129:
  VAR_8 = FUNC_6(VAR_2);
  VAR_9 = FUNC_6(VAR_3);
  VAR_14 = FUNC_3(VAR_8);
  if (VAR_14 == 0) {
   return VAR_1;
  }
  else if (FUNC_3(VAR_9) < VAR_14) {
   return VAR_0;
  }
  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
   VAR_12 = FUNC_4(VAR_8, VAR_13);
   VAR_4 = FUNC_2(VAR_8, VAR_12);
   VAR_5 = FUNC_2(VAR_9, VAR_12);
   if (VAR_5 == ((void*)0)) {
    return VAR_0;
   }
   if (FUNC_8(VAR_4, VAR_5) == VAR_0) {
    return VAR_0;
   }
  }
  return VAR_1;
 case 128: case 130: case 133: case 131:
  return VAR_1;
 case 132: default:
  return VAR_0;
 }
}
