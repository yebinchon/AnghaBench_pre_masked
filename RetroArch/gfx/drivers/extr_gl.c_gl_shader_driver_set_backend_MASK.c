
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int shader_backend_t ;
typedef enum rarch_shader_type { ____Placeholder_rarch_shader_type } rarch_shader_type ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*) ;


 int FUNC_2 (int) ;
 int const VAR_0 ;
 int const VAR_1 ;

__attribute__((used)) static const shader_backend_t *FUNC_3(
      enum rarch_shader_type VAR_2)
{
   enum rarch_shader_type VAR_3 = FUNC_2(VAR_2);
   if (VAR_3 != VAR_2)
      FUNC_0("[Shader driver]: Shader backend %d not supported, falling back to %d.", VAR_2, VAR_3);

   switch (VAR_3)
   {
      default:
         FUNC_1("[Shader driver]: No supported shader backend.\n");
         return ((void*)0);
   }
}
