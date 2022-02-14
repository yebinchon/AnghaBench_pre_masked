
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int height; int width; } ;
struct TYPE_9__ {int y; int x; } ;
struct TYPE_14__ {TYPE_2__ extent; TYPE_1__ offset; } ;
struct TYPE_12__ {int dirty; TYPE_6__ scissor; scalar_t__ use_scissor; } ;
struct TYPE_11__ {int height; int width; int y; int x; } ;
struct TYPE_13__ {TYPE_4__ tracker; int cmd; int vk_vp; TYPE_3__ vp; } ;
typedef TYPE_5__ vk_t ;
typedef TYPE_6__ VkRect2D ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,TYPE_6__*) ;
 int FUNC_1 (int ,int ,int,int *) ;

__attribute__((used)) static void FUNC_2(
      vk_t *VAR_1)
{

   if (VAR_1->tracker.dirty & VAR_0)
   {
      VkRect2D VAR_2;

      if (VAR_1->tracker.use_scissor)
      {
         VAR_2 = VAR_1->tracker.scissor;
      }
      else
      {

         VAR_2.offset.x = VAR_1->vp.x;
         VAR_2.offset.y = VAR_1->vp.y;
         VAR_2.extent.width = VAR_1->vp.width;
         VAR_2.extent.height = VAR_1->vp.height;
      }

      FUNC_1(VAR_1->cmd, 0, 1, &VAR_1->vk_vp);
      FUNC_0 (VAR_1->cmd, 0, 1, &VAR_2);

      VAR_1->tracker.dirty &= ~VAR_0;
   }
}
