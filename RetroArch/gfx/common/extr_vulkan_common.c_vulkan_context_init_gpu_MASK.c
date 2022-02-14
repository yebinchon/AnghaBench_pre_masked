
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


union string_list_elem_attr {int member_0; } ;
typedef int uint32_t ;
struct TYPE_9__ {int vulkan_gpu_index; } ;
struct TYPE_11__ {TYPE_1__ ints; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_10__ {void* gpu; int instance; } ;
struct TYPE_12__ {TYPE_2__ context; } ;
typedef TYPE_4__ gfx_ctx_vulkan_data_t ;
struct TYPE_13__ {int deviceName; } ;
typedef TYPE_5__ VkPhysicalDeviceProperties ;
typedef void* VkPhysicalDevice ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (char*,size_t) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int,int) ;
 TYPE_3__* FUNC_4 () ;
 int FUNC_5 (void**) ;
 int FUNC_6 (scalar_t__,int ,union string_list_elem_attr) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,int*,void**) ;
 int FUNC_11 (void*,TYPE_5__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_12(gfx_ctx_vulkan_data_t *VAR_3)
{
   unsigned VAR_4;
   uint32_t VAR_5 = 0;
   VkPhysicalDevice *VAR_6 = ((void*)0);
   union string_list_elem_attr VAR_7 = {0};
   settings_t *VAR_8 = FUNC_4();

   if (FUNC_10(VAR_3->context.instance,
            &VAR_5, ((void*)0)) != VAR_1)
   {
      FUNC_0("[Vulkan]: Failed to enumerate physical devices.\n");
      return 0;
   }

   VAR_6 = (VkPhysicalDevice*)FUNC_3(VAR_5, sizeof(*VAR_6));
   if (!VAR_6)
   {
      FUNC_0("[Vulkan]: Failed to enumerate physical devices.\n");
      return 0;
   }

   if (FUNC_10(VAR_3->context.instance,
            &VAR_5, VAR_6) != VAR_1)
   {
      FUNC_0("[Vulkan]: Failed to enumerate physical devices.\n");
      FUNC_5(VAR_6);
      return 0;
   }

   if (VAR_5 < 1)
   {
      FUNC_0("[Vulkan]: Failed to enumerate Vulkan physical device.\n");
      FUNC_5(VAR_6);
      return 0;
   }

   if (VAR_2)
      FUNC_7(VAR_2);

   VAR_2 = FUNC_8();

   for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
   {
      VkPhysicalDeviceProperties VAR_9;

      FUNC_11(VAR_6[VAR_4],
            &VAR_9);

      FUNC_1("[Vulkan]: Found GPU at index %d: %s\n", VAR_4, VAR_9.deviceName);

      FUNC_6(VAR_2, VAR_9.deviceName, VAR_7);
   }

   FUNC_9(VAR_0, VAR_2);

   if (0 <= VAR_8->ints.vulkan_gpu_index && VAR_8->ints.vulkan_gpu_index < (int)VAR_5)
   {
      FUNC_1("[Vulkan]: Using GPU index %d.\n", VAR_8->ints.vulkan_gpu_index);
      VAR_3->context.gpu = VAR_6[VAR_8->ints.vulkan_gpu_index];
   }
   else
   {
      FUNC_2("[Vulkan]: Invalid GPU index %d, using first device found.\n", VAR_8->ints.vulkan_gpu_index);
      VAR_3->context.gpu = VAR_6[0];
   }

   FUNC_5(VAR_6);
   return 1;
}
