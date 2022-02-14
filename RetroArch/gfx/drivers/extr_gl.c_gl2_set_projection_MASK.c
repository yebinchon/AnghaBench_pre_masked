
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct video_ortho {int zfar; int znear; int top; int bottom; int right; int left; } ;
typedef int math_matrix_4x4 ;
struct TYPE_3__ {float rotation; int mvp_no_rot; int mvp; } ;
typedef TYPE_1__ gl_t ;


 float VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,float) ;

__attribute__((used)) static void FUNC_3(gl_t *VAR_1,
      struct video_ortho *VAR_2, bool VAR_3)
{
   math_matrix_4x4 VAR_4;


   FUNC_1(VAR_1->mvp_no_rot, VAR_2->left, VAR_2->right,
         VAR_2->bottom, VAR_2->top, VAR_2->znear, VAR_2->zfar);

   if (!VAR_3)
   {
      VAR_1->mvp = VAR_1->mvp_no_rot;
      return;
   }

   FUNC_2(VAR_4, VAR_0 * VAR_1->rotation / 180.0f);
   FUNC_0(VAR_1->mvp, VAR_4, VAR_1->mvp_no_rot);
}
