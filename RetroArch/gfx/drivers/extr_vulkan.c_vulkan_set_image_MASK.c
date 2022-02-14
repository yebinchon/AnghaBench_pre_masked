
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_semaphores; int valid_semaphore; scalar_t__ src_queue_family; int * wait_dst_stages; int const* semaphores; struct retro_vulkan_image const* image; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;
typedef TYPE_2__ vk_t ;
typedef scalar_t__ uint32_t ;
struct retro_vulkan_image {int dummy; } ;
typedef int VkSemaphore ;
typedef int VkPipelineStageFlags ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_1,
      const struct retro_vulkan_image *VAR_2,
      uint32_t VAR_3,
      const VkSemaphore *VAR_4,
      uint32_t VAR_5)
{
   unsigned VAR_6;
   vk_t *VAR_7 = (vk_t*)VAR_1;

   VAR_7->hw.image = VAR_2;
   VAR_7->hw.num_semaphores = VAR_3;
   VAR_7->hw.semaphores = VAR_4;

   if (VAR_3 > 0)
   {
      VkPipelineStageFlags *VAR_8 = (VkPipelineStageFlags*)
         FUNC_0(VAR_7->hw.wait_dst_stages,
            sizeof(VkPipelineStageFlags) * VAR_7->hw.num_semaphores);


      FUNC_1(VAR_8);

      VAR_7->hw.wait_dst_stages = VAR_8;

      for (VAR_6 = 0; VAR_6 < VAR_7->hw.num_semaphores; VAR_6++)
         VAR_7->hw.wait_dst_stages[VAR_6] = VAR_0;

      VAR_7->hw.valid_semaphore = 1;
      VAR_7->hw.src_queue_family = VAR_5;
   }
}
