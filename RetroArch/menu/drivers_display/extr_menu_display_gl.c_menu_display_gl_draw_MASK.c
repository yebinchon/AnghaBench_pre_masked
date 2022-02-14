
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ userdata; } ;
typedef TYPE_3__ video_frame_info_t ;
struct TYPE_17__ {TYPE_6__* coords; int prim_type; scalar_t__ matrix_data; scalar_t__ texture; } ;
typedef TYPE_4__ menu_display_ctx_draw_t ;
typedef int math_matrix_4x4 ;
struct TYPE_15__ {int color; } ;
struct TYPE_18__ {int white_color_ptr; TYPE_2__ coords; int shader_data; TYPE_1__* shader; } ;
typedef TYPE_5__ gl_t ;
struct TYPE_19__ {int vertices; void* lut_tex_coord; void* tex_coord; scalar_t__ vertex; } ;
struct TYPE_14__ {int (* set_mvp ) (int ,int *) ;int (* set_coords ) (int ,TYPE_6__*) ;} ;
typedef int GLuint ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 void* FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_6__*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(menu_display_ctx_draw_t *VAR_1,
      video_frame_info_t *VAR_2)
{
   gl_t *VAR_3 = (gl_t*)VAR_2->userdata;

   if (!VAR_3 || !VAR_1)
      return;
   if (!VAR_1->coords->vertex)
      VAR_1->coords->vertex = FUNC_5();
   if (!VAR_1->coords->tex_coord)
      VAR_1->coords->tex_coord = FUNC_4();
   if (!VAR_1->coords->lut_tex_coord)
      VAR_1->coords->lut_tex_coord = FUNC_4();

   FUNC_6(VAR_1, VAR_2);
   FUNC_0(VAR_0, (GLuint)VAR_1->texture);

   VAR_3->shader->set_coords(VAR_3->shader_data, VAR_1->coords);
   VAR_3->shader->set_mvp(VAR_3->shader_data,
         VAR_1->matrix_data ? (math_matrix_4x4*)VAR_1->matrix_data
      : (math_matrix_4x4*)FUNC_3(VAR_2));


   FUNC_1(FUNC_7(
            VAR_1->prim_type), 0, VAR_1->coords->vertices);

   VAR_3->coords.color = VAR_3->white_color_ptr;
}
