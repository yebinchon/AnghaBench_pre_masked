
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct retro_hw_render_context_negotiation_interface_vulkan {scalar_t__ interface_type; scalar_t__ interface_version; TYPE_5__* (* get_application_info ) () ;} ;
struct TYPE_14__ {int * instance; int debug_callback; } ;
struct TYPE_15__ {TYPE_1__ context; } ;
typedef TYPE_2__ gfx_ctx_vulkan_data_t ;
typedef enum vulkan_wsi_type { ____Placeholder_vulkan_wsi_type } vulkan_wsi_type ;
typedef scalar_t__ VkResult ;
struct TYPE_16__ {unsigned int enabledExtensionCount; char const** ppEnabledExtensionNames; char const** ppEnabledLayerNames; TYPE_5__* pApplicationInfo; int enabledLayerCount; int member_0; } ;
typedef TYPE_3__ VkInstanceCreateInfo ;
struct TYPE_17__ {int flags; int pfnCallback; int member_0; } ;
typedef TYPE_4__ VkDebugReportCallbackCreateInfoEXT ;
struct TYPE_18__ {void* apiVersion; scalar_t__ engineVersion; void* pEngineName; scalar_t__ applicationVersion; void* pApplicationName; int member_0; } ;
typedef TYPE_5__ VkApplicationInfo ;
typedef scalar_t__ PFN_vkGetInstanceProcAddr ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_4 (int,int ,unsigned int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (int *,int (*) (int *,TYPE_4__*,int *,int *)) ;
 int * VAR_11 ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (scalar_t__,char*) ;
 void* FUNC_8 (int ) ;
 TYPE_5__* FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int *,TYPE_4__*,int *,int *) ;
 scalar_t__ FUNC_12 (TYPE_3__*,int *,int **) ;
 int FUNC_13 (int *,TYPE_4__*,int *,int *) ;
 int FUNC_14 (int *,TYPE_4__*,int *,int *) ;
 int VAR_12 ;
 int FUNC_15 (char const**,unsigned int) ;
 scalar_t__ VAR_13 ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 () ;

bool FUNC_19(gfx_ctx_vulkan_data_t *VAR_14,
      enum vulkan_wsi_type VAR_15)
{
   unsigned VAR_16;
   VkResult VAR_17;
   PFN_vkGetInstanceProcAddr VAR_18;
   VkInstanceCreateInfo VAR_19 = { VAR_9 };
   VkApplicationInfo VAR_20 = { VAR_7 };

   const char *VAR_21[4];
   unsigned VAR_22 = 0;






   bool VAR_23;
   struct retro_hw_render_context_negotiation_interface_vulkan *VAR_24 =
      (struct retro_hw_render_context_negotiation_interface_vulkan*)FUNC_10();

   if (VAR_24 && VAR_24->interface_type != VAR_1)
   {
      FUNC_3("[Vulkan]: Got HW context negotiation interface, but it's the wrong API.\n");
      VAR_24 = ((void*)0);
   }

   if (VAR_24 && VAR_24->interface_version != VAR_2)
   {
      FUNC_3("[Vulkan]: Got HW context negotiation interface, but it's the wrong interface version.\n");
      VAR_24 = ((void*)0);
   }

   VAR_21[VAR_22++] = "VK_KHR_surface";

   switch (VAR_15)
   {
      case 131:
         VAR_21[VAR_22++] = "VK_KHR_wayland_surface";
         break;
      case 137:
         VAR_21[VAR_22++] = "VK_KHR_android_surface";
         break;
      case 130:
         VAR_21[VAR_22++] = "VK_KHR_win32_surface";
         break;
      case 128:
         VAR_21[VAR_22++] = "VK_KHR_xlib_surface";
         break;
      case 129:
         VAR_21[VAR_22++] = "VK_KHR_xcb_surface";
         break;
      case 135:
         VAR_21[VAR_22++] = "VK_KHR_mir_surface";
         break;
      case 136:
         VAR_21[VAR_22++] = "VK_KHR_display";
         break;
      case 133:
         VAR_21[VAR_22++] = "VK_MVK_macos_surface";
         break;
      case 134:
         VAR_21[VAR_22++] = "VK_MVK_ios_surface";
         break;
      case 132:
      default:
         break;
   }

   if (!VAR_13)
   {





      VAR_13 = FUNC_6("libvulkan.so");
      if (!VAR_13)
      {
         VAR_13 = FUNC_6("libvulkan.so.1");
      }

   }

   if (!VAR_13)
   {
      FUNC_1("[Vulkan]: Failed to open Vulkan loader.\n");
      return 0;
   }

   FUNC_2("Vulkan dynamic library loaded.\n");

   VAR_18 =
      (PFN_vkGetInstanceProcAddr)FUNC_7(VAR_13, "vkGetInstanceProcAddr");

   if (!VAR_18)
   {
      FUNC_1("[Vulkan]: Failed to load vkGetInstanceProcAddr symbol, broken loader?\n");
      return 0;
   }

   FUNC_17(VAR_18);

   if (!FUNC_18())
   {
      FUNC_1("[Vulkan]: Failed to load global Vulkan symbols, broken loader?\n");
      return 0;
   }

   VAR_23 = FUNC_15(VAR_21, VAR_22);

   VAR_20.pApplicationName = FUNC_8(VAR_0);
   VAR_20.applicationVersion = 0;
   VAR_20.pEngineName = FUNC_8(VAR_0);
   VAR_20.engineVersion = 0;
   VAR_20.apiVersion = FUNC_4(1, 0, 18);

   VAR_19.pApplicationInfo = &VAR_20;
   VAR_19.enabledExtensionCount = VAR_23 ? VAR_22 : 0;
   VAR_19.ppEnabledExtensionNames = VAR_23 ? VAR_21 : ((void*)0);





   if (VAR_24 && VAR_24->get_application_info)
   {
      VAR_19.pApplicationInfo = VAR_24->get_application_info();
      if (VAR_19.pApplicationInfo->pApplicationName)
      {
         FUNC_2("[Vulkan]: App: %s (version %u)\n",
               VAR_19.pApplicationInfo->pApplicationName,
               VAR_19.pApplicationInfo->applicationVersion);
      }

      if (VAR_19.pApplicationInfo->pEngineName)
      {
         FUNC_2("[Vulkan]: Engine: %s (version %u)\n",
               VAR_19.pApplicationInfo->pEngineName,
               VAR_19.pApplicationInfo->engineVersion);
      }
   }

   if (VAR_11)
   {
      VAR_14->context.instance = VAR_11;
      VAR_11 = ((void*)0);
      VAR_17 = VAR_10;
   }
   else
      VAR_17 = FUNC_12(&VAR_19, ((void*)0), &VAR_14->context.instance);
   for (VAR_16 = 1; VAR_16 < 4 && VAR_17 == VAR_6; VAR_16++)
   {
      VAR_19.pApplicationInfo = &VAR_20;
      VAR_20.apiVersion = FUNC_4(1, 0, VAR_16);
      VAR_17 = FUNC_12(&VAR_19, ((void*)0), &VAR_14->context.instance);
   }

   if (VAR_17 != VAR_10)
   {
      FUNC_1("Failed to create Vulkan instance (%d).\n", VAR_17);
      return 0;
   }

   if (!FUNC_16(VAR_14))
   {
      FUNC_1("[Vulkan]: Failed to load instance symbols.\n");
      return 0;
   }

   return 1;
}
