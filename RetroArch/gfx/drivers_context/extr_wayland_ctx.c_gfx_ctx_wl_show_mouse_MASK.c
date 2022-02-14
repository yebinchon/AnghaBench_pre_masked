
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wl_cursor_image {int height; int width; int hotspot_y; int hotspot_x; } ;
struct TYPE_5__ {int visible; int serial; int * surface; TYPE_1__* default_cursor; } ;
struct TYPE_6__ {TYPE_2__ cursor; int wl_pointer; } ;
typedef TYPE_3__ gfx_ctx_wayland_data_t ;
struct TYPE_4__ {struct wl_cursor_image** images; } ;


 int FUNC_0 (struct wl_cursor_image*) ;
 int FUNC_1 (int ,int ,int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, bool VAR_1)
{
   gfx_ctx_wayland_data_t *VAR_2 = (gfx_ctx_wayland_data_t*)VAR_0;
   if (!VAR_2->wl_pointer)
      return;

   if (VAR_1)
   {
      struct wl_cursor_image *VAR_3 = VAR_2->cursor.default_cursor->images[0];
      FUNC_1(VAR_2->wl_pointer, VAR_2->cursor.serial, VAR_2->cursor.surface, VAR_3->hotspot_x, VAR_3->hotspot_y);
      FUNC_2(VAR_2->cursor.surface, FUNC_0(VAR_3), 0, 0);
      FUNC_4(VAR_2->cursor.surface, 0, 0, VAR_3->width, VAR_3->height);
      FUNC_3(VAR_2->cursor.surface);
   }
   else
      FUNC_1(VAR_2->wl_pointer, VAR_2->cursor.serial, ((void*)0), 0, 0);

   VAR_2->cursor.visible = VAR_1;
}
