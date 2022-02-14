
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 () ;

void FUNC_4(const char *VAR_0)
{



 if (VAR_0 && FUNC_2(VAR_0)) {
  char VAR_1[256];

  FUNC_1(VAR_1, "boot ");
  FUNC_1(VAR_1 + FUNC_2("boot "), VAR_0);

  FUNC_0("reboot-command", VAR_1);
 }
 FUNC_3();
}
