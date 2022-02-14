
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct video_shader {int passes; TYPE_1__* pass; } ;
typedef int config_file_t ;
struct TYPE_6__ {int lut_textures; struct video_shader* shader; int * alias_define; } ;
typedef TYPE_2__ cg_shader_data_t ;
struct TYPE_5__ {char* alias; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,unsigned int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct video_shader*,int ) ;
 int FUNC_8 (int ,int,char*,char*) ;
 int FUNC_9 (int *,struct video_shader*) ;
 int * FUNC_10 (char const*) ;
 int FUNC_11 (int *,struct video_shader*) ;

__attribute__((used)) static bool FUNC_12(void *VAR_1, const char *VAR_2)
{
   unsigned VAR_3;
   config_file_t *VAR_4 = ((void*)0);
   cg_shader_data_t *VAR_5 = (cg_shader_data_t*)VAR_1;

   if (!FUNC_6(VAR_5))
      return 0;

   FUNC_1("[CG]: Loading Cg meta-shader: %s\n", VAR_2);
   VAR_4 = FUNC_10(VAR_2);
   if (!VAR_4)
   {
      FUNC_0("Failed to load preset.\n");
      return 0;
   }

   VAR_5->shader = (struct video_shader*)FUNC_3(1, sizeof(*VAR_5->shader));
   if (!VAR_5->shader)
   {
      FUNC_4(VAR_4);
      return 0;
   }

   if (!FUNC_9(VAR_4, VAR_5->shader))
   {
      FUNC_0("Failed to parse CGP file.\n");
      FUNC_4(VAR_4);
      return 0;
   }

   FUNC_11(VAR_4, VAR_5->shader);
   FUNC_4(VAR_4);

   if (VAR_5->shader->passes > VAR_0 - 3)
   {
      FUNC_2("Too many shaders ... Capping shader amount to %d.\n",
            VAR_0 - 3);
      VAR_5->shader->passes = VAR_0 - 3;
   }

   for (VAR_3 = 0; VAR_3 < VAR_5->shader->passes; VAR_3++)
   {
      if (*VAR_5->shader->pass[VAR_3].alias)
         FUNC_8(VAR_5->alias_define[VAR_3],
               sizeof(VAR_5->alias_define[VAR_3]),
               "-D%s_ALIAS",
               VAR_5->shader->pass[VAR_3].alias);
   }

   for (VAR_3 = 0; VAR_3 < VAR_5->shader->passes; VAR_3++)
   {
      if (!FUNC_5(VAR_5, VAR_3))
      {
         FUNC_0("Failed to load shaders ...\n");
         return 0;
      }
   }

   if (!FUNC_7(VAR_5->shader, VAR_5->lut_textures))
   {
      FUNC_0("Failed to load lookup textures ...\n");
      return 0;
   }

   return 1;
}
