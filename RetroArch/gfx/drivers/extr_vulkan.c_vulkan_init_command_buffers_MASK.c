
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {unsigned int num_swapchain_images; TYPE_2__* swapchain; TYPE_1__* context; } ;
typedef TYPE_3__ vk_t ;
struct TYPE_12__ {int flags; int queueFamilyIndex; int member_0; } ;
typedef TYPE_4__ VkCommandPoolCreateInfo ;
struct TYPE_13__ {int commandBufferCount; int level; int commandPool; int member_0; } ;
typedef TYPE_5__ VkCommandBufferAllocateInfo ;
struct TYPE_10__ {int cmd; int cmd_pool; } ;
struct TYPE_9__ {int device; int graphics_queue_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_5__*,int *) ;
 int FUNC_1 (int ,TYPE_4__*,int *,int *) ;

__attribute__((used)) static void FUNC_2(vk_t *VAR_4)
{

   unsigned VAR_5;

   for (VAR_5 = 0; VAR_5 < VAR_4->num_swapchain_images; VAR_5++)
   {
      VkCommandPoolCreateInfo VAR_6 = {
         VAR_3 };
      VkCommandBufferAllocateInfo VAR_7 = {
         VAR_2 };

      VAR_6.queueFamilyIndex = VAR_4->context->graphics_queue_index;
      VAR_6.flags =
         VAR_1;

      FUNC_1(VAR_4->context->device,
            &VAR_6, ((void*)0), &VAR_4->swapchain[VAR_5].cmd_pool);

      VAR_7.commandPool = VAR_4->swapchain[VAR_5].cmd_pool;
      VAR_7.level = VAR_0;
      VAR_7.commandBufferCount = 1;

      FUNC_0(VAR_4->context->device,
            &VAR_7, &VAR_4->swapchain[VAR_5].cmd);
   }
}
