
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vk_t ;
typedef enum rarch_shader_type { ____Placeholder_rarch_shader_type } rarch_shader_type ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 char* FUNC_1 () ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*) ;

__attribute__((used)) static bool FUNC_6(vk_t *VAR_1)
{
   const char *VAR_2 = FUNC_1();
   enum rarch_shader_type VAR_3 = FUNC_3(VAR_2);

   if (FUNC_2(VAR_2))
   {
      FUNC_0("[Vulkan]: Loading stock shader.\n");
      return FUNC_4(VAR_1);
   }

   if (VAR_3 != VAR_0)
   {
      FUNC_0("[Vulkan]: Only Slang shaders are supported, falling back to stock.\n");
      return FUNC_4(VAR_1);
   }

   if (!VAR_2 || !FUNC_5(VAR_1, VAR_2))
      FUNC_4(VAR_1);

   return 1;
}
