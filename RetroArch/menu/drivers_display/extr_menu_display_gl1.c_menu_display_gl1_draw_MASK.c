
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int * matrix; TYPE_6__* data; } ;
typedef TYPE_3__ video_shader_ctx_mvp_t ;
struct TYPE_15__ {scalar_t__ userdata; } ;
typedef TYPE_4__ video_frame_info_t ;
struct TYPE_16__ {TYPE_1__* coords; int prim_type; scalar_t__ matrix_data; scalar_t__ texture; } ;
typedef TYPE_5__ menu_display_ctx_draw_t ;
typedef int math_matrix_4x4 ;
struct TYPE_13__ {int color; } ;
struct TYPE_17__ {int white_color_ptr; TYPE_2__ coords; } ;
typedef TYPE_6__ gl1_t ;
struct TYPE_12__ {float* vertex; int vertices; void* tex_coord; int color; void* lut_tex_coord; } ;
typedef int GLuint ;
typedef int GLfloat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (float*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int,int ,int ,void*) ;
 int FUNC_13 (int,int ,int ,float*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (float*,float*,int) ;
 scalar_t__ FUNC_16 (TYPE_4__*) ;
 void* FUNC_17 () ;
 float* FUNC_18 () ;
 int FUNC_19 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_20 (int ) ;
 float* VAR_7 ;

__attribute__((used)) static void FUNC_21(menu_display_ctx_draw_t *VAR_8,
      video_frame_info_t *VAR_9)
{
   video_shader_ctx_mvp_t VAR_10;
   gl1_t *VAR_11 = (gl1_t*)VAR_9->userdata;

   if (!VAR_11 || !VAR_8)
      return;

   if (!VAR_8->coords->vertex)
      VAR_8->coords->vertex = FUNC_18();
   if (!VAR_8->coords->tex_coord)
      VAR_8->coords->tex_coord = FUNC_17();
   if (!VAR_8->coords->lut_tex_coord)
      VAR_8->coords->lut_tex_coord = FUNC_17();

   FUNC_19(VAR_8, VAR_9);

   FUNC_5(VAR_4);

   FUNC_1(VAR_4, (GLuint)VAR_8->texture);

   VAR_10.data = VAR_11;
   VAR_10.matrix = VAR_8->matrix_data ? (math_matrix_4x4*)VAR_8->matrix_data
      : (math_matrix_4x4*)FUNC_16(VAR_9);

   FUNC_9(VAR_3);
   FUNC_11();
   FUNC_8((const GLfloat*)VAR_10.matrix);

   FUNC_9(VAR_2);
   FUNC_11();
   FUNC_7();

   FUNC_6(VAR_0);
   FUNC_6(VAR_6);
   FUNC_6(VAR_5);
   FUNC_13(2, VAR_1, 0, VAR_8->coords->vertex);


   FUNC_2(4, VAR_1, 0, VAR_8->coords->color);
   FUNC_12(2, VAR_1, 0, VAR_8->coords->tex_coord);

   FUNC_4(FUNC_20(
            VAR_8->prim_type), 0, VAR_8->coords->vertices);

   FUNC_3(VAR_0);
   FUNC_3(VAR_5);
   FUNC_3(VAR_6);

   FUNC_9(VAR_2);
   FUNC_10();
   FUNC_9(VAR_3);
   FUNC_10();

   VAR_11->coords.color = VAR_11->white_color_ptr;
}
