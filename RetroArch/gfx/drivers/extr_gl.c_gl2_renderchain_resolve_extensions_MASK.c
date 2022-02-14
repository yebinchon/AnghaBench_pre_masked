
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int video_info_t ;
struct TYPE_9__ {int video_force_srgb_disable; } ;
struct TYPE_11__ {TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_12__ {int ctx_data; TYPE_2__* ctx_driver; int hw_render_use; } ;
typedef TYPE_4__ gl_t ;
struct TYPE_13__ {int has_srgb_fbo; int egl_images; void* has_srgb_fbo_gles3; void* has_fp_fbo; } ;
typedef TYPE_5__ gl2_renderchain_data_t ;
struct TYPE_10__ {scalar_t__ (* image_buffer_init ) (int ,int const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 () ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int const*) ;

__attribute__((used)) static void FUNC_3(gl_t *VAR_4,
      gl2_renderchain_data_t *VAR_5,
      const char *VAR_6,
      const video_info_t *VAR_7)
{
   settings_t *VAR_8 = FUNC_0();

   if (!VAR_5)
      return;

   VAR_5->has_srgb_fbo = 0;
   VAR_5->has_fp_fbo = FUNC_1(VAR_1);

   VAR_5->has_srgb_fbo_gles3 = FUNC_1(VAR_3);

   if (!VAR_8->bools.video_force_srgb_disable)
      VAR_5->has_srgb_fbo = FUNC_1(VAR_2);


   VAR_5->egl_images = !VAR_4->hw_render_use
      && FUNC_1(VAR_0)
      && VAR_4->ctx_driver->image_buffer_init
      && VAR_4->ctx_driver->image_buffer_init(VAR_4->ctx_data, VAR_7);
}
