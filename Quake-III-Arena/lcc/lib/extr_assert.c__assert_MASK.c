
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;

int FUNC_3(char *VAR_1, char *VAR_2, int VAR_3) {
 FUNC_2(VAR_0, "assertion failed:");
 if (VAR_1)
  FUNC_2(VAR_0, " %s", VAR_1);
 if (VAR_2)
  FUNC_2(VAR_0, " file %s", VAR_2);
 FUNC_2(VAR_0, " line %d\n", VAR_3);
 FUNC_1(VAR_0);
 FUNC_0();
 return 0;
}
