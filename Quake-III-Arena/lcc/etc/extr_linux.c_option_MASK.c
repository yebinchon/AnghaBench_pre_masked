
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
  VAR_1[0] = FUNC_0(&VAR_4[8], "/gcc/cpp");
  VAR_2[0] = FUNC_0("-I", FUNC_0(&VAR_4[8], "/include"));
  VAR_2[1] = FUNC_0("-I", FUNC_0(&VAR_4[8], "/gcc/include"));
  VAR_3[9] = FUNC_0(&VAR_4[8], "/gcc/crtbegin.o");
  VAR_3[12] = FUNC_0("-L", &VAR_4[8]);
  VAR_3[14] = FUNC_0("-L", FUNC_0(&VAR_4[8], "/gcc"));
  VAR_3[19] = FUNC_0(&VAR_4[8], "/gcc/crtend.o");
  VAR_0[0] = FUNC_0(&VAR_4[8], "/rcc");
 } else if (FUNC_1(VAR_4, "-p") == 0 || FUNC_1(VAR_4, "-pg") == 0) {
  VAR_3[7] = "/usr/lib/gcrt1.o";
  VAR_3[18] = "-lgmon";
 } else if (FUNC_1(VAR_4, "-b") == 0)
  ;
 else if (FUNC_1(VAR_4, "-g") == 0)
  ;
 else if (FUNC_2(VAR_4, "-ld=", 4) == 0)
  VAR_3[0] = &VAR_4[4];
 else if (FUNC_1(VAR_4, "-static") == 0) {
         VAR_3[3] = "-static";
         VAR_3[4] = "";
 } else
  return 0;
 return 1;
}
