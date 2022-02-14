
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct shader_program_info {int fragment; int vertex; } ;
struct shader_program_glsl_data {scalar_t__ id; void* fprg; void* vprg; } ;
struct TYPE_4__ {struct shader_program_glsl_data* prg; } ;
typedef TYPE_1__ glsl_shader_data_t ;
typedef scalar_t__ GLuint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,void*) ;
 scalar_t__ FUNC_3 () ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_1__*,void*,char*,int ) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,char*) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static bool FUNC_11(
      void *VAR_2,
      unsigned VAR_3,
      void *VAR_4,
      struct shader_program_info *VAR_5)
{
   glsl_shader_data_t *VAR_6 = (glsl_shader_data_t*)VAR_2;
   struct shader_program_glsl_data *VAR_7 = (struct shader_program_glsl_data*)VAR_4;
   GLuint VAR_8 = FUNC_3();

   if (!VAR_7)
      VAR_7 = &VAR_6->prg[VAR_3];

   if (!VAR_8)
      goto error;

   if (VAR_5->vertex)
   {
      FUNC_1("[GLSL]: Found GLSL vertex shader.\n");
      VAR_7->vprg = FUNC_4(VAR_1);

      if (!FUNC_8(
               VAR_6,
               VAR_7->vprg,
               "#define VERTEX\n#define PARAMETER_UNIFORM\n", VAR_5->vertex))
      {
         FUNC_0("Failed to compile vertex shader #%u\n", VAR_3);
         goto error;
      }

      FUNC_2(VAR_8, VAR_7->vprg);
   }

   if (VAR_5->fragment)
   {
      FUNC_1("[GLSL]: Found GLSL fragment shader.\n");
      VAR_7->fprg = FUNC_4(VAR_0);
      if (!FUNC_8(VAR_6, VAR_7->fprg,
               "#define FRAGMENT\n#define PARAMETER_UNIFORM\n", VAR_5->fragment))
      {
         FUNC_0("Failed to compile fragment shader #%u\n", VAR_3);
         goto error;
      }

      FUNC_2(VAR_8, VAR_7->fprg);
   }

   if (VAR_5->vertex || VAR_5->fragment)
   {
      FUNC_1("[GLSL]: Linking GLSL program.\n");
      if (!FUNC_10(VAR_8))
         goto error;




      if (VAR_7->vprg)
         FUNC_5(VAR_7->vprg);
      if (VAR_7->fprg)
         FUNC_5(VAR_7->fprg);
      VAR_7->vprg = 0;
      VAR_7->fprg = 0;

      FUNC_7(VAR_8);
      FUNC_6(FUNC_9(VAR_6, VAR_8, "Texture"), 0);
      FUNC_7(0);
   }

   VAR_7->id = VAR_8;

   return 1;

error:
   FUNC_0("Failed to link program #%u.\n", VAR_3);
   VAR_7->id = 0;
   return 0;
}
