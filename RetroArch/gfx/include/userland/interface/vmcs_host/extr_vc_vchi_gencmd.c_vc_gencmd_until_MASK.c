
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int response ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*,char*,size_t) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int,char*) ;
 scalar_t__ FUNC_5 (char*,char const*,char**,int*) ;
 int FUNC_6 (int) ;

int FUNC_7( char *VAR_0,
                     const char *VAR_1,
                     char *VAR_2,
                     const char *VAR_3,
                     int VAR_4) {
   char VAR_5[128];
   int VAR_6;
   char *VAR_7;
   int VAR_8 = 1;

   FUNC_3();
   for (;VAR_4 > 0; VAR_4 -= 10) {
      FUNC_4(VAR_5, (int)sizeof(VAR_5), VAR_0);
      if (FUNC_2(VAR_5,VAR_3)) {
         VAR_8 = 1;
         break;
      }
      else if (FUNC_5(VAR_5, VAR_1, &VAR_7, &VAR_6) &&
               FUNC_1(VAR_2,VAR_7,(size_t)VAR_6)==0) {
         VAR_8 = 0;
         break;
      }
      FUNC_6(10);
   }
   FUNC_0();

   return VAR_8;
}
