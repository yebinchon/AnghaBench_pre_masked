
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ pipeline; int mvp; void* sampler; void* view; int dirty; } ;
struct TYPE_11__ {int layout; } ;
struct TYPE_14__ {int cmd; TYPE_3__ tracker; TYPE_2__ pipelines; TYPE_9__* context; TYPE_1__* chain; } ;
typedef TYPE_5__ vk_t ;
struct vk_draw_triangles {scalar_t__ pipeline; int vertices; TYPE_4__* vbo; int sampler; int texture; int uniform_size; int uniform; } ;
struct vk_buffer_range {int offset; int buffer; int data; } ;
typedef int VkDescriptorSet ;
struct TYPE_15__ {int device; } ;
struct TYPE_13__ {int offset; int buffer; } ;
struct TYPE_10__ {int descriptor_manager; int ubo; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ,int,int *,int ,int *) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int,int *,int *) ;
 int FUNC_5 (int ,int ,int,int ,int ) ;
 int FUNC_6 (TYPE_9__*,int *,int ,struct vk_buffer_range*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (TYPE_5__*,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ,int ,int ,int ) ;

void FUNC_11(vk_t *VAR_3, const struct vk_draw_triangles *VAR_4)
{
   if (VAR_4->texture)
      FUNC_9(VAR_3, VAR_3->cmd, VAR_4->texture);

   if (VAR_4->pipeline != VAR_3->tracker.pipeline)
   {
      FUNC_3(VAR_3->cmd,
            VAR_1, VAR_4->pipeline);
      VAR_3->tracker.pipeline = VAR_4->pipeline;


      VAR_3->tracker.dirty |= VAR_2;
   }

   FUNC_7(VAR_3);


   {
      VkDescriptorSet VAR_5;


      struct vk_buffer_range VAR_6;
      if (!FUNC_6(VAR_3->context, &VAR_3->chain->ubo,
               VAR_4->uniform_size, &VAR_6))
         return;

      FUNC_0(VAR_6.data, VAR_4->uniform, VAR_4->uniform_size);

      VAR_5 = FUNC_8(
            VAR_3->context->device,
            &VAR_3->chain->descriptor_manager);

      FUNC_10(
            VAR_3->context->device,
            VAR_5,
            VAR_6.buffer,
            VAR_6.offset,
            VAR_4->uniform_size,
            VAR_4->texture,
            VAR_4->sampler);

      FUNC_2(VAR_3->cmd, VAR_1,
            VAR_3->pipelines.layout, 0,
            1, &VAR_5, 0, ((void*)0));

      VAR_3->tracker.view = VAR_0;
      VAR_3->tracker.sampler = VAR_0;
      FUNC_1(&VAR_3->tracker.mvp, 0, sizeof(VAR_3->tracker.mvp));
   }


   FUNC_4(VAR_3->cmd, 0, 1,
         &VAR_4->vbo->buffer, &VAR_4->vbo->offset);


   FUNC_5(VAR_3->cmd, VAR_4->vertices, 1, 0, 0);
}
