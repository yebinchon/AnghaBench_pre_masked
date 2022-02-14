
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fbo_inited; int fbo_feedback_enable; scalar_t__ fbo_feedback; scalar_t__ fbo_feedback_texture; scalar_t__ fbo_feedback_pass; } ;
typedef TYPE_1__ gl_t ;
struct TYPE_6__ {int fbo_pass; scalar_t__* fbo; scalar_t__* fbo_texture; } ;
typedef TYPE_2__ gl2_renderchain_data_t ;


 int FUNC_0 (int,scalar_t__*) ;
 int FUNC_1 (int,scalar_t__*) ;
 int FUNC_2 (scalar_t__*,int ,int) ;

__attribute__((used)) static void FUNC_3(gl_t *VAR_0,
      gl2_renderchain_data_t *VAR_1)
{
   if (VAR_0)
   {
      if (VAR_0->fbo_feedback)
         FUNC_0(1, &VAR_0->fbo_feedback);
      if (VAR_0->fbo_feedback_texture)
         FUNC_1(1, &VAR_0->fbo_feedback_texture);

      VAR_0->fbo_inited = 0;
      VAR_0->fbo_feedback_enable = 0;
      VAR_0->fbo_feedback_pass = 0;
      VAR_0->fbo_feedback_texture = 0;
      VAR_0->fbo_feedback = 0;
   }

   if (VAR_1)
   {
      FUNC_0(VAR_1->fbo_pass, VAR_1->fbo);
      FUNC_1(VAR_1->fbo_pass, VAR_1->fbo_texture);

      FUNC_2(VAR_1->fbo_texture, 0, sizeof(VAR_1->fbo_texture));
      FUNC_2(VAR_1->fbo, 0, sizeof(VAR_1->fbo));

      VAR_1->fbo_pass = 0;
   }
}
