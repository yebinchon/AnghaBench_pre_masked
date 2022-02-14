
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_4__ {int * matrix; int scale_z; int scale_y; int scale_x; int scale_enable; int rotation; } ;
typedef TYPE_1__ menu_display_ctx_rotate_draw_t ;
typedef int math_matrix_4x4 ;
struct TYPE_5__ {scalar_t__ (* get_default_mvp ) (int *) ;scalar_t__ handles_transform; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 TYPE_3__* VAR_0 ;
 scalar_t__ FUNC_3 (int *) ;

void FUNC_4(menu_display_ctx_rotate_draw_t *VAR_1,
      video_frame_info_t *VAR_2)
{
   math_matrix_4x4 VAR_3, VAR_4;
   math_matrix_4x4 *VAR_5 = ((void*)0);

   if (
         !VAR_1 ||
         !VAR_0 ||
         !VAR_0->get_default_mvp ||
         VAR_0->handles_transform
      )
      return;

   VAR_5 = (math_matrix_4x4*)VAR_0->get_default_mvp(VAR_2);

   if (!VAR_5)
      return;

   FUNC_1(VAR_3, VAR_1->rotation);
   FUNC_0(*VAR_1->matrix, VAR_3, *VAR_5);

   if (!VAR_1->scale_enable)
      return;

   FUNC_2(VAR_4,
         VAR_1->scale_x, VAR_1->scale_y, VAR_1->scale_z);
   FUNC_0(*VAR_1->matrix, VAR_4, *VAR_1->matrix);
}
