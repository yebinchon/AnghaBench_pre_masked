
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path_file ;
typedef int path ;
typedef int buff ;
typedef int FILE ;


 scalar_t__ FUNC_0 (void*,int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char) ;
 int FUNC_7 (char*,int *) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,int,char*,char*,...) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*,int) ;

int FUNC_12(int VAR_0, char *VAR_1[])
{
 char VAR_2[256], VAR_3[256];
 char VAR_4[1024];
 FILE *VAR_5, *VAR_6;
 int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 char *VAR_11;

 if (VAR_0 < 3)
 {
  FUNC_8("usage:\n%s <file_in> <file_out> [defines...]\n", VAR_1[0]);
  return 1;
 }

 VAR_5 = FUNC_5(VAR_1[1], "r");
 if (VAR_5 == ((void*)0))
 {
  FUNC_8("failed to open: %s\n", VAR_1[1]);
  return 2;
 }

 VAR_6 = FUNC_5(VAR_1[2], "wb");
 if (VAR_6 == ((void*)0))
 {
  FUNC_8("failed to open: %s\n", VAR_1[2]);
  return 3;
 }

 FUNC_9(VAR_2, sizeof(VAR_2), "%s", VAR_1[1]);
 for (VAR_11 = VAR_2 + FUNC_10(VAR_2) - 1; VAR_11 > VAR_2; VAR_11--) {
  if (*VAR_11 == '/' || *VAR_11 == '\\') {
   VAR_11[1] = 0;
   break;
  }
 }

 for (++VAR_10; !FUNC_3(VAR_5); VAR_10++)
 {
  char *VAR_12;

  VAR_12 = FUNC_4(VAR_4, sizeof(VAR_4), VAR_5);
  if (VAR_12 == ((void*)0)) break;

  if (VAR_4[0] == '#')
  {

   if (FUNC_11(VAR_4, "#ifdef ", 7) == 0)
   {
    VAR_8++;
    if (!VAR_7 && !FUNC_0((void *) &VAR_1[3], VAR_0-3, VAR_4 + 7))
     VAR_7 = 1, VAR_9 = VAR_8;
   }
   else if (FUNC_11(VAR_4, "#ifndef ", 8) == 0)
   {
    VAR_8++;
    if (!VAR_7 && FUNC_0((void *) &VAR_1[3], VAR_0-3, VAR_4 + 8))
     VAR_7 = 1, VAR_9 = VAR_8;
   }
   else if (FUNC_11(VAR_4, "#else", 5) == 0)
   {
    if (!VAR_7 || VAR_9 == VAR_8)
     VAR_7 ^= 1, VAR_9 = VAR_8;
   }
   else if (FUNC_11(VAR_4, "#endif", 6) == 0)
   {
    if (VAR_9 == VAR_8)
     VAR_7 = 0;
    VAR_8--;
    if (VAR_8 == 0) VAR_7 = 0;
    if (VAR_8 < 0)
    {
     FUNC_8("%i: warning: #endif without #ifdef, ignoring\n", VAR_10);
     VAR_8 = 0;
    }
   }
   else if (FUNC_11(VAR_4, "#include ", 9) == 0)
   {
    char *VAR_13, *VAR_14 = VAR_4 + 9;
    FILE *VAR_15;
    if (VAR_7)
     continue;
    while (*VAR_14 && (*VAR_14 == ' ' || *VAR_14 == '\"'))
     VAR_14++;
    for (VAR_13 = VAR_14 + FUNC_10(VAR_14) - 1; VAR_13 > VAR_14; VAR_13--) {
     if (FUNC_6(*VAR_13) || *VAR_13 == '\"') *VAR_13 = 0;
     else break;
    }
    FUNC_9(VAR_3, sizeof(VAR_3), "%s%s", VAR_2, VAR_14);
    VAR_15 = FUNC_5(VAR_3, "r");
    if (VAR_15 == ((void*)0)) {
     FUNC_8("%i: error: failed to include \"%s\"\n", VAR_10, VAR_14);
     return 1;
    }
    while (!FUNC_3(VAR_15))
    {
     VAR_12 = FUNC_4(VAR_4, sizeof(VAR_4), VAR_15);
     if (VAR_12 == ((void*)0))
      break;
     FUNC_7(VAR_4, VAR_6);
    }
    FUNC_2(VAR_15);
    continue;
   }


   continue;
  }
  if (!VAR_7)
  {
   FUNC_1(VAR_4);
   FUNC_7(VAR_4, VAR_6);
  }
 }

 FUNC_2(VAR_5);
 FUNC_2(VAR_6);

 return 0;
}
