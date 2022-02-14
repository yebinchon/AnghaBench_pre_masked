
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int texture_optimal; TYPE_2__* vk; int texture; scalar_t__ font_data; TYPE_3__* font_driver; } ;
typedef TYPE_4__ vulkan_raster_t ;
struct TYPE_8__ {int (* free ) (scalar_t__) ;} ;
struct TYPE_7__ {TYPE_1__* context; } ;
struct TYPE_6__ {int device; int queue; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, bool VAR_1)
{
   vulkan_raster_t *VAR_2 = (vulkan_raster_t*)VAR_0;
   if (!VAR_2)
      return;

   if (VAR_2->font_driver && VAR_2->font_data)
      VAR_2->font_driver->free(VAR_2->font_data);

   FUNC_2(VAR_2->vk->context->queue);
   FUNC_3(
         VAR_2->vk->context->device, &VAR_2->texture);
   FUNC_3(
         VAR_2->vk->context->device, &VAR_2->texture_optimal);

   FUNC_0(VAR_2);
}
