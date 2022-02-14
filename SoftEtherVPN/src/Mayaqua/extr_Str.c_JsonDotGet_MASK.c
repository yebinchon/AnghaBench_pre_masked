
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int JSON_VALUE ;
typedef int JSON_OBJECT ;


 int * FUNC_0 (int *,char*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ) ;
 char* FUNC_3 (char*,char) ;

JSON_VALUE * FUNC_4(JSON_OBJECT *VAR_0, char *VAR_1) {
 char *VAR_2 = FUNC_3(VAR_1, '.');
 if (!VAR_2) {
  return FUNC_0(VAR_0, VAR_1);
 }
 VAR_0 = FUNC_1(FUNC_2(VAR_0, VAR_1, (UINT)(VAR_2 - VAR_1)));
 return FUNC_4(VAR_0, VAR_2 + 1);
}
