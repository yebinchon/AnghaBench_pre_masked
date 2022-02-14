
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int blank_texture; } ;
struct TYPE_11__ {int cache; } ;
struct TYPE_14__ {TYPE_3__ display; int staging_pool; TYPE_2__* context; TYPE_1__ pipelines; } ;
typedef TYPE_4__ vk_t ;
typedef unsigned int uint32_t ;
struct TYPE_15__ {int member_0; } ;
typedef TYPE_5__ VkPipelineCacheCreateInfo ;
struct TYPE_16__ {int queueFamilyIndex; int flags; int member_0; } ;
typedef TYPE_6__ VkCommandPoolCreateInfo ;
struct TYPE_12__ {int device; int graphics_queue_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_6__*,int *,int *) ;
 int FUNC_1 (int ,TYPE_5__*,int *,int *) ;
 int FUNC_2 (TYPE_4__*,int *,int,int,int ,unsigned int*,int *,int ) ;

__attribute__((used)) static void FUNC_3(vk_t *VAR_5)
{
   unsigned VAR_6;
   uint32_t VAR_7[4 * 4];
   VkCommandPoolCreateInfo VAR_8 = {
      VAR_2 };


   VkPipelineCacheCreateInfo VAR_9 = {
      VAR_3 };

   VAR_8.flags = VAR_0;

   if (!VAR_5->context)
      return;

   FUNC_1(VAR_5->context->device,
         &VAR_9, ((void*)0), &VAR_5->pipelines.cache);

   VAR_8.queueFamilyIndex = VAR_5->context->graphics_queue_index;

   FUNC_0(VAR_5->context->device,
         &VAR_8, ((void*)0), &VAR_5->staging_pool);

   for (VAR_6 = 0; VAR_6 < 4 * 4; VAR_6++)
      VAR_7[VAR_6] = -1u;

   VAR_5->display.blank_texture = FUNC_2(VAR_5, ((void*)0),
         4, 4, VAR_1,
         VAR_7, ((void*)0), VAR_4);
}
