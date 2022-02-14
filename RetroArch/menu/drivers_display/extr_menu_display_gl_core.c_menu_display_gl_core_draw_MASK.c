
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ userdata; } ;
typedef TYPE_5__ video_frame_info_t ;
struct gl_core_buffer_locations {scalar_t__ flat_ubo_vertex; scalar_t__ flat_ubo_fragment; } ;
struct TYPE_15__ {int id; int backend_data_size; scalar_t__ backend_data; } ;
struct TYPE_20__ {scalar_t__ prim_type; TYPE_4__* coords; scalar_t__ matrix_data; TYPE_1__ pipeline; scalar_t__ texture; } ;
typedef TYPE_6__ menu_display_ctx_draw_t ;
struct TYPE_21__ {int const* data; } ;
typedef TYPE_7__ math_matrix_4x4 ;
struct TYPE_16__ {scalar_t__ flat_ubo_vertex; } ;
struct TYPE_17__ {TYPE_2__ alpha_blend_loc; int alpha_blend; struct gl_core_buffer_locations bokeh_loc; int bokeh; struct gl_core_buffer_locations snow_loc; int snow; struct gl_core_buffer_locations snow_simple_loc; int snow_simple; struct gl_core_buffer_locations ribbon_simple_loc; int ribbon_simple; struct gl_core_buffer_locations ribbon_loc; int ribbon; } ;
struct TYPE_22__ {TYPE_3__ pipelines; } ;
typedef TYPE_8__ gl_core_t ;
struct TYPE_18__ {float* vertex; float* tex_coord; float* color; int vertices; } ;
typedef scalar_t__ GLuint ;
typedef int GLsizei ;
typedef int GLfloat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (scalar_t__,int,int const*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int,int ,int ,int,void*) ;
 int FUNC_10 (TYPE_8__*,float const*,int) ;
 float* FUNC_11 () ;
 scalar_t__ FUNC_12 (TYPE_5__*) ;
 float* FUNC_13 () ;
 float* FUNC_14 () ;
 int FUNC_15 (TYPE_6__*,TYPE_5__*) ;

__attribute__((used)) static void FUNC_16(menu_display_ctx_draw_t *VAR_12,
      video_frame_info_t *VAR_13)
{
   const float *VAR_14 = ((void*)0);
   const float *VAR_15 = ((void*)0);
   const float *VAR_16 = ((void*)0);
   GLuint VAR_17 = 0;
   gl_core_t *VAR_18 = (gl_core_t*)VAR_13->userdata;
   const struct gl_core_buffer_locations *VAR_19 = ((void*)0);

   if (!VAR_18 || !VAR_12)
      return;

   VAR_17 = (GLuint)VAR_12->texture;
   VAR_14 = VAR_12->coords->vertex;
   VAR_15 = VAR_12->coords->tex_coord;
   VAR_16 = VAR_12->coords->color;

   if (!VAR_14)
      VAR_14 = FUNC_14();
   if (!VAR_15)
      VAR_15 = FUNC_13();
   if (!VAR_16)
      VAR_16 = FUNC_11();

   FUNC_15(VAR_12, VAR_13);

   FUNC_0(VAR_6);
   FUNC_2(VAR_7, VAR_17);

   switch (VAR_12->pipeline.id)
   {
      case 132:
      case 131:
         FUNC_3(VAR_3, VAR_3);
         break;
      default:
         FUNC_3(VAR_5, VAR_4);
         break;
   }

   switch (VAR_12->pipeline.id)
   {
      default:
         FUNC_8(VAR_18->pipelines.alpha_blend);
         VAR_19 = ((void*)0);
         break;
   }

   if (VAR_19 && VAR_19->flat_ubo_vertex >= 0)
      FUNC_7(VAR_19->flat_ubo_vertex,
                   (GLsizei)((VAR_12->pipeline.backend_data_size + 15) / 16),
                   (const GLfloat*)VAR_12->pipeline.backend_data);

   if (VAR_19 && VAR_19->flat_ubo_fragment >= 0)
      FUNC_7(VAR_19->flat_ubo_fragment,
                   (GLsizei)((VAR_12->pipeline.backend_data_size + 15) / 16),
                   (const GLfloat*)VAR_12->pipeline.backend_data);

   if (!VAR_19)
   {
      const math_matrix_4x4 *VAR_20 = VAR_12->matrix_data
                     ? (const math_matrix_4x4*)VAR_12->matrix_data : (const math_matrix_4x4*)FUNC_12(VAR_13);
      if (VAR_18->pipelines.alpha_blend_loc.flat_ubo_vertex >= 0)
         FUNC_7(VAR_18->pipelines.alpha_blend_loc.flat_ubo_vertex,
                      4, VAR_20->data);
   }

   FUNC_6(0);
   FUNC_6(1);
   FUNC_6(2);

   FUNC_10(VAR_18, VAR_14,
         2 * sizeof(float) * VAR_12->coords->vertices);
   FUNC_9(0, 2, VAR_2, VAR_1,
         2 * sizeof(float), (void *)(uintptr_t)0);
   FUNC_10(VAR_18, VAR_15,
         2 * sizeof(float) * VAR_12->coords->vertices);
   FUNC_9(1, 2, VAR_2, VAR_1,
         2 * sizeof(float), (void *)(uintptr_t)0);
   FUNC_10(VAR_18, VAR_16,
         4 * sizeof(float) * VAR_12->coords->vertices);
   FUNC_9(2, 4, VAR_2, VAR_1,
         4 * sizeof(float), (void *)(uintptr_t)0);

   if (VAR_12->prim_type == VAR_11)
      FUNC_5(VAR_9, 0, VAR_12->coords->vertices);
   else if (VAR_12->prim_type == VAR_10)
      FUNC_5(VAR_8, 0, VAR_12->coords->vertices);

   FUNC_4(0);
   FUNC_4(1);
   FUNC_4(2);
   FUNC_1(VAR_0, 0);

   FUNC_2(VAR_7, 0);
}
