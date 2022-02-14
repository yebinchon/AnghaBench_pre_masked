
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_5__ {TYPE_1__* memoryTypes; } ;
typedef TYPE_2__ VkPhysicalDeviceMemoryProperties ;
struct TYPE_4__ {unsigned int propertyFlags; } ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 int FUNC_1 () ;

uint32_t FUNC_2(
      const VkPhysicalDeviceMemoryProperties *VAR_1,
      uint32_t VAR_2, uint32_t VAR_3)
{
   uint32_t VAR_4;
   for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   {
      if ((VAR_2 & (1u << VAR_4)) &&
            (VAR_1->memoryTypes[VAR_4].propertyFlags & VAR_3) == VAR_3)
         return VAR_4;
   }

   FUNC_0("[Vulkan]: Failed to find valid memory type. This should never happen.");
   FUNC_1();
}
