
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,char*,size_t) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,size_t) ;
 char* FUNC_5 (int const*) ;

bool FUNC_6(char *VAR_0, size_t VAR_1)
{
   const char *VAR_2 = FUNC_3("XDG_CONFIG_HOME");
   const char *VAR_3 = FUNC_3("HOME");



   if (VAR_2)
   {
      FUNC_1(VAR_0, VAR_2, "retroarch/", VAR_1);
      return 1;
   }

   if (VAR_3)
   {





      FUNC_1(VAR_0, VAR_3,
            ".config/retroarch/", VAR_1);

      return 1;
   }


   return 0;
}
