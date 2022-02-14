
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_13__ {scalar_t__ pipeline; scalar_t__ view; scalar_t__ sampler; int mvp; int dirty; } ;
struct TYPE_12__ {int layout; } ;
struct TYPE_15__ {int cmd; TYPE_3__* chain; TYPE_10__* context; TYPE_2__ tracker; TYPE_1__ pipelines; } ;
typedef TYPE_4__ vk_t ;
struct vk_vertex {int dummy; } ;
struct vk_draw_quad {scalar_t__ pipeline; scalar_t__ sampler; int color; int * mvp; TYPE_5__* texture; } ;
struct vk_buffer_range {int offset; int buffer; scalar_t__ data; } ;
typedef int VkDescriptorSet ;
struct TYPE_16__ {scalar_t__ view; } ;
struct TYPE_14__ {int vbo; int descriptor_manager; int ubo; } ;
struct TYPE_11__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,int ,int ,int ,int,int *,int ,int *) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int,int *,int *) ;
 int FUNC_5 (int ,int,int,int ,int ) ;
 int FUNC_6 (TYPE_10__*,int *,int,struct vk_buffer_range*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (TYPE_4__*,int ,TYPE_5__*) ;
 int FUNC_10 (int ,int ,int ,int ,int,TYPE_5__*,scalar_t__) ;
 int FUNC_11 (struct vk_vertex*,float,float,float,float,float,float,float,float,int *) ;

void FUNC_12(vk_t *VAR_2, const struct vk_draw_quad *VAR_3)
{
   FUNC_9(VAR_2, VAR_2->cmd, VAR_3->texture);

   if (VAR_3->pipeline != VAR_2->tracker.pipeline)
   {
      FUNC_3(VAR_2->cmd,
            VAR_0, VAR_3->pipeline);

      VAR_2->tracker.pipeline = VAR_3->pipeline;

      VAR_2->tracker.dirty |= VAR_1;
   }

   FUNC_7(VAR_2);


   {
      VkDescriptorSet VAR_4;
      struct vk_buffer_range VAR_5;

      if (!FUNC_6(VAR_2->context, &VAR_2->chain->ubo,
               sizeof(*VAR_3->mvp), &VAR_5))
         return;

      if (
               FUNC_1(VAR_3->mvp,
                  &VAR_2->tracker.mvp, sizeof(*VAR_3->mvp))
            || VAR_3->texture->view != VAR_2->tracker.view
            || VAR_3->sampler != VAR_2->tracker.sampler)
      {

         struct vk_buffer_range VAR_6;

         if (!FUNC_6(VAR_2->context, &VAR_2->chain->ubo,
                  sizeof(*VAR_3->mvp), &VAR_6))
            return;

         FUNC_0(VAR_6.data, VAR_3->mvp, sizeof(*VAR_3->mvp));

         VAR_4 = FUNC_8(
               VAR_2->context->device,
               &VAR_2->chain->descriptor_manager);

         FUNC_10(
               VAR_2->context->device,
               VAR_4,
               VAR_6.buffer,
               VAR_6.offset,
               sizeof(*VAR_3->mvp),
               VAR_3->texture,
               VAR_3->sampler);

         FUNC_2(VAR_2->cmd, VAR_0,
               VAR_2->pipelines.layout, 0,
               1, &VAR_4, 0, ((void*)0));

         VAR_2->tracker.view = VAR_3->texture->view;
         VAR_2->tracker.sampler = VAR_3->sampler;
         VAR_2->tracker.mvp = *VAR_3->mvp;
      }
   }


   {
      struct vk_buffer_range VAR_7;
      if (!FUNC_6(VAR_2->context, &VAR_2->chain->vbo,
               6 * sizeof(struct vk_vertex), &VAR_7))
         return;

      FUNC_11((struct vk_vertex*)VAR_7.data,
            0.0f, 0.0f, 1.0f, 1.0f,
            0.0f, 0.0f, 1.0f, 1.0f,
            &VAR_3->color);

      FUNC_4(VAR_2->cmd, 0, 1,
            &VAR_7.buffer, &VAR_7.offset);
   }


   FUNC_5(VAR_2->cmd, 6, 1, 0, 0);
}
