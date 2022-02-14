
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 scalar_t__ FUNC_0 (char*,char) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, UINT VAR_1) {
 if (VAR_1 > 1 && VAR_0[0] == '0' && VAR_0[1] != '.') {
  return 0;
 }
 if (VAR_1 > 2 && !FUNC_1(VAR_0, "-0", 2) && VAR_0[2] != '.') {
  return 0;
 }
 while (VAR_1--) {
  if (FUNC_0("xX", VAR_0[VAR_1])) {
   return 0;
  }
 }
 return 1;
}
