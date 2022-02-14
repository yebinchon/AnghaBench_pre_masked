
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct video_coords {int vertices; int lut_tex_coord; int color; int vertex; int tex_coord; } ;
struct shader_uniforms {scalar_t__ color; scalar_t__ tex_coord; scalar_t__ vertex_coord; scalar_t__ lut_tex_coord; } ;
struct glsl_attrib {int dummy; } ;
struct TYPE_7__ {size_t active_idx; TYPE_2__* vbo; TYPE_1__* shader; struct shader_uniforms* uniforms; } ;
typedef TYPE_3__ glsl_shader_data_t ;
struct TYPE_6__ {int size_primary; int buffer_primary; int vbo_primary; } ;
struct TYPE_5__ {int modern; } ;
typedef int GLfloat ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int ,int *,int *,int *,size_t,struct glsl_attrib*,size_t) ;
 int FUNC_2 (struct glsl_attrib*,scalar_t__,int ,struct video_coords const*,size_t,int) ;
 scalar_t__ FUNC_3 (size_t) ;

__attribute__((used)) static bool FUNC_4(void *VAR_0,
      const struct video_coords *VAR_1)
{
   GLfloat VAR_2[4 * (2 + 2 + 4 + 2)];
   struct glsl_attrib VAR_3[4];
   size_t VAR_4 = 0;
   size_t VAR_5 = 0;
   GLfloat *VAR_6 = VAR_2;
   glsl_shader_data_t *VAR_7 = (glsl_shader_data_t*)VAR_0;
   const struct shader_uniforms *VAR_8 = VAR_7
      ? &VAR_7->uniforms[VAR_7->active_idx] : ((void*)0);

   if (!VAR_7 || !VAR_7->shader->modern || !VAR_1)
   {
      if (VAR_1)
         return 0;
      return 1;
   }

   if (VAR_1->vertices > 4)
   {


      size_t VAR_9 = 0;
      VAR_9 += (VAR_8->color >= 0) * 4;
      VAR_9 += (VAR_8->tex_coord >= 0) * 2;
      VAR_9 += (VAR_8->vertex_coord >= 0) * 2;
      VAR_9 += (VAR_8->lut_tex_coord >= 0) * 2;

      VAR_9 *= VAR_1->vertices * sizeof(GLfloat);

      VAR_6 = (GLfloat*)FUNC_3(VAR_9);
   }

   if (!VAR_6)
      return 0;

   if (VAR_8->tex_coord >= 0)
   {
      FUNC_2(VAR_3, VAR_8->tex_coord,
            VAR_1->tex_coord, VAR_1, VAR_5, 2);
      VAR_4++;
   }

   if (VAR_8->vertex_coord >= 0)
   {
      FUNC_2(VAR_3, VAR_8->vertex_coord,
            VAR_1->vertex, VAR_1, VAR_5, 2);
      VAR_4++;
   }

   if (VAR_8->color >= 0)
   {
      FUNC_2(VAR_3, VAR_8->color,
            VAR_1->color, VAR_1, VAR_5, 4);
      VAR_4++;
   }

   if (VAR_8->lut_tex_coord >= 0)
   {
      FUNC_2(VAR_3, VAR_8->lut_tex_coord,
            VAR_1->lut_tex_coord, VAR_1, VAR_5, 2);
      VAR_4++;
   }

   if (VAR_5)
      FUNC_1(VAR_7,
            VAR_7->vbo[VAR_7->active_idx].vbo_primary,
            &VAR_7->vbo[VAR_7->active_idx].buffer_primary,
            &VAR_7->vbo[VAR_7->active_idx].size_primary,
            VAR_6, VAR_5,
            VAR_3, VAR_4);

   if (VAR_6 != VAR_2)
      FUNC_0(VAR_6);

   return 1;
}
