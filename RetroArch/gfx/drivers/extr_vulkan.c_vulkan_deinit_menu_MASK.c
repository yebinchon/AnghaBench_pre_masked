
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* textures_optimal; TYPE_4__* textures; } ;
struct TYPE_8__ {TYPE_1__ menu; TYPE_2__* context; } ;
typedef TYPE_3__ vk_t ;
struct TYPE_9__ {scalar_t__ memory; } ;
struct TYPE_7__ {int device; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,TYPE_4__*) ;

__attribute__((used)) static void FUNC_1(vk_t *VAR_1)
{
   unsigned VAR_2;
   for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   {
      if (VAR_1->menu.textures[VAR_2].memory)
         FUNC_0(
               VAR_1->context->device, &VAR_1->menu.textures[VAR_2]);
      if (VAR_1->menu.textures_optimal[VAR_2].memory)
         FUNC_0(
               VAR_1->context->device, &VAR_1->menu.textures_optimal[VAR_2]);
   }
}
