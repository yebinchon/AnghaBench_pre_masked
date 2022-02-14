
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,char const*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;

int FUNC_13(int VAR_1, char **VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5;
 const char *VAR_6;
 FILE *VAR_7;
 int VAR_8;

 VAR_3 = 0;
 VAR_4 = 0;
 VAR_5 = 0;
 VAR_6 = ((void*)0);
 for (VAR_8 = 1; VAR_8 < VAR_1; VAR_8++) {
  char *VAR_9 = VAR_2[VAR_8];
  if (*VAR_9 == '-') {
   if (FUNC_10(VAR_2[1], "--abs-syms") == 0) {
    VAR_3 = 1;
    continue;
   }

   if (FUNC_10(VAR_2[1], "--abs-relocs") == 0) {
    VAR_4 = 1;
    continue;
   }
   else if (FUNC_10(VAR_2[1], "--text") == 0) {
    VAR_5 = 1;
    continue;
   }
  }
  else if (!VAR_6) {
   VAR_6 = VAR_9;
   continue;
  }
  FUNC_12();
 }
 if (!VAR_6) {
  FUNC_12();
 }
 VAR_7 = FUNC_2(VAR_6, "r");
 if (!VAR_7) {
  FUNC_0("Cannot open %s: %s\n",
   VAR_6, FUNC_11(VAR_0));
 }
 FUNC_5(VAR_7);
 FUNC_7(VAR_7);
 FUNC_8(VAR_7);
 FUNC_9(VAR_7);
 FUNC_6(VAR_7);
 if (VAR_3) {
  FUNC_4();
  return 0;
 }
 if (VAR_4) {
  FUNC_3();
  return 0;
 }
 FUNC_1(VAR_5);
 return 0;
}
