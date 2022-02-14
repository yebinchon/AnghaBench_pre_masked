
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct wl_seat {int dummy; } ;
struct TYPE_5__ {int * wl_touch; int * wl_pointer; int * wl_keyboard; } ;
typedef TYPE_1__ gfx_ctx_wayland_data_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (struct wl_seat*) ;
 int * FUNC_5 (struct wl_seat*) ;
 int * FUNC_6 (struct wl_seat*) ;
 int FUNC_7 (int *,int *,TYPE_1__*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(void *VAR_6,
      struct wl_seat *VAR_7, unsigned VAR_8)
{
   gfx_ctx_wayland_data_t *VAR_9 = (gfx_ctx_wayland_data_t*)VAR_6;

   if ((VAR_8 & VAR_0) && !VAR_9->wl_keyboard)
   {
      VAR_9->wl_keyboard = FUNC_4(VAR_7);
      FUNC_0(VAR_9->wl_keyboard, &VAR_3, VAR_9);
   }
   else if (!(VAR_8 & VAR_0) && VAR_9->wl_keyboard)
   {
      FUNC_1(VAR_9->wl_keyboard);
      VAR_9->wl_keyboard = ((void*)0);
   }
   if ((VAR_8 & VAR_1) && !VAR_9->wl_pointer)
   {
      VAR_9->wl_pointer = FUNC_5(VAR_7);
      FUNC_2(VAR_9->wl_pointer, &VAR_4, VAR_9);
   }
   else if (!(VAR_8 & VAR_1) && VAR_9->wl_pointer)
   {
      FUNC_3(VAR_9->wl_pointer);
      VAR_9->wl_pointer = ((void*)0);
   }
   if ((VAR_8 & VAR_2) && !VAR_9->wl_touch)
   {
      VAR_9->wl_touch = FUNC_6(VAR_7);
      FUNC_7(VAR_9->wl_touch, &VAR_5, VAR_9);
   }
   else if (!(VAR_8 & VAR_2) && VAR_9->wl_touch)
   {
      FUNC_8(VAR_9->wl_touch);
      VAR_9->wl_touch = ((void*)0);
   }

}
