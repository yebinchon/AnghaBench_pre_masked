
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char**) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (int ,char*,...) ;
 char** FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 char* VAR_1 ;
 char** FUNC_5 (char**,int) ;
 int VAR_2 ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (char*,int,char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(char **VAR_4) {
 int VAR_5, VAR_6 = 0;
 static char **VAR_7;
 static int VAR_8;

 for (VAR_5 = 0; VAR_4[VAR_5] != ((void*)0); VAR_5++)
  ;
 if (VAR_5 + 1 > VAR_8) {
  VAR_8 = VAR_5 + 1;
  if (VAR_7 == ((void*)0))
   VAR_7 = FUNC_3(VAR_8*sizeof *VAR_7);
  else
   VAR_7 = FUNC_5(VAR_7, VAR_8*sizeof *VAR_7);
  FUNC_1(VAR_7);
 }
 for (VAR_5 = 0; VAR_6 == 0 && VAR_4[VAR_5] != ((void*)0); ) {
  int VAR_9 = 0;
  char *VAR_10;
  for ( ; VAR_4[VAR_5] != ((void*)0) && (VAR_10 = FUNC_6(VAR_4[VAR_5], '\n')) == ((void*)0); VAR_5++)
   VAR_7[VAR_9++] = VAR_4[VAR_5];
  if (VAR_10 != ((void*)0)) {
   if (VAR_10 > VAR_4[VAR_5])
    VAR_7[VAR_9++] = FUNC_7("%.*s", VAR_10 - VAR_4[VAR_5], VAR_4[VAR_5]);
   if (VAR_10[1] != '\0')
    VAR_4[VAR_5] = VAR_10 + 1;
   else
    VAR_5++;
  }
  VAR_7[VAR_9] = ((void*)0);
  if (VAR_3 > 0) {
   int VAR_11;
   FUNC_2(VAR_2, "%s", VAR_7[0]);
   for (VAR_11 = 1; VAR_7[VAR_11] != ((void*)0); VAR_11++)
    FUNC_2(VAR_2, " %s", VAR_7[VAR_11]);
   FUNC_2(VAR_2, "\n");
  }
  if (VAR_3 < 2)
   VAR_6 = FUNC_0(VAR_0, VAR_7[0], VAR_7);
  if (VAR_6 == -1) {
   FUNC_2(VAR_2, "%s: ", VAR_1);
   FUNC_4(VAR_7[0]);
  }
 }
 return VAR_6;
}
