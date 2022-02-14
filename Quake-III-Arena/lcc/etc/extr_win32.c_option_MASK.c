
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 char* FUNC_0 (char*,char*) ;
 char** VAR_1 ;
 char** VAR_2 ;
 char** VAR_3 ;
 char* FUNC_1 (char*,char,char) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

int FUNC_5(char *VAR_4) {
 if (FUNC_4(VAR_4, "-lccdir=", 8) == 0) {
  VAR_4 = FUNC_1(VAR_4 + 8, '/', '\\');
  if (VAR_4[FUNC_3(VAR_4)-1] == '\\')
   VAR_4[FUNC_3(VAR_4)-1] = '\0';
  VAR_1[0] = FUNC_0(VAR_4, "\\cpp.exe");
  VAR_2[0] = FUNC_0("-I", FUNC_0(VAR_4, "\\include"));
  VAR_0[0] = FUNC_0(VAR_4, "\\rcc.exe");
  VAR_3[8] = FUNC_0(VAR_4, "\\liblcc.lib");
 } else if (FUNC_2(VAR_4, "-b") == 0)
  ;
 else if (FUNC_4(VAR_4, "-ld=", 4) == 0)
  VAR_3[0] = &VAR_4[4];
 else
  return 0;
 return 1;
}
