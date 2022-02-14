
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 char* VAR_1 ;
 char* VAR_2 ;

void FUNC_6() {
  char VAR_3[] = "Invalid locale:%s, please set the valid locale in config file";
  char VAR_4[] = "Invalid charset:%s, please set the valid charset in config file";
  char VAR_5[] = "failed to get charset, please set the valid charset in config file";

  char *VAR_6 = FUNC_3(VAR_0, VAR_2);


  if (VAR_6 == ((void*)0)) {
    FUNC_2(VAR_3, VAR_2);
    FUNC_1(VAR_3, VAR_2);
  }

  if (FUNC_4(VAR_1) == 0) {
    FUNC_2("%s\n", VAR_5);
    FUNC_1(VAR_5);
    FUNC_0(-1);
  }

  if (!FUNC_5(VAR_1)) {
    FUNC_2(VAR_4, VAR_1);
    FUNC_1(VAR_4, VAR_1);
    FUNC_0(-1);
  }
}
