
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int video_frame_info_t ;
struct TYPE_15__ {int visible; } ;
struct TYPE_17__ {int dpy; } ;
struct TYPE_14__ {int interval; } ;
struct TYPE_16__ {unsigned int width; unsigned int height; int buffer_scale; int configured; TYPE_1__ cursor; int swap_interval; int surface; TYPE_9__ input; int vk; scalar_t__ zxdg_toplevel; scalar_t__ xdg_toplevel; TYPE_10__ egl; int win; scalar_t__ zxdg_shell; scalar_t__ deco_manager; void* deco; int zxdg_surface; scalar_t__ xdg_shell; int xdg_surface; int compositor; } ;
typedef TYPE_2__ gfx_ctx_wayland_data_t ;
typedef int EGLint ;
typedef int EGLNativeWindowType ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;





 int VAR_2 ;
 int FUNC_0 (TYPE_10__*,int *) ;
 int FUNC_1 (TYPE_10__*,int ) ;
 int * FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_10__*,int ) ;
 int FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int *,int ,int ,int ,int,int,int ) ;
 int VAR_3 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int,int) ;
 int FUNC_13 (int ,int *,TYPE_2__*) ;
 int FUNC_14 (int ) ;
 int VAR_4 ;
 int FUNC_15 (int ,int) ;
 int VAR_5 ;
 int FUNC_16 (int ,int *,TYPE_2__*) ;
 scalar_t__ FUNC_17 (int ) ;
 int VAR_6 ;
 int FUNC_18 (scalar_t__,int *,TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_19 (scalar_t__,char*) ;
 int FUNC_20 (scalar_t__,int *) ;
 int FUNC_21 (scalar_t__,char*) ;
 int FUNC_22 (scalar_t__,int *,int *) ;
 int FUNC_23 (scalar_t__,int ) ;
 void* FUNC_24 (scalar_t__,scalar_t__) ;
 int FUNC_25 (scalar_t__,int *,int *) ;
 int FUNC_26 (scalar_t__,int ) ;
 int VAR_8 ;
 int FUNC_27 (int ,int *,TYPE_2__*) ;
 scalar_t__ FUNC_28 (int ) ;
 int VAR_9 ;
 int FUNC_29 (scalar_t__,int *,TYPE_2__*) ;
 int VAR_10 ;
 int FUNC_30 (scalar_t__,char*) ;
 int FUNC_31 (scalar_t__,int *) ;
 int FUNC_32 (scalar_t__,char*) ;

__attribute__((used)) static bool FUNC_33(void *VAR_11,
      video_frame_info_t *VAR_12,
      unsigned VAR_13, unsigned VAR_14,
      bool VAR_15)
{





   gfx_ctx_wayland_data_t *VAR_16 = (gfx_ctx_wayland_data_t*)VAR_11;

   VAR_16->width = VAR_13 ? VAR_13 : VAR_1;
   VAR_16->height = VAR_14 ? VAR_14 : VAR_0;

   VAR_16->surface = FUNC_9(VAR_16->compositor);

   FUNC_15(VAR_16->surface, VAR_16->buffer_scale);
   FUNC_13(VAR_16->surface, &VAR_4, VAR_16);

   switch (VAR_3)
   {
      case 131:
      case 130:
      case 129:



         break;
      case 132:
      default:
         break;
   }

   if (VAR_16->xdg_shell)
   {
      VAR_16->xdg_surface = FUNC_23(VAR_16->xdg_shell, VAR_16->surface);
      FUNC_16(VAR_16->xdg_surface, &VAR_6, VAR_16);

      VAR_16->xdg_toplevel = FUNC_17(VAR_16->xdg_surface);
      FUNC_18(VAR_16->xdg_toplevel, &VAR_7, VAR_16);

      FUNC_19(VAR_16->xdg_toplevel, "retroarch");
      FUNC_21(VAR_16->xdg_toplevel, "RetroArch");

      if (VAR_16->deco_manager)
      {
         VAR_16->deco = FUNC_24(
               VAR_16->deco_manager, VAR_16->xdg_toplevel);
      }


      FUNC_14(VAR_16->surface);
      VAR_16->configured = 1;

      while (VAR_16->configured)
         FUNC_10(VAR_16->input.dpy);

      FUNC_11(VAR_16->input.dpy);
      FUNC_22(VAR_16->xdg_shell, &VAR_5, ((void*)0));
   }
   else if (VAR_16->zxdg_shell)
   {
      VAR_16->zxdg_surface = FUNC_26(VAR_16->zxdg_shell, VAR_16->surface);
      FUNC_27(VAR_16->zxdg_surface, &VAR_9, VAR_16);

      VAR_16->zxdg_toplevel = FUNC_28(VAR_16->zxdg_surface);
      FUNC_29(VAR_16->zxdg_toplevel, &VAR_10, VAR_16);

      FUNC_30(VAR_16->zxdg_toplevel, "retroarch");
      FUNC_32(VAR_16->zxdg_toplevel, "RetroArch");

      if (VAR_16->deco_manager)
         VAR_16->deco = FUNC_24(
               VAR_16->deco_manager, VAR_16->xdg_toplevel);


      FUNC_14(VAR_16->surface);
      VAR_16->configured = 1;

      while (VAR_16->configured)
         FUNC_10(VAR_16->input.dpy);

      FUNC_11(VAR_16->input.dpy);
      FUNC_25(VAR_16->zxdg_shell, &VAR_8, ((void*)0));
   }

   switch (VAR_3)
   {
      case 131:
      case 130:
      case 129:
         break;
      case 132:
      default:
         break;
   }

   if (VAR_15)
   {
    if (VAR_16->xdg_toplevel)
     FUNC_20(VAR_16->xdg_toplevel, ((void*)0));
    else if (VAR_16->zxdg_toplevel)
     FUNC_31(VAR_16->zxdg_toplevel, ((void*)0));
 }

   FUNC_5(&VAR_16->input);

   switch (VAR_3)
   {
      case 128:
         FUNC_11(VAR_16->input.dpy);







         break;
      case 132:
      default:
         break;
   }

   if (VAR_15)
   {
      VAR_16->cursor.visible = 0;
      FUNC_7(VAR_16, 0);
   }
   else
      VAR_16->cursor.visible = 1;

   return 1;

error:
   FUNC_6(VAR_11);
   return 0;
}
