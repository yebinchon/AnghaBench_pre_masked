
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ video_force_srgb_disable; scalar_t__ video_smooth; } ;
struct TYPE_15__ {TYPE_3__ bools; } ;
typedef TYPE_5__ settings_t ;
struct TYPE_16__ {TYPE_4__* fbo_rect; int shader_data; TYPE_1__* shader; } ;
typedef TYPE_6__ gl_t ;
struct TYPE_17__ {scalar_t__ has_srgb_fbo_gles3; scalar_t__ has_srgb_fbo; TYPE_2__* fbo_scale; scalar_t__ has_fp_fbo; } ;
typedef TYPE_7__ gl2_renderchain_data_t ;
typedef enum gfx_wrap_type { ____Placeholder_gfx_wrap_type } gfx_wrap_type ;
struct TYPE_14__ {int height; int width; } ;
struct TYPE_12__ {int fp_fbo; int srgb_fbo; } ;
struct TYPE_11__ {int (* mipmap_input ) (int ,unsigned int) ;int (* wrap_type ) (int ,unsigned int) ;scalar_t__ (* filter_type ) (int ,unsigned int,int*) ;} ;
typedef void* GLuint ;
typedef void* GLenum ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (char*,unsigned int) ;
 TYPE_5__* FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 void* FUNC_4 (void*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_7 (void*,void*,void*,void*) ;
 int FUNC_8 (int ,unsigned int) ;
 scalar_t__ FUNC_9 (int ,unsigned int,int*) ;
 int FUNC_10 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_11(gl_t *VAR_14,
      gl2_renderchain_data_t *VAR_15,
      unsigned VAR_16, GLuint VAR_17)
{
   GLenum VAR_18, VAR_19;
   enum gfx_wrap_type VAR_20;
   bool VAR_21 = 0;
   bool VAR_22 = 0;
   settings_t *VAR_23 = FUNC_2();
   GLuint VAR_24 = VAR_23->bools.video_smooth ? VAR_1 : VAR_3;
   GLuint VAR_25 = VAR_23->bools.video_smooth ?
      VAR_2 : VAR_4;
   unsigned VAR_26 = VAR_16 + 2;
   bool VAR_27 = VAR_14->shader->mipmap_input(VAR_14->shader_data, VAR_26);
   GLenum VAR_28 = VAR_27 ? VAR_25 : VAR_24;

   if (VAR_14->shader->filter_type(VAR_14->shader_data,
            VAR_16 + 2, &VAR_22))
   {
      VAR_28 = VAR_27 ? (VAR_22 ?
            VAR_2 : VAR_4)
         : (VAR_22 ? VAR_1 : VAR_3);
   }

   VAR_18 = FUNC_4(VAR_28);

   VAR_20 = VAR_14->shader->wrap_type(VAR_14->shader_data, VAR_16 + 2);

   VAR_19 = FUNC_5(VAR_20);

   FUNC_7(VAR_17, VAR_19, VAR_18, VAR_28);

   VAR_21 = VAR_15->fbo_scale[VAR_16].fp_fbo;

   if (VAR_21)
   {
      if (!VAR_15->has_fp_fbo)
         FUNC_0("[GL]: Floating-point FBO was requested, but is not supported. Falling back to UNORM. Result may band/clip/etc.!\n");
   }


   if (VAR_21 && VAR_15->has_fp_fbo)
   {
      FUNC_1("[GL]: FBO pass #%d is floating-point.\n", VAR_16);
      FUNC_3(VAR_9, 0, VAR_6,
         VAR_14->fbo_rect[VAR_16].width, VAR_14->fbo_rect[VAR_16].height,
         0, VAR_5, VAR_0, ((void*)0));
   }
   else

   {

      bool VAR_29 = VAR_15->fbo_scale[VAR_16].srgb_fbo;

      if (!VAR_21 && VAR_29)
      {
         if (!VAR_15->has_srgb_fbo)
               FUNC_0("[GL]: sRGB FBO was requested, but it is not supported. Falling back to UNORM. Result may have banding!\n");
      }

      if (VAR_23->bools.video_force_srgb_disable)
         VAR_29 = 0;

      if (VAR_29 && VAR_15->has_srgb_fbo)
      {
         FUNC_1("[GL]: FBO pass #%d is sRGB.\n", VAR_16);
         FUNC_3(VAR_9,
            0, VAR_7,
            VAR_14->fbo_rect[VAR_16].width, VAR_14->fbo_rect[VAR_16].height, 0,
            VAR_5, VAR_10, ((void*)0));

      }
      else

      {
         FUNC_3(VAR_9,
            0, VAR_12,
            VAR_14->fbo_rect[VAR_16].width, VAR_14->fbo_rect[VAR_16].height, 0,
            VAR_13, VAR_11, ((void*)0));

      }
   }
}
