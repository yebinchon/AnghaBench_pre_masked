
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char** VAR_0 ;
 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,char*,char*) ;

FILE *FUNC_2(char *VAR_1) {
 int VAR_2;
 FILE *VAR_3;

 if (*VAR_1 != '/')
  for (VAR_2 = 0; VAR_0[VAR_2]; VAR_2++) {
   char VAR_4[200];
   FUNC_1(VAR_4, "%s/%s", VAR_0[VAR_2], VAR_1);
   if ((VAR_3 = FUNC_0(VAR_4, "r")))
    return VAR_3;
  }
 return FUNC_0(VAR_1, "r");
}
