
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (int ,char*,char*,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*,int *) ;
 char* VAR_3 ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;

void
FUNC_9(FILE *VAR_5)
{
 FILE *VAR_6;
 char VAR_7[VAR_0];
 char VAR_8[VAR_0];

 (void) FUNC_7(VAR_8, "%s/Makefile.%s", VAR_2, VAR_3);
 VAR_6 = FUNC_3(VAR_1, VAR_8, VAR_7, "r");
 if (VAR_6 == 0) {
  FUNC_6(VAR_8);
  FUNC_0(1);
 }
 while (FUNC_2(VAR_8, VAR_0, VAR_6) != 0) {
  if (VAR_4 && (FUNC_8(VAR_8, "LIBS=", 5) == 0))
   FUNC_4(VAR_5,"LIBS=${LIBS_P}\n");
  else
   FUNC_5(VAR_8, VAR_5);
 }
 FUNC_1(VAR_6);
}
