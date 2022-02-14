
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int signal_semaphore; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;
typedef TYPE_2__ vk_t ;
typedef int VkSemaphore ;



__attribute__((used)) static void FUNC_0(void *VAR_0, VkSemaphore VAR_1)
{
   vk_t *VAR_2 = (vk_t*)VAR_0;
   VAR_2->hw.signal_semaphore = VAR_1;
}
