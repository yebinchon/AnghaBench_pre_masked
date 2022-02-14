
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct zxdg_shell_v6 {int dummy; } ;
struct zxdg_decoration_manager_v1 {int dummy; } ;
struct zwp_idle_inhibit_manager_v1 {int dummy; } ;
struct xdg_wm_base {int dummy; } ;
struct wl_shm {int dummy; } ;
struct wl_seat {int dummy; } ;
struct wl_registry {int dummy; } ;
struct wl_output {int dummy; } ;
struct wl_compositor {int dummy; } ;
struct TYPE_7__ {int link; struct wl_output* output; int global_id; } ;
typedef TYPE_2__ output_info_t ;
struct TYPE_6__ {int dpy; } ;
struct TYPE_8__ {struct zxdg_decoration_manager_v1* deco_manager; struct zwp_idle_inhibit_manager_v1* idle_inhibit_manager; struct wl_seat* seat; struct wl_shm* shm; struct zxdg_shell_v6* zxdg_shell; struct xdg_wm_base* xdg_shell; TYPE_1__ input; int all_outputs; struct wl_compositor* compositor; } ;
typedef TYPE_3__ gfx_ctx_wayland_data_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct wl_output*,int *,TYPE_2__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (struct wl_registry*,int ,int *,int) ;
 int FUNC_6 (struct wl_seat*,int *,TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_7(void *VAR_10, struct wl_registry *VAR_11,
      uint32_t VAR_12, const char *VAR_13, uint32_t VAR_14)
{
   gfx_ctx_wayland_data_t *VAR_15 = (gfx_ctx_wayland_data_t*)VAR_10;

   (void)VAR_14;

   if (FUNC_1(VAR_13, "wl_compositor"))
      VAR_15->compositor = (struct wl_compositor*)FUNC_5(VAR_11,
            VAR_12, &VAR_2, 3);
   else if (FUNC_1(VAR_13, "wl_output"))
   {
      output_info_t *VAR_16 = (output_info_t*)
         FUNC_0(1, sizeof(output_info_t));

      VAR_16->global_id = VAR_12;
      VAR_16->output = (struct wl_output*)FUNC_5(VAR_11,
            VAR_12, &VAR_3, 2);
      FUNC_4(VAR_16->output, &VAR_0, VAR_16);
      FUNC_3(&VAR_15->all_outputs, &VAR_16->link);
      FUNC_2(VAR_15->input.dpy);
   }
   else if (FUNC_1(VAR_13, "xdg_wm_base"))
      VAR_15->xdg_shell = (struct xdg_wm_base*)
         FUNC_5(VAR_11, VAR_12, &VAR_6, 1);
   else if (FUNC_1(VAR_13, "zxdg_shell_v6"))
      VAR_15->zxdg_shell = (struct zxdg_shell_v6*)
         FUNC_5(VAR_11, VAR_12, &VAR_9, 1);
   else if (FUNC_1(VAR_13, "wl_shm"))
      VAR_15->shm = (struct wl_shm*)FUNC_5(VAR_11, VAR_12, &VAR_5, 1);
   else if (FUNC_1(VAR_13, "wl_seat"))
   {
      VAR_15->seat = (struct wl_seat*)FUNC_5(VAR_11, VAR_12, &VAR_4, 2);
      FUNC_6(VAR_15->seat, &VAR_1, VAR_15);
   }
   else if (FUNC_1(VAR_13, "zwp_idle_inhibit_manager_v1"))
      VAR_15->idle_inhibit_manager = (struct zwp_idle_inhibit_manager_v1*)FUNC_5(
                                  VAR_11, VAR_12, &VAR_7, 1);
   else if (FUNC_1(VAR_13, "zxdg_decoration_manager_v1"))
      VAR_15->deco_manager = (struct zxdg_decoration_manager_v1*)FUNC_5(
                                  VAR_11, VAR_12, &VAR_8, 1);
}
