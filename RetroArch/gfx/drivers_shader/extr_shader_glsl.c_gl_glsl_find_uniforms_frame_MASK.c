
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int texture_size ;
typedef int texture ;
typedef int tex_coord ;
struct shader_uniforms_frame {int tex_coord; void* input_size; void* texture_size; void* texture; } ;
typedef int input_size ;
typedef int glsl_shader_data_t ;
typedef int GLuint ;


 int FUNC_0 (int *,int ,char*) ;
 void* FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_4(glsl_shader_data_t *VAR_0,
      GLuint VAR_1,
      struct shader_uniforms_frame *VAR_2, const char *VAR_3)
{
   char VAR_4[64];
   char VAR_5[64];
   char VAR_6[64];
   char VAR_7[64];

   VAR_4[0] = VAR_5[0] = VAR_6[0] = VAR_7[0] = '\0';

   FUNC_3(VAR_4, VAR_3, sizeof(VAR_4));
   FUNC_2(VAR_4, "Texture", sizeof(VAR_4));
   FUNC_3(VAR_5, VAR_3, sizeof(VAR_5));
   FUNC_2(VAR_5, "TextureSize", sizeof(VAR_5));
   FUNC_3(VAR_6, VAR_3, sizeof(VAR_6));
   FUNC_2(VAR_6, "InputSize", sizeof(VAR_6));
   FUNC_3(VAR_7, VAR_3, sizeof(VAR_7));
   FUNC_2(VAR_7, "TexCoord", sizeof(VAR_7));

   if (VAR_2->texture < 0)
      VAR_2->texture = FUNC_1(VAR_0, VAR_1, VAR_4);
   if (VAR_2->texture_size < 0)
      VAR_2->texture_size = FUNC_1(VAR_0, VAR_1, VAR_5);
   if (VAR_2->input_size < 0)
      VAR_2->input_size = FUNC_1(VAR_0, VAR_1, VAR_6);
   if (VAR_2->tex_coord < 0)
      VAR_2->tex_coord = FUNC_0(VAR_0, VAR_1, VAR_7);
}
