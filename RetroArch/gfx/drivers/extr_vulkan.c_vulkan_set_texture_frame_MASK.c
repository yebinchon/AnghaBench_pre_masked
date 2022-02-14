
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {float alpha; unsigned int last_index; int* dirty; struct vk_texture* textures_optimal; struct vk_texture* textures; } ;
struct TYPE_10__ {TYPE_2__ menu; TYPE_1__* context; } ;
typedef TYPE_3__ vk_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct vk_texture {scalar_t__ type; scalar_t__ memory; int stride; int size; int offset; } ;
struct TYPE_11__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_4__ VkComponentMapping ;
struct TYPE_8__ {unsigned int current_swapchain_index; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *,int const*,unsigned int) ;
 int FUNC_1 (int ,scalar_t__,int ,int ,int ,void**) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct vk_texture FUNC_3 (TYPE_3__*,struct vk_texture*,unsigned int,unsigned int,int ,int *,TYPE_4__ const*,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,struct vk_texture*) ;

__attribute__((used)) static void FUNC_5(void *VAR_9,
      const void *VAR_10, bool VAR_11, unsigned VAR_12, unsigned VAR_13,
      float VAR_14)
{
   unsigned VAR_15, VAR_16;
   uint8_t *VAR_17 = ((void*)0);
   uint8_t *VAR_18 = ((void*)0);
   const uint8_t *VAR_19 = ((void*)0);
   vk_t *VAR_20 = (vk_t*)VAR_9;
   unsigned VAR_21 = 0;
   struct vk_texture *VAR_22 = ((void*)0);
   struct vk_texture *VAR_23 = ((void*)0);
   const VkComponentMapping VAR_24 = {
      VAR_1,
      VAR_2,
      VAR_3,
      VAR_0,
   };

   if (!VAR_20)
      return;

   VAR_21 = VAR_20->context->current_swapchain_index;
   VAR_22 = &VAR_20->menu.textures[VAR_21];
   VAR_23 = &VAR_20->menu.textures_optimal[VAR_21];



   *VAR_22 = FUNC_3(VAR_20,
         VAR_22->memory ? VAR_22 : ((void*)0),
         VAR_12, VAR_13,
         VAR_11 ? VAR_5 : VAR_4,
         ((void*)0), VAR_11 ? ((void*)0) : &VAR_24,
         VAR_23->memory ? VAR_7 : VAR_8);

   FUNC_1(VAR_20->context->device, VAR_22->memory,
         VAR_22->offset, VAR_22->size, 0, (void**)&VAR_17);

   VAR_18 = VAR_17;
   VAR_19 = (const uint8_t*)VAR_10;
   VAR_16 = (VAR_11 ? sizeof(uint32_t) : sizeof(uint16_t)) * VAR_12;

   for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++, VAR_18 += VAR_22->stride, VAR_19 += VAR_16)
      FUNC_0(VAR_18, VAR_19, VAR_16);

   VAR_20->menu.alpha = VAR_14;
   VAR_20->menu.last_index = VAR_21;

   if (VAR_22->type == VAR_7)
   {
      *VAR_23 = FUNC_3(VAR_20,
            VAR_23->memory ? VAR_23 : ((void*)0),
            VAR_12, VAR_13,
            VAR_11 ? VAR_5 : VAR_4,
            ((void*)0), VAR_11 ? ((void*)0) : &VAR_24,
            VAR_6);
   }
   else
       FUNC_4(VAR_20, VAR_22);

   FUNC_2(VAR_20->context->device, VAR_22->memory);
   VAR_20->menu.dirty[VAR_21] = 1;
}
