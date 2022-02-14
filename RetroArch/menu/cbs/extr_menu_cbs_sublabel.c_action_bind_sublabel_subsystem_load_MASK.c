
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int file_list_t ;
typedef int buf ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 () ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_6(
      file_list_t *VAR_0,
      unsigned VAR_1, unsigned VAR_2,
      const char *VAR_3, const char *VAR_4,
      char *VAR_5, size_t VAR_6)
{
   unsigned VAR_7 = 0;
   char VAR_8[4096];

   VAR_8[0] = '\0';

   for (VAR_7 = 0; VAR_7 < FUNC_1(); VAR_7++)
   {
      FUNC_4(VAR_8, "   ", sizeof(VAR_8));
      FUNC_4(VAR_8, FUNC_2(FUNC_0(VAR_7)), sizeof(VAR_8));
      if (VAR_7 != FUNC_1() - 1)
         FUNC_4(VAR_8, "\n", sizeof(VAR_8));
   }

   if (!FUNC_3(VAR_8))
      FUNC_5(VAR_5, VAR_8, VAR_6);

   return 0;
}
