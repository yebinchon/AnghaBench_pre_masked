
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * dpy; int fd; } ;
struct TYPE_5__ {int * surface; scalar_t__ theme; } ;
struct TYPE_7__ {scalar_t__ height; scalar_t__ width; int * zxdg_toplevel; int * xdg_toplevel; int * surface; int * xdg_surface; TYPE_2__ input; int * registry; int * compositor; int * zxdg_shell; int * xdg_shell; int * win; scalar_t__ idle_inhibitor; scalar_t__ deco_manager; scalar_t__ deco; scalar_t__ idle_inhibit_manager; scalar_t__ zxdg_surface; scalar_t__ seat; TYPE_1__ cursor; scalar_t__ wl_touch; scalar_t__ wl_pointer; scalar_t__ wl_keyboard; int vk; int egl; } ;
typedef TYPE_3__ gfx_ctx_wayland_data_t ;







 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (scalar_t__) ;
 int FUNC_23 (scalar_t__) ;
 int FUNC_24 (int *) ;

__attribute__((used)) static void FUNC_25(gfx_ctx_wayland_data_t *VAR_1)
{
   if (!VAR_1)
      return;

   switch (VAR_0)
   {
      case 131:
      case 130:
      case 129:






         break;
      case 128:






         break;
      case 132:
      default:
         break;
   }





   if (VAR_1->wl_keyboard)
      FUNC_9(VAR_1->wl_keyboard);
   if (VAR_1->wl_pointer)
      FUNC_10(VAR_1->wl_pointer);
   if (VAR_1->wl_touch)
      FUNC_14(VAR_1->wl_touch);

   if (VAR_1->cursor.theme)
      FUNC_5(VAR_1->cursor.theme);
   if (VAR_1->cursor.surface)
      FUNC_13(VAR_1->cursor.surface);

   if (VAR_1->seat)
      FUNC_12(VAR_1->seat);
   if (VAR_1->xdg_shell)
      FUNC_17(VAR_1->xdg_shell);
   if (VAR_1->zxdg_shell)
      FUNC_21(VAR_1->zxdg_shell);
   if (VAR_1->compositor)
      FUNC_4(VAR_1->compositor);
   if (VAR_1->registry)
      FUNC_11(VAR_1->registry);
   if (VAR_1->xdg_surface)
      FUNC_15(VAR_1->xdg_surface);
   if (VAR_1->zxdg_surface)
      FUNC_22(VAR_1->zxdg_surface);
   if (VAR_1->surface)
      FUNC_13(VAR_1->surface);
   if (VAR_1->xdg_toplevel)
      FUNC_16(VAR_1->xdg_toplevel);
   if (VAR_1->zxdg_toplevel)
      FUNC_24(VAR_1->zxdg_toplevel);
   if (VAR_1->idle_inhibit_manager)
      FUNC_18(VAR_1->idle_inhibit_manager);
   if (VAR_1->deco)
      FUNC_23(VAR_1->deco);
   if (VAR_1->deco_manager)
      FUNC_20(VAR_1->deco_manager);
   if (VAR_1->idle_inhibitor)
      FUNC_19(VAR_1->idle_inhibitor);

   if (VAR_1->input.dpy)
   {
      FUNC_7(VAR_1->input.dpy);
      FUNC_6(VAR_1->input.dpy);
   }




   VAR_1->xdg_shell = ((void*)0);
   VAR_1->zxdg_shell = ((void*)0);
   VAR_1->compositor = ((void*)0);
   VAR_1->registry = ((void*)0);
   VAR_1->input.dpy = ((void*)0);
   VAR_1->xdg_surface = ((void*)0);
   VAR_1->surface = ((void*)0);
   VAR_1->xdg_toplevel = ((void*)0);
   VAR_1->zxdg_toplevel = ((void*)0);

   VAR_1->width = 0;
   VAR_1->height = 0;

}
