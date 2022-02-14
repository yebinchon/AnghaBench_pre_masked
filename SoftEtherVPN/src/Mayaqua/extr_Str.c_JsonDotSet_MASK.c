
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int JSON_VALUE ;
typedef int JSON_OBJECT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*) ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,char*,int *) ;
 scalar_t__ FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,scalar_t__) ;
 char* FUNC_7 (char*,char) ;

UINT FUNC_8(JSON_OBJECT *VAR_1, char *VAR_2, JSON_VALUE *VAR_3) {
 char *VAR_4 = ((void*)0);
 char *VAR_5 = ((void*)0);
 JSON_OBJECT *VAR_6 = ((void*)0);
 JSON_VALUE *VAR_7 = ((void*)0);
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
  return VAR_0;
 }
 VAR_4 = FUNC_7(VAR_2, '.');
 if (VAR_4 == ((void*)0)) {
  return FUNC_3(VAR_1, VAR_2, VAR_3);
 }
 else {
  VAR_5 = FUNC_6(VAR_2, (UINT)(VAR_4 - VAR_2));
  VAR_6 = FUNC_1(VAR_1, VAR_5);
  if (VAR_6 == ((void*)0)) {
   VAR_7 = FUNC_2();
   if (VAR_7 == ((void*)0)) {
    FUNC_5(VAR_5);
    return VAR_0;
   }
   if (FUNC_4(VAR_1, VAR_5, VAR_7) == VAR_0) {
    FUNC_0(VAR_7);
    FUNC_5(VAR_5);
    return VAR_0;
   }
   VAR_6 = FUNC_1(VAR_1, VAR_5);
  }
  FUNC_5(VAR_5);
  return FUNC_8(VAR_6, VAR_4 + 1, VAR_3);
 }
}
