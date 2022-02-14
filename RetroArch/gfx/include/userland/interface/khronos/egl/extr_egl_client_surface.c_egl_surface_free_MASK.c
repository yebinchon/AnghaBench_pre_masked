
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int WFCNativeStreamType ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ internal_handle; scalar_t__ serverbuffer; int win; } ;
typedef TYPE_1__ EGL_SURFACE_T ;
typedef int CLIENT_THREAD_STATE_T ;


 int * FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ) ;

void FUNC_8(EGL_SURFACE_T *VAR_4)
{
   CLIENT_THREAD_STATE_T *VAR_5;

   FUNC_6("egl_surface_free");

   VAR_5 = FUNC_0();

   if( VAR_4->type == VAR_2 ) {
      FUNC_6("egl_surface_free: calling platform_destroy_winhandle...");
      FUNC_5( VAR_4->win, VAR_4->internal_handle );
   }




   FUNC_6("egl_surface_free: calling eglIntDestroySurface_impl via RPC...; "
      "thread = 0x%X; serverbuffer = 0x%X",
      (uint32_t) VAR_5, (uint32_t) VAR_4->serverbuffer);
   (void)FUNC_2(FUNC_1(VAR_3,
                                   VAR_5,
                                   VAR_0,
                                   FUNC_3(VAR_4->serverbuffer)));
   FUNC_6("egl_surface_free: calling egl_surface_pool_free...");
   FUNC_4(VAR_4);

   FUNC_6("egl_surface_free: end");
}
