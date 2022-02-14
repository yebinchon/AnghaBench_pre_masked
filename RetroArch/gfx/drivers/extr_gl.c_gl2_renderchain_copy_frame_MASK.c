
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ use_rgba; } ;
typedef TYPE_1__ video_frame_info_t ;
typedef int uint8_t ;
struct TYPE_10__ {size_t tex_w; size_t tex_h; size_t tex_index; size_t base_size; void const* conv_buffer; int texture_fmt; int texture_type; int scaler; int have_es2_compat; scalar_t__ support_unpack_row_length; } ;
typedef TYPE_2__ gl_t ;
struct TYPE_11__ {scalar_t__ egl_images; } ;
typedef TYPE_3__ gl2_renderchain_data_t ;
struct TYPE_12__ {unsigned int width; unsigned int height; unsigned int pitch; size_t index; int rgb32; scalar_t__* handle; void const* frame; } ;
typedef TYPE_4__ gfx_ctx_image_t ;
typedef void GLvoid ;
typedef int GLeglImageOES ;
typedef scalar_t__ EGLImageKHR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ,int ,int ,int ,unsigned int,unsigned int,int ,int ,void const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int const*,unsigned int const) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int *,void const*,void const*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_9 (int *,void*,void const*,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_10 (unsigned int) ;

__attribute__((used)) static void FUNC_11(
      gl_t *VAR_6,
      gl2_renderchain_data_t *VAR_7,
      video_frame_info_t *VAR_8,
      const void *VAR_9,
      unsigned VAR_10, unsigned VAR_11, unsigned VAR_12)
{
   {
      const GLvoid *VAR_13 = VAR_9;
      FUNC_3(VAR_4, FUNC_10(VAR_12));

      if (VAR_6->base_size == 2 && !VAR_6->have_es2_compat)
      {





         FUNC_9(
               &VAR_6->scaler,
               VAR_6->conv_buffer,
               VAR_9,
               VAR_10,
               VAR_11,
               VAR_12);
         VAR_13 = VAR_6->conv_buffer;
      }
      else
         FUNC_3(VAR_5, VAR_12 / VAR_6->base_size);

      FUNC_4(VAR_2,
            0, 0, 0, VAR_10, VAR_11, VAR_6->texture_type,
            VAR_6->texture_fmt, VAR_13);

      FUNC_3(VAR_5, 0);
   }

}
