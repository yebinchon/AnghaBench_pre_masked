
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int needs_update; TYPE_9__* vk; int texture; int texture_optimal; int vertices; int range; } ;
typedef TYPE_4__ vulkan_raster_t ;
struct vk_draw_triangles {int uniform_size; int vertices; int * vbo; int * uniform; int sampler; int * texture; int pipeline; } ;
struct TYPE_18__ {int commandBufferCount; int * pCommandBuffers; int member_0; } ;
typedef TYPE_5__ VkSubmitInfo ;
struct TYPE_19__ {int flags; int member_0; } ;
typedef TYPE_6__ VkCommandBufferBeginInfo ;
struct TYPE_20__ {int commandBufferCount; int level; int commandPool; int member_0; } ;
typedef TYPE_7__ VkCommandBufferAllocateInfo ;
typedef int VkCommandBuffer ;
struct TYPE_15__ {int mipmap_linear; } ;
struct TYPE_14__ {int font; } ;
struct TYPE_21__ {int staging_pool; TYPE_3__* context; int mvp; TYPE_2__ samplers; TYPE_1__ pipelines; } ;
struct TYPE_16__ {int device; int queue_lock; int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_7__*,int *) ;
 int FUNC_3 (int ,TYPE_6__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,int *) ;
 int FUNC_6 (int ,int,TYPE_5__*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_9__*,int ,int *,int *) ;
 int FUNC_9 (TYPE_9__*,struct vk_draw_triangles*) ;

__attribute__((used)) static void FUNC_10(vulkan_raster_t *VAR_6)
{
   struct vk_draw_triangles VAR_7;

   VAR_7.pipeline = VAR_6->vk->pipelines.font;
   VAR_7.texture = &VAR_6->texture_optimal;
   VAR_7.sampler = VAR_6->vk->samplers.mipmap_linear;
   VAR_7.uniform = &VAR_6->vk->mvp;
   VAR_7.uniform_size = sizeof(VAR_6->vk->mvp);
   VAR_7.vbo = &VAR_6->range;
   VAR_7.vertices = VAR_6->vertices;

   if(VAR_6->needs_update)
   {
      VkCommandBuffer VAR_8;
      VkSubmitInfo VAR_9 = { VAR_5 };
      VkCommandBufferAllocateInfo VAR_10 = { VAR_3 };
      VkCommandBufferBeginInfo VAR_11 = { VAR_4 };

      VAR_10.commandPool = VAR_6->vk->staging_pool;
      VAR_10.level = VAR_0;
      VAR_10.commandBufferCount = 1;
      FUNC_2(VAR_6->vk->context->device, &VAR_10, &VAR_8);

      VAR_11.flags = VAR_1;
      FUNC_3(VAR_8, &VAR_11);

      FUNC_8(VAR_6->vk, VAR_8,
            &VAR_6->texture_optimal, &VAR_6->texture);

      FUNC_4(VAR_8);





      VAR_9.commandBufferCount = 1;
      VAR_9.pCommandBuffers = &VAR_8;
      FUNC_6(VAR_6->vk->context->queue,
            1, &VAR_9, VAR_2);

      FUNC_7(VAR_6->vk->context->queue);





      FUNC_5(VAR_6->vk->context->device,
            VAR_6->vk->staging_pool, 1, &VAR_8);

      VAR_6->needs_update = 0;
   }

   FUNC_9(VAR_6->vk, &VAR_7);
}
