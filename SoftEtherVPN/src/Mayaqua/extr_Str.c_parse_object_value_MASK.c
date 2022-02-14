
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int JSON_VALUE ;
typedef int JSON_OBJECT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (char**) ;
 char* FUNC_6 (char**) ;
 scalar_t__ FUNC_7 (int *,char*,int *) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int * FUNC_9 (char**,int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static JSON_VALUE * FUNC_11(char **VAR_1, UINT VAR_2) {
 JSON_VALUE *VAR_3 = FUNC_2(), *VAR_4 = ((void*)0);
 JSON_OBJECT *VAR_5 = FUNC_3(VAR_3);
 char *VAR_6 = ((void*)0);
 if (VAR_3 == ((void*)0) || **VAR_1 != '{') {
  return ((void*)0);
 }
 FUNC_4(VAR_1);
 FUNC_5(VAR_1);
 if (**VAR_1 == '}') {
  FUNC_4(VAR_1);
  return VAR_3;
 }
 while (**VAR_1 != '\0') {
  VAR_6 = FUNC_6(VAR_1);
  if (VAR_6 == ((void*)0)) {
   FUNC_0(VAR_3);
   return ((void*)0);
  }
  FUNC_5(VAR_1);
  if (**VAR_1 != ':') {
   FUNC_10(VAR_6);
   FUNC_0(VAR_3);
   return ((void*)0);
  }
  FUNC_4(VAR_1);
  VAR_4 = FUNC_9(VAR_1, VAR_2);
  if (VAR_4 == ((void*)0)) {
   FUNC_10(VAR_6);
   FUNC_0(VAR_3);
   return ((void*)0);
  }
  if (FUNC_7(VAR_5, VAR_6, VAR_4) == VAR_0) {
   FUNC_10(VAR_6);
   FUNC_0(VAR_4);
   FUNC_0(VAR_3);
   return ((void*)0);
  }
  FUNC_10(VAR_6);
  FUNC_5(VAR_1);
  if (**VAR_1 != ',') {
   break;
  }
  FUNC_4(VAR_1);
  FUNC_5(VAR_1);
 }
 FUNC_5(VAR_1);
 if (**VAR_1 != '}' ||
  FUNC_8(VAR_5, FUNC_1(VAR_5)) == VAR_0) {
   FUNC_0(VAR_3);
   return ((void*)0);
 }
 FUNC_4(VAR_1);
 return VAR_3;
}
