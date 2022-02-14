
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct shader_uniforms {int * prev; int * pass; int orig; int feedback; int * lut_texture; void* frame_direction; void* frame_count; void* texture_size; void* output_size; void* input_size; void* lut_tex_coord; void* color; void* vertex_coord; void* tex_coord; void* mvp; } ;
struct TYPE_12__ {TYPE_3__* shader; } ;
typedef TYPE_4__ glsl_shader_data_t ;
typedef int frame_base ;
struct TYPE_11__ {unsigned int luts; TYPE_2__* pass; TYPE_1__* lut; } ;
struct TYPE_10__ {char* alias; } ;
struct TYPE_9__ {int id; } ;
typedef int GLuint ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,int ,int *,char*) ;
 void* FUNC_4 (TYPE_4__*,int ,char*) ;
 void* FUNC_5 (TYPE_4__*,int ,char*) ;
 int FUNC_6 (char*,int,char*,unsigned int) ;

__attribute__((used)) static void FUNC_7(glsl_shader_data_t *VAR_1,
      unsigned VAR_2, GLuint VAR_3,
      struct shader_uniforms *VAR_4)
{
   unsigned VAR_5;
   char VAR_6[64];

   VAR_6[0] = '\0';

   FUNC_1(VAR_3);

   VAR_4->mvp = FUNC_5(VAR_1, VAR_3, "MVPMatrix");
   VAR_4->tex_coord = FUNC_4(VAR_1, VAR_3, "TexCoord");
   VAR_4->vertex_coord = FUNC_4(VAR_1, VAR_3, "VertexCoord");
   VAR_4->color = FUNC_4(VAR_1, VAR_3, "Color");
   VAR_4->lut_tex_coord = FUNC_4(VAR_1, VAR_3, "LUTTexCoord");

   VAR_4->input_size = FUNC_5(VAR_1, VAR_3, "InputSize");
   VAR_4->output_size = FUNC_5(VAR_1, VAR_3, "OutputSize");
   VAR_4->texture_size = FUNC_5(VAR_1, VAR_3, "TextureSize");

   VAR_4->frame_count = FUNC_5(VAR_1, VAR_3, "FrameCount");
   VAR_4->frame_direction = FUNC_5(VAR_1, VAR_3, "FrameDirection");

   for (VAR_5 = 0; VAR_5 < VAR_1->shader->luts; VAR_5++)
      VAR_4->lut_texture[VAR_5] = FUNC_0(VAR_3, VAR_1->shader->lut[VAR_5].id);

   FUNC_2(&VAR_4->orig);
   FUNC_3(VAR_1, VAR_3, &VAR_4->orig, "Orig");
   FUNC_2(&VAR_4->feedback);
   FUNC_3(VAR_1, VAR_3, &VAR_4->feedback, "Feedback");

   if (VAR_2 > 1)
   {
      FUNC_6(VAR_6, sizeof(VAR_6), "PassPrev%u", VAR_2);
      FUNC_3(VAR_1, VAR_3, &VAR_4->orig, VAR_6);
   }

   for (VAR_5 = 0; VAR_5 + 1 < VAR_2; VAR_5++)
   {
      FUNC_6(VAR_6, sizeof(VAR_6), "Pass%u", VAR_5 + 1);
      FUNC_2(&VAR_4->pass[VAR_5]);
      FUNC_3(VAR_1, VAR_3, &VAR_4->pass[VAR_5], VAR_6);
      FUNC_6(VAR_6, sizeof(VAR_6), "PassPrev%u", VAR_2 - (VAR_5 + 1));
      FUNC_3(VAR_1, VAR_3, &VAR_4->pass[VAR_5], VAR_6);

      if (*VAR_1->shader->pass[VAR_5].alias)
         FUNC_3(VAR_1, VAR_3, &VAR_4->pass[VAR_5], VAR_1->shader->pass[VAR_5].alias);
   }

   FUNC_2(&VAR_4->prev[0]);
   FUNC_3(VAR_1, VAR_3, &VAR_4->prev[0], "Prev");
   for (VAR_5 = 1; VAR_5 < VAR_0; VAR_5++)
   {
      FUNC_6(VAR_6, sizeof(VAR_6), "Prev%u", VAR_5);
      FUNC_2(&VAR_4->prev[VAR_5]);
      FUNC_3(VAR_1, VAR_3, &VAR_4->prev[VAR_5], VAR_6);
   }

   FUNC_1(0);
}
