
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,...) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,char*) ;

int FUNC_7(int VAR_0, char *VAR_1[])
{
 FILE *VAR_2, *VAR_3;
 char VAR_4[256];

 if (VAR_0 != 3) {
  FUNC_5("usage:\n%s <carthw.cfg> <carthw.c>\n", VAR_1[0]);
  return 1;
 }

 VAR_2 = FUNC_2(VAR_1[1], "r");
 VAR_3 = FUNC_2(VAR_1[2], "w");
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
  FUNC_5("fopen failed\n");
  return 1;
 }

 FUNC_3(VAR_3, "/* generated by %s, do not modify */\n", VAR_1[0]);
 FUNC_3(VAR_3, "static const char builtin_carthw_cfg[] =\n");

 while ((FUNC_1(VAR_4, sizeof(VAR_4), VAR_2)))
 {
  char VAR_5[256];
  char *VAR_6 = VAR_5, *VAR_7 = VAR_4;
  int VAR_8 = 0;

  while (*VAR_7 && FUNC_4(*VAR_7))
   VAR_7++;

  if (*VAR_7 == 0 || *VAR_7 == '#')
   continue;


  if (*VAR_7 == '[')
   FUNC_6(VAR_7, "[]");

  for (; *VAR_7 != 0; VAR_7++) {
   if (!VAR_8 && FUNC_4(*VAR_7))
    continue;
   if (*VAR_7 == '"') {
    VAR_8 = !VAR_8;
    *VAR_6++ = '\\';
   }
   *VAR_6++ = *VAR_7;
  }
  *VAR_6 = 0;


  FUNC_3(VAR_3, "  \"%s\\n\"\n", VAR_5);
 }

 FUNC_3(VAR_3, ";\n");

 FUNC_0(VAR_2);
 FUNC_0(VAR_3);

 return 0;
}
