
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* context; } ;
typedef TYPE_2__ vk_t ;
struct vk_texture {int dummy; } ;
struct TYPE_3__ {int device; int queue_lock; int queue; } ;


 int FUNC_0 (struct vk_texture*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct vk_texture*) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, uintptr_t VAR_1)
{
   vk_t *VAR_2 = (vk_t*)VAR_0;
   struct vk_texture *VAR_3 = (struct vk_texture*)VAR_1;
   if (!VAR_3 || !VAR_2)
      return;






   FUNC_3(VAR_2->context->queue);



   FUNC_4(
         VAR_2->context->device, VAR_3);
   FUNC_0(VAR_3);
}
