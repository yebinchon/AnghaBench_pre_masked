
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,size_t) ;

int FUNC_3(char *VAR_0, const char *VAR_1, char **VAR_2, int *VAR_3) {



   int VAR_4 = 0;
   int VAR_5 = 1, VAR_6 = 0, VAR_7 = (int)FUNC_1(VAR_1);
   char *VAR_8=VAR_0, *VAR_9=VAR_0;
   for (; *VAR_0; VAR_0++) {
      int VAR_10 = *VAR_0;
      switch (VAR_4) {
      case 0:
         if (VAR_5) VAR_8 = VAR_0;
         if (FUNC_0(VAR_10)) VAR_5 = 1;
         else if (VAR_10 == '=') {
            VAR_5 = 1;
            VAR_6 = (VAR_0-VAR_8==VAR_7 && FUNC_2(VAR_8, VAR_1, (size_t)(VAR_0-VAR_8))==0);
            VAR_4 = 1;
         }
         else VAR_5 = 0;
         break;
      case 1:
         if (VAR_5) VAR_9 = VAR_0;
         if (FUNC_0(VAR_10)) {
            if (VAR_6) goto success;
            VAR_5 = 1;
            VAR_4 = 0;
         }
         else if (VAR_5 && VAR_10 == '"') {
            VAR_5 = 1;
            VAR_4 = 2;
         }
         else VAR_5 = 0;
         break;
      case 2:
         if (VAR_5) VAR_9 = VAR_0;
         if (VAR_10 == '"') {
            if (VAR_6) goto success;
            VAR_5 = 1;
            VAR_4 = 0;
         }
         else VAR_5 = 0;
         break;
      }
   }
   if (VAR_6) goto success;
   return 0;
success:
   *VAR_2 = VAR_9;
   *VAR_3 = VAR_0 - VAR_9;
   return 1;
}
