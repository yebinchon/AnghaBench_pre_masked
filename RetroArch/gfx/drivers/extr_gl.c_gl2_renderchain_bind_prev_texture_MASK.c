
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct video_tex_info {int dummy; } ;
struct TYPE_5__ {int textures; size_t fbo_feedback_pass; void* fbo_feedback_texture; void* fbo_feedback; scalar_t__ fbo_feedback_enable; int * prev_info; } ;
typedef TYPE_1__ gl_t ;
struct TYPE_6__ {void** fbo_texture; void** fbo; } ;
typedef TYPE_2__ gl2_renderchain_data_t ;
typedef void* GLuint ;


 int FUNC_0 (int *,struct video_tex_info const*,int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(
      gl_t *VAR_0,
      gl2_renderchain_data_t *VAR_1,
      const struct video_tex_info *VAR_2)
{
   FUNC_1(VAR_0->prev_info + 1, VAR_0->prev_info,
         sizeof(*VAR_2) * (VAR_0->textures - 1));
   FUNC_0(&VAR_0->prev_info[0], VAR_2,
         sizeof(*VAR_2));



   if (VAR_0->fbo_feedback_enable)
   {
      GLuint VAR_3 = VAR_0->fbo_feedback;
      GLuint VAR_4 = VAR_0->fbo_feedback_texture;
      VAR_0->fbo_feedback = VAR_1->fbo[VAR_0->fbo_feedback_pass];
      VAR_0->fbo_feedback_texture = VAR_1->fbo_texture[VAR_0->fbo_feedback_pass];
      VAR_1->fbo[VAR_0->fbo_feedback_pass] = VAR_3;
      VAR_1->fbo_texture[VAR_0->fbo_feedback_pass] = VAR_4;
   }
}
