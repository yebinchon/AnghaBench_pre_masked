
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int JSON_VALUE ;


 int * FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,int ) ;

__attribute__((used)) static JSON_VALUE * FUNC_3(char **VAR_0) {
 UINT VAR_1 = FUNC_1("true");
 UINT VAR_2 = FUNC_1("false");
 if (FUNC_2("true", *VAR_0, VAR_1) == 0) {
  *VAR_0 += VAR_1;
  return FUNC_0(1);
 }
 else if (FUNC_2("false", *VAR_0, VAR_2) == 0) {
  *VAR_0 += VAR_2;
  return FUNC_0(0);
 }
 return ((void*)0);
}
