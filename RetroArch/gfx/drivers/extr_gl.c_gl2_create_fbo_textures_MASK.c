
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int fbo_feedback_pass; int fbo_feedback_texture; scalar_t__ renderchain_data; scalar_t__ fbo_feedback_enable; } ;
typedef TYPE_1__ gl_t ;
struct TYPE_8__ {int fbo_pass; int * fbo_texture; } ;
typedef TYPE_2__ gl2_renderchain_data_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(gl_t *VAR_1,
      gl2_renderchain_data_t *VAR_2)
{
   int VAR_3;

   FUNC_2(VAR_2->fbo_pass, VAR_2->fbo_texture);

   for (VAR_3 = 0; VAR_3 < VAR_2->fbo_pass; VAR_3++)
      FUNC_0(VAR_1,
            (gl2_renderchain_data_t*)VAR_1->renderchain_data,
            VAR_3, VAR_2->fbo_texture[VAR_3]);

   if (VAR_1->fbo_feedback_enable)
   {
      FUNC_2(1, &VAR_1->fbo_feedback_texture);
      FUNC_0(VAR_1,
            (gl2_renderchain_data_t*)VAR_1->renderchain_data,
            VAR_1->fbo_feedback_pass, VAR_1->fbo_feedback_texture);
   }

   FUNC_1(VAR_0, 0);
}
