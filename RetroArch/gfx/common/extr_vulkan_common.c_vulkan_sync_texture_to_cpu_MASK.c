
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* context; } ;
typedef TYPE_2__ vk_t ;
struct vk_texture {scalar_t__ memory; int need_manual_cache_management; } ;
struct TYPE_8__ {scalar_t__ memory; int size; scalar_t__ offset; int member_0; } ;
typedef TYPE_3__ VkMappedMemoryRange ;
struct TYPE_6__ {int device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,TYPE_3__*) ;

void FUNC_1(vk_t *VAR_3, const struct vk_texture *VAR_4)
{
   VkMappedMemoryRange VAR_5 = { VAR_1 };
   if (!VAR_4 || !VAR_4->need_manual_cache_management || VAR_4->memory == VAR_0)
      return;

   VAR_5.memory = VAR_4->memory;
   VAR_5.offset = 0;
   VAR_5.size = VAR_2;
   FUNC_0(VAR_3->context->device, 1, &VAR_5);
}
