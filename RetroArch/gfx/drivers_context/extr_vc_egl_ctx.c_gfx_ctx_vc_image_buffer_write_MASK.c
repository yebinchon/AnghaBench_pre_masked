
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctx; int surf; int dpy; } ;
struct TYPE_4__ {TYPE_1__ egl; void** eglBuffer; scalar_t__* vgimage; int eglimage_ctx; int res; int pbuff_surf; } ;
typedef TYPE_2__ vc_ctx_data_t ;
typedef int EGLClientBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 void* FUNC_3 (int ,int ,int ,int ,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (scalar_t__,void const*,unsigned int,int ,int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static bool FUNC_6(void *VAR_7, const void *VAR_8, unsigned VAR_9,
      unsigned VAR_10, unsigned VAR_11, bool VAR_12, unsigned VAR_13, void **VAR_14)
{
   bool VAR_15 = 0;
   vc_ctx_data_t *VAR_16 = (vc_ctx_data_t*)VAR_7;

   if (!VAR_16 || VAR_13 >= VAR_2)
      goto error;

   FUNC_0(VAR_0);
   FUNC_1(VAR_16->egl.dpy, VAR_16->pbuff_surf, VAR_16->pbuff_surf, VAR_16->eglimage_ctx);

   if (!VAR_16->eglBuffer[VAR_13] || !VAR_16->vgimage[VAR_13])
   {
      VAR_16->vgimage[VAR_13] = FUNC_4(
            VAR_12 ? VAR_5 : VAR_4,
            VAR_16->res,
            VAR_16->res,
            VAR_3);
      VAR_16->eglBuffer[VAR_13] = FUNC_3(
            VAR_16->egl.dpy,
            VAR_16->eglimage_ctx,
            VAR_1,
            (EGLClientBuffer)VAR_16->vgimage[VAR_13],
            ((void*)0));
      VAR_15 = 1;
   }

   FUNC_5(
         VAR_16->vgimage[VAR_13],
         VAR_8, VAR_11,
         (VAR_12 ? VAR_5 : VAR_4),
         0,
         0,
         VAR_9,
         VAR_10);
   *VAR_14 = VAR_16->eglBuffer[VAR_13];

   FUNC_2(((void*)0), VAR_6, 0, 0);
   FUNC_1(VAR_16->egl.dpy, VAR_16->egl.surf, VAR_16->egl.surf, VAR_16->egl.ctx);

   return VAR_15;

error:
   *VAR_14 = ((void*)0);
   return 0;
}
