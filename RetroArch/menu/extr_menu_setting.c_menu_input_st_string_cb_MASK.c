
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rarch_setting_t ;


 int FUNC_0 () ;
 char* FUNC_1 () ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(void *VAR_0, const char *VAR_1)
{
   if (VAR_1 && *VAR_1)
   {
      rarch_setting_t *VAR_2 = ((void*)0);
      const char *VAR_3 = FUNC_1();

      if (!FUNC_5(VAR_3))
         VAR_2 = FUNC_2(VAR_3);

      if (VAR_2)
      {
         FUNC_4(VAR_2, VAR_1);
         FUNC_3(VAR_2, 0);
      }
   }

   FUNC_0();
}
