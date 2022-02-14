
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**) ;

__attribute__((used)) static UINT FUNC_1(char **VAR_2) {
 if (**VAR_2 != '\"') {
  return VAR_0;
 }
 FUNC_0(VAR_2);
 while (**VAR_2 != '\"') {
  if (**VAR_2 == '\0') {
   return VAR_0;
  }
  else if (**VAR_2 == '\\') {
   FUNC_0(VAR_2);
   if (**VAR_2 == '\0') {
    return VAR_0;
   }
  }
  FUNC_0(VAR_2);
 }
 FUNC_0(VAR_2);
 return VAR_1;
}
