
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum rarch_shader_type { ____Placeholder_rarch_shader_type } rarch_shader_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*) ;

enum rarch_shader_type FUNC_3(const char *VAR_4,
      bool *VAR_5)
{
   if (FUNC_0(VAR_4))
      return VAR_2;

   if (FUNC_2(VAR_4) > 1 && VAR_4[0] == '.')
      VAR_4++;

   if (VAR_5)
      *VAR_5 =
         FUNC_1(VAR_4, "cgp") ||
         FUNC_1(VAR_4, "glslp") ||
         FUNC_1(VAR_4, "slangp");

   if (FUNC_1(VAR_4, "cgp") ||
       FUNC_1(VAR_4, "cg")
      )
      return VAR_0;

   if (FUNC_1(VAR_4, "glslp") ||
       FUNC_1(VAR_4, "glsl")
      )
      return VAR_1;

   if (FUNC_1(VAR_4, "slangp") ||
       FUNC_1(VAR_4, "slang")
      )
      return VAR_3;

   return VAR_2;
}
