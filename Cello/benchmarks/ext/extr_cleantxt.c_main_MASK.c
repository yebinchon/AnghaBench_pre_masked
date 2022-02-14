
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (char*,char*) ;

int FUNC_8(int VAR_4, char *VAR_5[])
{
 FILE *VAR_6;
 int VAR_7 = VAR_0;
 if (VAR_4 == 1) {
  FUNC_4(VAR_1, "Usage: cleantxt <file>\n");
  return 1;
 }
 VAR_6 = FUNC_7(VAR_5[1], "-")? FUNC_3(VAR_5[1], "rb") : VAR_2;
 if (VAR_6 == 0) {
  FUNC_4(VAR_1, "ERROR: fail to open the input file.\n");
  return 1;
 }
 while (!FUNC_1(VAR_6)) {
  VAR_7 = FUNC_2(VAR_6);
  if (FUNC_6(VAR_7) || VAR_7 == '\t' || VAR_7 == '\n' || VAR_7 == ' ')
   FUNC_5(VAR_7, VAR_3);
 }
 if (VAR_7 != '\n') FUNC_5('\n', VAR_3);
 FUNC_0(VAR_6);
 return 0;
}
