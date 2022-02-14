
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int JSON_VALUE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char**) ;
 int * FUNC_1 (char**,scalar_t__) ;
 int * FUNC_2 (char**) ;
 int * FUNC_3 (char**) ;
 int * FUNC_4 (char**) ;
 int * FUNC_5 (char**,scalar_t__) ;
 int * FUNC_6 (char**) ;

__attribute__((used)) static JSON_VALUE * FUNC_7(char **VAR_1, UINT VAR_2) {
 if (VAR_2 > VAR_0) {
  return ((void*)0);
 }
 FUNC_0(VAR_1);
 switch (**VAR_1) {
 case '{':
  return FUNC_5(VAR_1, VAR_2 + 1);
 case '[':
  return FUNC_1(VAR_1, VAR_2 + 1);
 case '\"':
  return FUNC_6(VAR_1);
 case 'f': case 't':
  return FUNC_2(VAR_1);
 case '-':
 case '0': case '1': case '2': case '3': case '4':
 case '5': case '6': case '7': case '8': case '9':
  return FUNC_4(VAR_1);
 case 'n':
  return FUNC_3(VAR_1);
 default:
  return ((void*)0);
 }
}
