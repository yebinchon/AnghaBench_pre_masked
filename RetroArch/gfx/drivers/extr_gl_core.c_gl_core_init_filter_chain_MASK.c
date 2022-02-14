
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gl_core_t ;
typedef enum rarch_shader_type { ____Placeholder_rarch_shader_type } rarch_shader_type ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*) ;
 char* FUNC_4 () ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static bool FUNC_7(gl_core_t *VAR_1)
{
   const char *VAR_2 = FUNC_4();
   enum rarch_shader_type VAR_3 = FUNC_6(VAR_2);

   if (FUNC_5(VAR_2))
   {
      FUNC_0("[GLCore]: Loading stock shader.\n");
      return FUNC_2(VAR_1);
   }

   if (VAR_3 != VAR_0)
   {
      FUNC_1("[GLCore]: Only Slang shaders are supported, falling back to stock.\n");
      return FUNC_2(VAR_1);
   }

   if (!FUNC_3(VAR_1, VAR_2))
      FUNC_2(VAR_1);

   return 1;
}
