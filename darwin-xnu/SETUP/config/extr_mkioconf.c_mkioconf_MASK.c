
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

void
FUNC_8(void)
{
 FILE *VAR_0;

 FUNC_7(FUNC_4("ioconf.c"));
 VAR_0 = FUNC_2(FUNC_4("ioconf.c"), "w");
 if (VAR_0 == 0) {
  FUNC_5(FUNC_4("ioconf.c"));
  FUNC_0(1);
 }
 FUNC_3(VAR_0, "#include <dev/busvar.h>\n");
 FUNC_3(VAR_0, "\n");
 FUNC_6 (VAR_0);
 (void) FUNC_1(VAR_0);
}
