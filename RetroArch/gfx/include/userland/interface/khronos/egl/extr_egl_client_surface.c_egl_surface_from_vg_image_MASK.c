
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ VGImage ;
struct TYPE_5__ {int swap_interval; int server_owned; int is_destroyed; int is_locked; int buffers; int avail_buffers_valid; int alphaformat; int colorspace; scalar_t__ height; scalar_t__ width; scalar_t__ serverbuffer; scalar_t__ mapped_buffer; scalar_t__ context_binding_count; scalar_t__* pixmap_server_handle; scalar_t__ pixmap; void* texture_target; void* texture_format; scalar_t__ mipmap_level; scalar_t__ mipmap_texture; scalar_t__ largest_pbuffer; scalar_t__ win; scalar_t__ config; int type; int name; } ;
typedef scalar_t__ KHRN_IMAGE_FORMAT_T ;
typedef scalar_t__ EGLint ;
typedef void* EGLenum ;
typedef TYPE_1__ EGL_SURFACE_T ;
typedef int EGLSurface ;
typedef scalar_t__ EGLConfig ;
typedef scalar_t__ EGLBoolean ;
typedef int CLIENT_THREAD_STATE_T ;


 int * FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int *,int ,int ,int ,int ,int ,int ,int ,int ,int ,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 TYPE_1__* FUNC_8 () ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int) ;

EGL_SURFACE_T *FUNC_11(
   VGImage VAR_14,
   EGLSurface VAR_15,
   EGLConfig VAR_16,
   EGLBoolean VAR_17,
   EGLBoolean VAR_18,
   EGLenum VAR_19,
   EGLenum VAR_20,
   EGLint *VAR_21)
{
   KHRN_IMAGE_FORMAT_T VAR_22;
   KHRN_IMAGE_FORMAT_T VAR_23;
   KHRN_IMAGE_FORMAT_T VAR_24;
   KHRN_IMAGE_FORMAT_T VAR_25;
   EGLint VAR_26;
   EGLint VAR_27;
   uint32_t VAR_28[5];
   CLIENT_THREAD_STATE_T *VAR_29 = FUNC_0();

   EGL_SURFACE_T *VAR_30 = FUNC_8();

   if (!VAR_30) {
      *VAR_21 = VAR_1;
      return 0;
   }



   VAR_30->name = VAR_15;
   VAR_30->type = VAR_10;

   VAR_30->config = VAR_16;
   VAR_30->win = 0;
   VAR_30->swap_interval = 1;

   VAR_30->largest_pbuffer = VAR_17;
   VAR_30->mipmap_texture = VAR_18;
   VAR_30->mipmap_level = 0;
   VAR_30->texture_format = VAR_19;
   VAR_30->texture_target = VAR_20;
   VAR_30->pixmap = 0;
   VAR_30->pixmap_server_handle[0] = 0;
   VAR_30->pixmap_server_handle[1] = (uint32_t)-1;
   VAR_30->server_owned = 0;

   VAR_30->context_binding_count = 0;
   VAR_30->is_destroyed = 0;






   VAR_22 = FUNC_4((int)(size_t)VAR_16 - 1);
   VAR_23 = FUNC_5((int)(size_t)VAR_16 - 1);
   VAR_24 = FUNC_6((int)(size_t)VAR_16 - 1);
   VAR_25 = FUNC_7((int)(size_t)VAR_16 - 1);


   FUNC_3((int)(size_t)VAR_16 - 1, VAR_2, &VAR_26);
   FUNC_3((int)(size_t)VAR_16 - 1, VAR_3, &VAR_27);

   FUNC_10(VAR_22 != VAR_5);

   VAR_30->buffers = 1;

   FUNC_1(VAR_13,
                     VAR_29,
                     VAR_0,
                     FUNC_2(VAR_14),
                     FUNC_2(VAR_22),
                     FUNC_2(VAR_23),
                     FUNC_2(VAR_24),
                     FUNC_2(VAR_25),
                     FUNC_2(VAR_18),
                     FUNC_2(VAR_26),
                     FUNC_2(VAR_27),
                     VAR_28);

   VAR_30->avail_buffers_valid = 0;

   if (VAR_28[0]) {
      KHRN_IMAGE_FORMAT_T VAR_31 = (KHRN_IMAGE_FORMAT_T)VAR_28[4];

      VAR_30->serverbuffer = VAR_28[0];
      VAR_30->width = VAR_28[2];
      VAR_30->height = VAR_28[3];


      VAR_30->colorspace = (VAR_31 & VAR_6) ? VAR_8 : VAR_12;
      VAR_30->alphaformat = (VAR_31 & VAR_7) ? VAR_11 : VAR_9;
      *VAR_21 = VAR_4;
      return VAR_30;
   } else {
      *VAR_21 = VAR_28[1];
      FUNC_9(VAR_30);
      return 0;
   }
}
