
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vulkan_display_surface_info {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_5__ {unsigned int width; unsigned int height; } ;
struct TYPE_6__ {TYPE_1__ visibleRegion; } ;
struct TYPE_7__ {TYPE_2__ parameters; } ;
typedef TYPE_3__ VkDisplayModePropertiesKHR ;



__attribute__((used)) static bool FUNC_0(
      unsigned *VAR_0,
      unsigned *VAR_1,
      const VkDisplayModePropertiesKHR *VAR_2,
      const struct vulkan_display_surface_info *VAR_3)
{
   unsigned VAR_4 = VAR_2->parameters.visibleRegion.width;
   unsigned VAR_5 = VAR_2->parameters.visibleRegion.height;

   if (!VAR_3->width || !VAR_3->height)
   {

      unsigned VAR_6 = VAR_4 * VAR_5;
      if (VAR_6 > (*VAR_0) * (*VAR_1))
      {
         *VAR_0 = VAR_4;
         *VAR_1 = VAR_5;
         return 1;
      }
      else
         return 0;
   }
   else
   {

      int VAR_7 = (int)VAR_3->width - (int)VAR_4;
      int VAR_8 = (int)VAR_3->height - (int)VAR_5;
      int VAR_9 = (int)VAR_3->width - (int)*VAR_0;
      int VAR_10 = (int)VAR_3->height - (int)*VAR_1;

      int VAR_11 = VAR_7 * VAR_7 + VAR_8 * VAR_8;
      int VAR_12 = VAR_9 * VAR_9 + VAR_10 * VAR_10;
      if (VAR_11 < VAR_12)
      {
         *VAR_0 = VAR_4;
         *VAR_1 = VAR_5;
         return 1;
      }
      else
         return 0;
   }
}
