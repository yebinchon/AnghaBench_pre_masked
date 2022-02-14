
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int JSON_VALUE ;
typedef int JSON_ARRAY ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (char**) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int * FUNC_8 (char**,int ) ;

__attribute__((used)) static JSON_VALUE * FUNC_9(char **VAR_1, UINT VAR_2) {
 JSON_VALUE *VAR_3 = FUNC_2(), *VAR_4 = ((void*)0);
 JSON_ARRAY *VAR_5 = FUNC_3(VAR_3);
 if (!VAR_3 || **VAR_1 != '[') {
  return ((void*)0);
 }
 FUNC_4(VAR_1);
 FUNC_5(VAR_1);
 if (**VAR_1 == ']') {
  FUNC_4(VAR_1);
  return VAR_3;
 }
 while (**VAR_1 != '\0') {
  VAR_4 = FUNC_8(VAR_1, VAR_2);
  if (VAR_4 == ((void*)0)) {
   FUNC_1(VAR_3);
   return ((void*)0);
  }
  if (FUNC_6(VAR_5, VAR_4) == VAR_0) {
   FUNC_1(VAR_4);
   FUNC_1(VAR_3);
   return ((void*)0);
  }
  FUNC_5(VAR_1);
  if (**VAR_1 != ',') {
   break;
  }
  FUNC_4(VAR_1);
  FUNC_5(VAR_1);
 }
 FUNC_5(VAR_1);
 if (**VAR_1 != ']' ||
  FUNC_7(VAR_5, FUNC_0(VAR_5)) == VAR_0) {
   FUNC_1(VAR_3);
   return ((void*)0);
 }
 FUNC_4(VAR_1);
 return VAR_3;
}
