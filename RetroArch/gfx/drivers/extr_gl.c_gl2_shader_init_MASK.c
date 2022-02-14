
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int core_context_enabled; } ;
struct TYPE_9__ {int shader_type; char const* path; int shader_data; int * shader; TYPE_3__* data; TYPE_1__ gl; } ;
typedef TYPE_2__ video_shader_ctx_init_t ;
struct retro_hw_render_callback {int version_minor; int version_major; } ;
struct TYPE_10__ {int shader_data; int * shader; int core_context_in_use; } ;
typedef TYPE_3__ gl_t ;
struct TYPE_11__ {int get_proc_address; } ;
typedef TYPE_4__ gfx_ctx_driver_t ;
typedef enum rarch_shader_type { ____Placeholder_rarch_shader_type } rarch_shader_type ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char const*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 char* FUNC_6 () ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static bool FUNC_10(gl_t *VAR_2, const gfx_ctx_driver_t *VAR_3,
      struct retro_hw_render_callback *VAR_4
      )
{
   video_shader_ctx_init_t VAR_5;
   bool VAR_6 = 0;
   const char *VAR_7 = FUNC_6();
   enum rarch_shader_type VAR_8 = FUNC_8(VAR_7);
   enum rarch_shader_type VAR_9;

   VAR_9 = FUNC_2(VAR_8);

   if (VAR_9 == VAR_1)
   {
      FUNC_0("[GL]: Couldn't find any supported shader backend! Continuing without shaders.\n");
      return 1;
   }

   if (VAR_9 != VAR_8)
   {
      if (!FUNC_7(VAR_7))
         FUNC_1("[GL] Shader preset %s is using unsupported shader type %s, falling back to stock %s.\n",
            VAR_7, FUNC_9(VAR_8), FUNC_9(VAR_9));

      VAR_7 = ((void*)0);
   }
   VAR_5.gl.core_context_enabled = VAR_2->core_context_in_use;
   VAR_5.shader_type = VAR_9;
   VAR_5.shader = ((void*)0);
   VAR_5.data = VAR_2;
   VAR_5.path = VAR_7;

   if (FUNC_5(&VAR_5))
   {
      VAR_2->shader = VAR_5.shader;
      VAR_2->shader_data = VAR_5.shader_data;
      return 1;
   }

   FUNC_0("[GL]: Failed to initialize shader, falling back to stock.\n");

   VAR_5.shader = ((void*)0);
   VAR_5.path = ((void*)0);

   VAR_6 = FUNC_5(&VAR_5);

   VAR_2->shader = VAR_5.shader;
   VAR_2->shader_data = VAR_5.shader_data;

   return VAR_6;
}
