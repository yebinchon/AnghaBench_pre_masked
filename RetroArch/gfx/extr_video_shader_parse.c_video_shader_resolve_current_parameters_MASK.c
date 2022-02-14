
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_shader_parameter {int current; } ;
struct video_shader {int num_parameters; int parameters; } ;
typedef int config_file_t ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int *,char*,char*,size_t) ;
 int FUNC_2 (int *,char const*,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (size_t) ;
 char* FUNC_5 (char*,char*,char**) ;
 scalar_t__ FUNC_6 (int ,int ,char const*) ;

bool FUNC_7(config_file_t *VAR_0,
      struct video_shader *VAR_1)
{
   size_t VAR_2 = 4096 * sizeof(char);
   const char *VAR_3 = ((void*)0);
   char *VAR_4 = ((void*)0);
   char *VAR_5 = ((void*)0);

   if (!VAR_0)
      return 0;

   VAR_4 = (char*)FUNC_4(VAR_2);

   if (!VAR_4)
      return 0;

   VAR_4[0] = '\0';


   if (!FUNC_1(VAR_0, "parameters",
            VAR_4, VAR_2))
   {
      FUNC_3(VAR_4);
      return 1;
   }

   for (VAR_3 = FUNC_5(VAR_4, ";", &VAR_5); VAR_3;
         VAR_3 = FUNC_5(((void*)0), ";", &VAR_5))
   {
      struct video_shader_parameter *VAR_6 =
         (struct video_shader_parameter*)
         FUNC_6(
               VAR_1->parameters, VAR_1->num_parameters, VAR_3);

      if (!VAR_6)
      {
         FUNC_0("[CGP/GLSLP]: Parameter %s is set in the preset,"
               " but no shader uses this parameter, ignoring.\n", VAR_3);
         continue;
      }

      if (!FUNC_2(VAR_0, VAR_3, &VAR_6->current))
         FUNC_0("[CGP/GLSLP]: Parameter %s is not set in preset.\n", VAR_3);
   }

   FUNC_3(VAR_4);
   return 1;
}
