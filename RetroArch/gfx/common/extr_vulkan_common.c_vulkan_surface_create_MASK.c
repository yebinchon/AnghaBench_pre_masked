
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int * xcb_window_t ;
typedef int surf_info ;
struct wl_surface {int dummy; } ;
struct wl_display {int dummy; } ;
struct vulkan_display_surface_info {int dummy; } ;
struct TYPE_26__ {int instance; } ;
struct TYPE_27__ {scalar_t__ vk_surface; TYPE_1__ context; } ;
typedef TYPE_2__ gfx_ctx_vulkan_data_t ;
typedef enum vulkan_wsi_type { ____Placeholder_vulkan_wsi_type } vulkan_wsi_type ;
typedef int * Window ;
struct TYPE_28__ {void* pView; int flags; int * pNext; int sType; void* mirSurface; void* connection; int * window; int * dpy; int hwnd; int hinstance; struct wl_surface* surface; struct wl_display* display; } ;
typedef TYPE_3__ VkXlibSurfaceCreateInfoKHR ;
typedef TYPE_3__ VkXcbSurfaceCreateInfoKHR ;
typedef TYPE_3__ VkWin32SurfaceCreateInfoKHR ;
typedef TYPE_3__ VkWaylandSurfaceCreateInfoKHR ;
typedef TYPE_3__ VkMirSurfaceCreateInfoKHR ;
typedef TYPE_3__ VkMacOSSurfaceCreateInfoMVK ;
typedef TYPE_3__ VkIOSSurfaceCreateInfoMVK ;
typedef TYPE_3__ VkAndroidSurfaceCreateInfoKHR ;
typedef int (* PFN_vkCreateXlibSurfaceKHR ) (int ,TYPE_3__*,int *,scalar_t__*) ;
typedef int (* PFN_vkCreateXcbSurfaceKHR ) (int ,TYPE_3__*,int *,scalar_t__*) ;
typedef int (* PFN_vkCreateWin32SurfaceKHR ) (int ,TYPE_3__*,int *,scalar_t__*) ;
typedef int (* PFN_vkCreateWaylandSurfaceKHR ) (int ,TYPE_3__*,int *,scalar_t__*) ;
typedef int (* PFN_vkCreateMirSurfaceKHR ) (int ,TYPE_3__*,int *,scalar_t__*) ;
typedef int (* PFN_vkCreateMacOSSurfaceMVK ) (int ,TYPE_3__*,int *,scalar_t__*) ;
typedef int (* PFN_vkCreateIOSSurfaceMVK ) (int ,TYPE_3__*,int *,scalar_t__*) ;
typedef int (* PFN_vkCreateAndroidSurfaceKHR ) (int ,TYPE_3__*,int *,scalar_t__*) ;
typedef int HWND ;
typedef int HINSTANCE ;
typedef int Display ;
typedef int ANativeWindow ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*,int (*) (int ,TYPE_3__*,int *,scalar_t__*)) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,unsigned int*,unsigned int*,struct vulkan_display_surface_info const*) ;
 int FUNC_8 (TYPE_2__*,unsigned int,unsigned int,unsigned int) ;

bool FUNC_9(gfx_ctx_vulkan_data_t *VAR_9,
      enum vulkan_wsi_type VAR_10,
      void *VAR_11, void *VAR_12,
      unsigned VAR_13, unsigned VAR_14,
      unsigned VAR_15)
{
   switch (VAR_10)
   {
      case 131:
         break;
      case 137:
         break;
      case 130:
         break;
      case 128:
         break;
      case 129:
         break;
      case 135:
         break;
      case 136:
         {
            if (!FUNC_7(VAR_9,
                     &VAR_13, &VAR_14,
                     (const struct vulkan_display_surface_info*)VAR_11))
               return 0;
         }
         break;
      case 133:
         break;
      case 134:
         break;
      case 132:
      default:
         return 0;
   }


   if (!FUNC_6(VAR_9))
      return 0;

   if (!FUNC_8(
            VAR_9, VAR_13, VAR_14, VAR_15))
      return 0;

   FUNC_5(VAR_9);
   return 1;
}
