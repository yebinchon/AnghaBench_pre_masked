
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char const* d_name; } ;
typedef int DIR ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (char*) ;
 struct dirent* FUNC_3 (int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(char* VAR_0)
{
   DIR* VAR_1;
   struct dirent* VAR_2;
   const char* VAR_3 = FUNC_1() ? ".3dsx" : ".cia";

   VAR_0[0] = '\0';

   VAR_1 = FUNC_2("sdmc:/retroarch/cores");
   if (VAR_1 != ((void*)0))
   {
      while ((VAR_2 = FUNC_3(VAR_1)))
      {
         if (VAR_2 == ((void*)0))
            break;
         if (FUNC_7(VAR_2->d_name) > FUNC_7(VAR_3) && !FUNC_5(VAR_2->d_name + FUNC_7(VAR_2->d_name) - FUNC_7(VAR_3), VAR_3))
         {
            FUNC_6(VAR_0, "sdmc:/retroarch/cores");
            FUNC_4(VAR_0, "/");
            FUNC_4(VAR_0, VAR_2->d_name);
            break;
         }
      }
      FUNC_0(VAR_1);
   }
}
