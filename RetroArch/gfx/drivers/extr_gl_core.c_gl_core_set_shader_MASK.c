
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * filter_chain; } ;
typedef TYPE_1__ gl_core_t ;
typedef enum rarch_shader_type { ____Placeholder_rarch_shader_type } rarch_shader_type ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static bool FUNC_7(void *VAR_1,
                               enum rarch_shader_type VAR_2, const char *VAR_3)
{
   gl_core_t *VAR_4 = (gl_core_t *)VAR_1;
   if (!VAR_4)
      return 0;

   FUNC_2(VAR_4, 0);

   if (VAR_4->filter_chain)
      FUNC_3(VAR_4->filter_chain);
   VAR_4->filter_chain = ((void*)0);

   if (!FUNC_6(VAR_3) && VAR_2 != VAR_0)
   {
      FUNC_1("[GLCore]: Only Slang shaders are supported. Falling back to stock.\n");
      VAR_3 = ((void*)0);
   }

   if (FUNC_6(VAR_3))
   {
      FUNC_4(VAR_4);
      FUNC_2(VAR_4, 1);
      return 1;
   }

   if (!FUNC_5(VAR_4, VAR_3))
   {
      FUNC_0("[GLCore]: Failed to create filter chain: \"%s\". Falling back to stock.\n", VAR_3);
      FUNC_4(VAR_4);
      FUNC_2(VAR_4, 1);
      return 0;
   }

   FUNC_2(VAR_4, 1);
   return 1;
}
