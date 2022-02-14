
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_21__ {int idx; struct gfx_fbo_scale* scale; } ;
typedef TYPE_3__ video_shader_ctx_scale_t ;
struct TYPE_22__ {int num; } ;
typedef TYPE_4__ video_shader_ctx_info_t ;
struct gfx_fbo_scale {int valid; float scale_x; float scale_y; void* type_y; void* type_x; } ;
struct TYPE_23__ {unsigned int video_width; unsigned int video_height; int fbo_feedback_enable; unsigned int fbo_feedback_pass; int fbo_inited; TYPE_2__* fbo_rect; int shader_data; TYPE_1__* shader; int has_fbo; } ;
typedef TYPE_5__ gl_t ;
struct TYPE_24__ {int fbo_pass; int fbo_texture; struct gfx_fbo_scale* fbo_scale; } ;
typedef TYPE_6__ gl2_renderchain_data_t ;
struct TYPE_20__ {void* height; void* width; int img_height; int img_width; } ;
struct TYPE_19__ {int (* get_feedback_pass ) (int ,unsigned int*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,void*,void*) ;
 void* VAR_0 ;
 int FUNC_2 (char*,size_t,int) ;
 int FUNC_3 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_6__*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_6 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_7 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_8 (int,int ) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (int ,unsigned int*) ;

__attribute__((used)) static void FUNC_11(
      gl_t *VAR_1,
      gl2_renderchain_data_t *VAR_2,
      unsigned VAR_3, unsigned VAR_4)
{
   int VAR_5;
   unsigned VAR_6, VAR_7;
   video_shader_ctx_scale_t VAR_8;
   video_shader_ctx_info_t VAR_9;
   struct gfx_fbo_scale VAR_10, VAR_11;

   if (!FUNC_6(VAR_1, &VAR_9))
      return;

   if (!VAR_1 || VAR_9.num == 0)
      return;

   VAR_6 = VAR_1->video_width;
   VAR_7 = VAR_1->video_height;

   VAR_8.idx = 1;
   VAR_8.scale = &VAR_10;

   FUNC_7(VAR_1, &VAR_8);

   VAR_8.idx = VAR_9.num;
   VAR_8.scale = &VAR_11;

   FUNC_7(VAR_1, &VAR_8);


   if (VAR_9.num == 1 && !VAR_10.valid)
      return;

   if (!VAR_1->has_fbo)
   {
      FUNC_0("[GL]: Failed to locate FBO functions. Won't be able to use render-to-texture.\n");
      return;
   }

   VAR_2->fbo_pass = VAR_9.num - 1;
   if (VAR_11.valid)
      VAR_2->fbo_pass++;

   if (!VAR_10.valid)
   {
      VAR_10.scale_x = 1.0f;
      VAR_10.scale_y = 1.0f;
      VAR_10.type_x = VAR_10.type_y = VAR_0;
      VAR_10.valid = 1;
   }

   VAR_2->fbo_scale[0] = VAR_10;

   for (VAR_5 = 1; VAR_5 < VAR_2->fbo_pass; VAR_5++)
   {
      VAR_8.idx = VAR_5 + 1;
      VAR_8.scale = &VAR_2->fbo_scale[VAR_5];

      FUNC_7(VAR_1, &VAR_8);

      if (!VAR_2->fbo_scale[VAR_5].valid)
      {
         VAR_2->fbo_scale[VAR_5].scale_x = VAR_2->fbo_scale[VAR_5].scale_y = 1.0f;
         VAR_2->fbo_scale[VAR_5].type_x = VAR_2->fbo_scale[VAR_5].type_y =
            VAR_0;
         VAR_2->fbo_scale[VAR_5].valid = 1;
      }
   }

   FUNC_5(VAR_1,
         VAR_2, VAR_3, VAR_4, VAR_6, VAR_7);

   for (VAR_5 = 0; VAR_5 < VAR_2->fbo_pass; VAR_5++)
   {
      VAR_1->fbo_rect[VAR_5].width = FUNC_9(VAR_1->fbo_rect[VAR_5].img_width);
      VAR_1->fbo_rect[VAR_5].height = FUNC_9(VAR_1->fbo_rect[VAR_5].img_height);
      FUNC_1("[GL]: Creating FBO %d @ %ux%u\n", VAR_5,
            VAR_1->fbo_rect[VAR_5].width, VAR_1->fbo_rect[VAR_5].height);
   }

   VAR_1->fbo_feedback_enable = VAR_1->shader->get_feedback_pass(VAR_1->shader_data,
         &VAR_1->fbo_feedback_pass);

   if (VAR_1->fbo_feedback_enable && VAR_1->fbo_feedback_pass
         < (unsigned)VAR_2->fbo_pass)
   {
      FUNC_1("[GL]: Creating feedback FBO %d @ %ux%u\n", VAR_5,
            VAR_1->fbo_rect[VAR_1->fbo_feedback_pass].width,
            VAR_1->fbo_rect[VAR_1->fbo_feedback_pass].height);
   }
   else if (VAR_1->fbo_feedback_enable)
   {
      FUNC_2("[GL]: Tried to create feedback FBO of pass #%u, but there are only %d FBO passes. Will use input texture as feedback texture.\n",
              VAR_1->fbo_feedback_pass, VAR_2->fbo_pass);
      VAR_1->fbo_feedback_enable = 0;
   }

   FUNC_4(VAR_1, VAR_2);
   if (!VAR_1 || !FUNC_3(VAR_1, VAR_2))
   {
      FUNC_8(VAR_2->fbo_pass, VAR_2->fbo_texture);
      FUNC_0("[GL]: Failed to create FBO targets. Will continue without FBO.\n");
      return;
   }

   VAR_1->fbo_inited = 1;
}
