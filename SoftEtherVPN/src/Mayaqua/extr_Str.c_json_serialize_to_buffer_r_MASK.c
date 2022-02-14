
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT64 ;
typedef int UINT ;
typedef int JSON_VALUE ;
typedef int JSON_OBJECT ;
typedef int JSON_ARRAY ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;







 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *,int ) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 char* FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (char*,char*) ;

__attribute__((used)) static int FUNC_17(JSON_VALUE *VAR_0, char *VAR_1, int VAR_2, int VAR_3, char *VAR_4)
{
 char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 JSON_VALUE *VAR_7 = ((void*)0);
 JSON_ARRAY *VAR_8 = ((void*)0);
 JSON_OBJECT *VAR_9 = ((void*)0);
 UINT VAR_10 = 0, VAR_11 = 0;
 UINT64 VAR_12 = 0;
 int VAR_13 = -1, VAR_14 = 0;
 char VAR_15[32];

 switch (FUNC_13(VAR_0)) {
 case 134:
  VAR_8 = FUNC_8(VAR_0);
  VAR_11 = FUNC_4(VAR_8);
  FUNC_1("[");
  if (VAR_11 > 0 && VAR_3) {
   FUNC_1("\n");
  }
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
   if (VAR_3) {
    FUNC_0(VAR_2 + 1);
   }
   VAR_7 = FUNC_3(VAR_8, VAR_10);
   VAR_13 = FUNC_17(VAR_7, VAR_1, VAR_2 + 1, VAR_3, VAR_4);
   if (VAR_13 < 0) {
    return -1;
   }
   if (VAR_1 != ((void*)0)) {
    VAR_1 += VAR_13;
   }
   VAR_14 += VAR_13;
   if (VAR_10 < (VAR_11 - 1)) {
    FUNC_1(",");
   }
   if (VAR_3) {
    FUNC_1("\n");
   }
  }
  if (VAR_11 > 0 && VAR_3) {
   FUNC_0(VAR_2);
  }
  FUNC_1("]");
  return VAR_14;
 case 129:
  VAR_9 = FUNC_11(VAR_0);
  VAR_11 = FUNC_6(VAR_9);
  FUNC_1("{");
  if (VAR_11 > 0 && VAR_3) {
   FUNC_1("\n");
  }
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
   VAR_5 = FUNC_7(VAR_9, VAR_10);
   if (VAR_5 == ((void*)0)) {
    return -1;
   }
   if (VAR_3) {
    FUNC_0(VAR_2 + 1);
   }
   VAR_13 = FUNC_16(VAR_5, VAR_1);
   if (VAR_13 < 0) {
    return -1;
   }
   if (VAR_1 != ((void*)0)) {
    VAR_1 += VAR_13;
   }
   VAR_14 += VAR_13;
   FUNC_1(":");
   if (VAR_3) {
    FUNC_1(" ");
   }
   VAR_7 = FUNC_5(VAR_9, VAR_5);
   VAR_13 = FUNC_17(VAR_7, VAR_1, VAR_2 + 1, VAR_3, VAR_4);
   if (VAR_13 < 0) {
    return -1;
   }
   if (VAR_1 != ((void*)0)) {
    VAR_1 += VAR_13;
   }
   VAR_14 += VAR_13;
   if (VAR_10 < (VAR_11 - 1)) {
    FUNC_1(",");
   }
   if (VAR_3) {
    FUNC_1("\n");
   }
  }
  if (VAR_11 > 0 && VAR_3) {
   FUNC_0(VAR_2);
  }
  FUNC_1("}");
  return VAR_14;
 case 128:
  VAR_6 = FUNC_12(VAR_0);
  if (VAR_6 == ((void*)0)) {
   return -1;
  }
  VAR_13 = FUNC_16(VAR_6, VAR_1);
  if (VAR_13 < 0) {
   return -1;
  }
  if (VAR_1 != ((void*)0)) {
   VAR_1 += VAR_13;
  }
  VAR_14 += VAR_13;
  return VAR_14;
 case 133:
  if (FUNC_9(VAR_0)) {
   FUNC_1("true");
  }
  else {
   FUNC_1("false");
  }
  return VAR_14;
 case 130:
  VAR_12 = FUNC_10(VAR_0);
  if (VAR_1 != ((void*)0)) {
   VAR_4 = VAR_1;
  }
  FUNC_15(VAR_15, VAR_12);
  FUNC_2(VAR_4, VAR_15, FUNC_14(VAR_15));
  VAR_13 = FUNC_14(VAR_15);
  if (VAR_1 != ((void*)0)) {
   VAR_1 += VAR_13;
  }
  VAR_14 += VAR_13;
  return VAR_14;
 case 131:
  FUNC_1("null");
  return VAR_14;
 case 132:
  return -1;
 default:
  return -1;
 }
}
