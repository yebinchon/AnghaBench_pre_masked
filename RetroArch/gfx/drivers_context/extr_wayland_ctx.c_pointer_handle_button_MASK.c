
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct wl_pointer {int dummy; } ;
struct TYPE_4__ {int left; int right; int middle; } ;
struct TYPE_5__ {TYPE_1__ mouse; int key_state; } ;
struct TYPE_6__ {TYPE_2__ input; int seat; scalar_t__ zxdg_toplevel; scalar_t__ xdg_toplevel; } ;
typedef TYPE_3__ gfx_ctx_wayland_data_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(void *VAR_5,
      struct wl_pointer *VAR_6,
      uint32_t VAR_7,
      uint32_t VAR_8,
      uint32_t VAR_9,
      uint32_t VAR_10)
{
   gfx_ctx_wayland_data_t *VAR_11 = (gfx_ctx_wayland_data_t*)VAR_5;

   if (VAR_10 == VAR_4)
   {
      if (VAR_9 == VAR_0)
      {
         VAR_11->input.mouse.left = 1;

         if (FUNC_0(VAR_11->input.key_state, VAR_3))
         {
    if (VAR_11->xdg_toplevel)
      FUNC_1(VAR_11->xdg_toplevel, VAR_11->seat, VAR_7);
    else if (VAR_11->zxdg_toplevel)
      FUNC_2(VAR_11->zxdg_toplevel, VAR_11->seat, VAR_7);
         }
      }
      else if (VAR_9 == VAR_2)
         VAR_11->input.mouse.right = 1;
      else if (VAR_9 == VAR_1)
         VAR_11->input.mouse.middle = 1;
   }
   else
   {
      if (VAR_9 == VAR_0)
         VAR_11->input.mouse.left = 0;
      else if (VAR_9 == VAR_2)
         VAR_11->input.mouse.right = 0;
      else if (VAR_9 == VAR_1)
         VAR_11->input.mouse.middle = 0;
   }
}
