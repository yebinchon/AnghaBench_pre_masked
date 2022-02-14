
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int) ;
 char** VAR_0 ;
 char* FUNC_1 (char*,char*) ;
 char** VAR_1 ;
 char** VAR_2 ;
 char** VAR_3 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

int FUNC_4(char *VAR_4) {
 if (FUNC_3(VAR_4, "-lccdir=", 8) == 0) {
  VAR_1[0] = FUNC_1(&VAR_4[8], "/cpp");
  VAR_2[0] = FUNC_1("-I", FUNC_1(&VAR_4[8], "/include"));
  VAR_0[0] = FUNC_1(&VAR_4[8], "/rcc");
  VAR_3[8] = FUNC_1("-L", &VAR_4[8]);
 } else if (FUNC_2(VAR_4, "-g4") == 0
 && FUNC_0("/u/drh/lib/alpha/rcc", 4) == 0
 && FUNC_0("/u/drh/book/cdb/alpha/osf/cdbld", 4) == 0) {
  VAR_0[0] = "/u/drh/lib/alpha/rcc";
  VAR_0[5] = "-g4";
  VAR_3[0] = "/u/drh/book/cdb/alpha/osf/cdbld";
  VAR_3[1] = "-o";
  VAR_3[2] = "$3";
  VAR_3[3] = "$1";
  VAR_3[4] = "$2";
  VAR_3[5] = 0;
 } else if (FUNC_2(VAR_4, "-g") == 0)
  return 1;
 else if (FUNC_2(VAR_4, "-b") == 0)
  ;
 else
  return 0;
 return 1;
}
