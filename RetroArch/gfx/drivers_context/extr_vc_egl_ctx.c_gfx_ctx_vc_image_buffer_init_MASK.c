
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int input_scale; int smooth; } ;
typedef TYPE_2__ video_info_t ;
struct TYPE_6__ {scalar_t__ surf; scalar_t__ ctx; int dpy; int config; } ;
struct TYPE_8__ {int res; scalar_t__ pbuff_surf; scalar_t__ eglimage_ctx; TYPE_1__ egl; int smooth; } ;
typedef TYPE_3__ vc_ctx_data_t ;
typedef scalar_t__ PFNEGLDESTROYIMAGEKHRPROC ;
typedef scalar_t__ PFNEGLCREATEIMAGEKHRPROC ;
typedef int EGLint ;
typedef scalar_t__ EGLBoolean ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*) ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (int *,scalar_t__,int ,int ) ;
 int FUNC_9 (TYPE_3__*,char*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static bool FUNC_10(void *VAR_12,
      const video_info_t *VAR_13)
{
   EGLBoolean VAR_14;
   vc_ctx_data_t *VAR_15 = (vc_ctx_data_t*)VAR_12;
   EGLint VAR_16[] =
   {
      VAR_6, VAR_15->res,
      VAR_1, VAR_15->res,
      VAR_2
   };


   if (VAR_11 == VAR_7)
      return 0;

   VAR_9 = (PFNEGLCREATEIMAGEKHRPROC)FUNC_7("eglCreateImageKHR");
   VAR_10 = (PFNEGLDESTROYIMAGEKHRPROC)FUNC_7("eglDestroyImageKHR");

   if ( !VAR_9 ||
         !VAR_10 ||
         !FUNC_9(VAR_15, "KHR_image")
      )
      return 0;

   VAR_15->res = VAR_13->input_scale * VAR_8;

   FUNC_1(VAR_5);
   VAR_15->pbuff_surf = FUNC_3(VAR_15->egl.dpy, VAR_15->egl.config, VAR_16);
   if (VAR_15->pbuff_surf == VAR_4)
   {
      FUNC_0("[VideoCore:EGLImage] failed to create PbufferSurface\n");
      goto fail;
   }

   VAR_15->eglimage_ctx = FUNC_2(VAR_15->egl.dpy, VAR_15->egl.config, ((void*)0), ((void*)0));
   if (VAR_15->eglimage_ctx == VAR_3)
   {
      FUNC_0("[VideoCore:EGLImage] failed to create context\n");
      goto fail;
   }


   VAR_14 = FUNC_6(VAR_15->egl.dpy, VAR_15->pbuff_surf, VAR_15->pbuff_surf, VAR_15->eglimage_ctx);
   if (VAR_14 == VAR_0)
   {
      FUNC_0("[VideoCore:EGLImage] failed to make context current\n");
      goto fail;
   }

   FUNC_8(((void*)0), VAR_11, 0, 0);
   FUNC_6(VAR_15->egl.dpy, VAR_15->egl.surf, VAR_15->egl.surf, VAR_15->egl.ctx);

   VAR_15->smooth = VAR_13->smooth;
   return 1;

fail:
   if (VAR_15->pbuff_surf != VAR_4)
   {
      FUNC_5(VAR_15->egl.dpy, VAR_15->pbuff_surf);
      VAR_15->pbuff_surf = VAR_4;
   }

   if (VAR_15->eglimage_ctx != VAR_3)
   {
      FUNC_4(VAR_15->egl.dpy, VAR_15->eglimage_ctx);
      VAR_15->pbuff_surf = VAR_3;
   }

   FUNC_8(((void*)0), VAR_11, 0, 0);
   FUNC_6(VAR_15->egl.dpy, VAR_15->egl.surf, VAR_15->egl.surf, VAR_15->egl.ctx);

   return 0;
}
