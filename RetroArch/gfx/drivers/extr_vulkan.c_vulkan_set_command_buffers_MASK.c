
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int capacity_cmd; int num_cmd; int * cmd; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;
typedef TYPE_2__ vk_t ;
typedef int uint32_t ;
typedef int VkCommandBuffer ;


 int FUNC_0 (int *,int const*,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, uint32_t VAR_1,
      const VkCommandBuffer *VAR_2)
{
   vk_t *VAR_3 = (vk_t*)VAR_0;
   unsigned VAR_4 = VAR_1 + 1;
   if (VAR_4 > VAR_3->hw.capacity_cmd)
   {
      VkCommandBuffer *VAR_5 = (VkCommandBuffer*)
         FUNC_1(VAR_3->hw.cmd,
            sizeof(VkCommandBuffer) * VAR_4);


      FUNC_2(VAR_5);

      VAR_3->hw.cmd = VAR_5;
      VAR_3->hw.capacity_cmd = VAR_4;
   }

   VAR_3->hw.num_cmd = VAR_1;
   FUNC_0(VAR_3->hw.cmd, VAR_2, sizeof(VkCommandBuffer) * VAR_1);
}
