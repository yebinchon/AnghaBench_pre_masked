
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 char* FUNC_0 (char*,char*) ;
 char** VAR_1 ;
 char** VAR_2 ;
 char** VAR_3 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

int FUNC_3(char *VAR_4) {
 if (FUNC_2(VAR_4, "-lccdir=", 8) == 0) {
  VAR_1[0] = FUNC_0(&VAR_4[8], "/cpp");
  VAR_2[0] = FUNC_0("-I", FUNC_0(&VAR_4[8], "/include"));
  VAR_0[0] = FUNC_0(&VAR_4[8], "/rcc");
  VAR_3[17] = FUNC_0("-L", &VAR_4[8]);
 } else if (FUNC_1(VAR_4, "-g") == 0)
  ;
 else if (FUNC_1(VAR_4, "-p") == 0)
  VAR_3[12] = "/usr/lib/mcrt1.o";
 else if (FUNC_1(VAR_4, "-b") == 0)
  ;
 else
  return 0;
 return 1;
}
