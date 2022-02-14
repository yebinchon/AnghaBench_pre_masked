
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ config; int * dpy; int * surf; int * hw_ctx; int * ctx; } ;
struct TYPE_4__ {int vsync_condition; int vsync_condition_mutex; int dispman_display; scalar_t__ vsync_callback_set; scalar_t__* vgimage; int ** eglBuffer; TYPE_1__ egl; int * pbuff_surf; int * eglimage_ctx; } ;
typedef TYPE_2__ vc_ctx_data_t ;


 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (void*,int ,int ,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 int FUNC_9 (int ,int *,int *) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static void FUNC_11(void *VAR_6)
{
   vc_ctx_data_t *VAR_7 = (vc_ctx_data_t*)VAR_6;
   unsigned VAR_8;

   if (!VAR_7)
   {
       VAR_4 = 0;
       return;
   }

   if (VAR_7->egl.dpy)
   {
      for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
      {
         if (VAR_7->eglBuffer[VAR_8] && &FUNC_6)
         {
            FUNC_0(VAR_2);
            FUNC_3(VAR_7->egl.dpy,
                  VAR_7->pbuff_surf, VAR_7->pbuff_surf, VAR_7->eglimage_ctx);
            FUNC_6(VAR_7->egl.dpy, VAR_7->eglBuffer[VAR_8]);
         }

         if (VAR_7->vgimage[VAR_8])
         {
            FUNC_0(VAR_2);
            FUNC_3(VAR_7->egl.dpy,
                  VAR_7->pbuff_surf, VAR_7->pbuff_surf, VAR_7->eglimage_ctx);
            FUNC_10(VAR_7->vgimage[VAR_8]);
         }
      }

      if (VAR_7->egl.ctx)
      {
         FUNC_5(VAR_6, VAR_5, 0, 0);
         FUNC_3(VAR_7->egl.dpy,
               VAR_1, VAR_1, VAR_0);
         FUNC_1(VAR_7->egl.dpy, VAR_7->egl.ctx);
      }

      if (VAR_7->egl.hw_ctx)
         FUNC_1(VAR_7->egl.dpy, VAR_7->egl.hw_ctx);

      if (VAR_7->eglimage_ctx)
      {
         FUNC_0(VAR_2);
         FUNC_3(VAR_7->egl.dpy,
               VAR_1, VAR_1, VAR_0);
         FUNC_1(VAR_7->egl.dpy, VAR_7->eglimage_ctx);
      }

      if (VAR_7->egl.surf)
      {
         FUNC_5(VAR_6, VAR_5, 0, 0);
         FUNC_2(VAR_7->egl.dpy, VAR_7->egl.surf);
      }

      if (VAR_7->pbuff_surf)
      {
         FUNC_0(VAR_2);
         FUNC_2(VAR_7->egl.dpy, VAR_7->pbuff_surf);
      }

      FUNC_0(VAR_2);
      FUNC_3(VAR_7->egl.dpy,
            VAR_1, VAR_1, VAR_0);
      FUNC_5(VAR_6, VAR_5, 0, 0);
      FUNC_3(VAR_7->egl.dpy,
            VAR_1, VAR_1, VAR_0);
      FUNC_4(VAR_7->egl.dpy);
   }

   VAR_7->egl.ctx = ((void*)0);
   VAR_7->egl.hw_ctx = ((void*)0);
   VAR_7->eglimage_ctx = ((void*)0);
   VAR_7->egl.surf = ((void*)0);
   VAR_7->pbuff_surf = ((void*)0);
   VAR_7->egl.dpy = ((void*)0);
   VAR_7->egl.config = 0;
   VAR_4 = 0;

   for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
   {
      VAR_7->eglBuffer[VAR_8] = ((void*)0);
      VAR_7->vgimage[VAR_8] = 0;
   }



   if (VAR_7->vsync_callback_set)
      FUNC_9(VAR_7->dispman_display, ((void*)0), ((void*)0));


   FUNC_8(VAR_7->vsync_condition_mutex);
   FUNC_7(VAR_7->vsync_condition);
}
