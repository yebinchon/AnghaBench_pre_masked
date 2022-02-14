
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int height; int width; } ;
struct scaler_ctx {int out_stride; int in_stride; } ;
struct TYPE_6__ {int pending; struct scaler_ctx scaler_bgr; struct scaler_ctx scaler_rgb; scalar_t__ streamed; struct vk_texture* staging; } ;
struct TYPE_9__ {TYPE_3__* context; TYPE_2__ vp; TYPE_1__ readback; } ;
typedef TYPE_4__ vk_t ;
typedef int uint8_t ;
struct vk_texture {scalar_t__ memory; int stride; scalar_t__ mapped; int size; int offset; } ;
struct TYPE_8__ {size_t current_swapchain_index; int swapchain_format; int device; int queue_lock; int queue; } ;


 int FUNC_0 (char*) ;



 scalar_t__ VAR_0 ;
 int FUNC_1 (struct scaler_ctx*,int *,int const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,scalar_t__,int ,int ,int ,void**) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,struct vk_texture*) ;
 int FUNC_9 (int ,struct vk_texture*) ;
 int FUNC_10 (TYPE_4__*,struct vk_texture*) ;

__attribute__((used)) static bool FUNC_11(void *VAR_1, uint8_t *VAR_2, bool VAR_3)
{
   struct vk_texture *VAR_4 = ((void*)0);
   vk_t *VAR_5 = (vk_t*)VAR_1;

   if (!VAR_5)
      return 0;

   VAR_4 = &VAR_5->readback.staging[VAR_5->context->current_swapchain_index];

   if (VAR_5->readback.streamed)
   {
      const uint8_t *VAR_6 = ((void*)0);
      struct scaler_ctx *VAR_7 = ((void*)0);

      switch (VAR_5->context->swapchain_format)
      {
         case 128:
         case 130:
            VAR_7 = &VAR_5->readback.scaler_rgb;
            break;

         case 129:
            VAR_7 = &VAR_5->readback.scaler_bgr;
            break;

         default:
            FUNC_0("[Vulkan]: Unexpected swapchain format. Cannot readback.\n");
            break;
      }

      if (VAR_7)
      {
         if (VAR_4->memory == VAR_0)
            return 0;

         VAR_2 += 3 * (VAR_5->vp.height - 1) * VAR_5->vp.width;
         FUNC_5(VAR_5->context->device, VAR_4->memory,
               VAR_4->offset, VAR_4->size, 0, (void**)&VAR_6);

         FUNC_10(VAR_5, VAR_4);

         VAR_7->in_stride = VAR_4->stride;
         VAR_7->out_stride = -(int)VAR_5->vp.width * 3;
         FUNC_1(VAR_7, VAR_2, VAR_6);

         FUNC_7(VAR_5->context->device, VAR_4->memory);
      }
   }
   else
   {





      VAR_5->readback.pending = 1;

      if (!VAR_3)
         FUNC_4();




      FUNC_6(VAR_5->context->queue);




      if (!VAR_4->mapped)
         FUNC_9(
               VAR_5->context->device, VAR_4);

      FUNC_10(VAR_5, VAR_4);

      {
         unsigned VAR_8, VAR_9;
         const uint8_t *VAR_10 = (const uint8_t*)VAR_4->mapped;
         VAR_2 += 3 * (VAR_5->vp.height - 1) * VAR_5->vp.width;

         switch (VAR_5->context->swapchain_format)
         {
            case 129:
               for (VAR_9 = 0; VAR_9 < VAR_5->vp.height; VAR_9++,
                     VAR_10 += VAR_4->stride, VAR_2 -= 3 * VAR_5->vp.width)
               {
                  for (VAR_8 = 0; VAR_8 < VAR_5->vp.width; VAR_8++)
                  {
                     VAR_2[3 * VAR_8 + 0] = VAR_10[4 * VAR_8 + 0];
                     VAR_2[3 * VAR_8 + 1] = VAR_10[4 * VAR_8 + 1];
                     VAR_2[3 * VAR_8 + 2] = VAR_10[4 * VAR_8 + 2];
                  }
               }
               break;

            case 128:
            case 130:
               for (VAR_9 = 0; VAR_9 < VAR_5->vp.height; VAR_9++,
                     VAR_10 += VAR_4->stride, VAR_2 -= 3 * VAR_5->vp.width)
               {
                  for (VAR_8 = 0; VAR_8 < VAR_5->vp.width; VAR_8++)
                  {
                     VAR_2[3 * VAR_8 + 2] = VAR_10[4 * VAR_8 + 0];
                     VAR_2[3 * VAR_8 + 1] = VAR_10[4 * VAR_8 + 1];
                     VAR_2[3 * VAR_8 + 0] = VAR_10[4 * VAR_8 + 2];
                  }
               }
               break;

            default:
               FUNC_0("[Vulkan]: Unexpected swapchain format.\n");
               break;
         }
      }
      FUNC_8(
            VAR_5->context->device, VAR_4);
   }
   return 1;
}
