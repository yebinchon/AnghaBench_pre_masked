
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int JSON_VALUE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int ) ;

JSON_VALUE * FUNC_5(char *VAR_0) {
 char *VAR_1 = ((void*)0);
 JSON_VALUE *VAR_2;
 UINT VAR_3 = 0;
 if (VAR_0 == ((void*)0)) {
  return ((void*)0);
 }
 VAR_3 = FUNC_0(VAR_0);
 if (!FUNC_1(VAR_0, VAR_3)) {
  return ((void*)0);
 }
 VAR_1 = FUNC_4(VAR_0, VAR_3);
 if (VAR_1 == ((void*)0)) {
  return ((void*)0);
 }
 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 == ((void*)0)) {
  FUNC_3(VAR_1);
 }
 return VAR_2;
}
