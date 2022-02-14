
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int width; int height; } ;
typedef TYPE_1__ VIDEOMODE_resolution_t ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 unsigned int VAR_2 = ((const VIDEOMODE_resolution_t *)VAR_0)->width - ((const VIDEOMODE_resolution_t *)VAR_1)->width;
 if (VAR_2 != 0)
  return VAR_2;
 return ((const VIDEOMODE_resolution_t *)VAR_0)->height - ((const VIDEOMODE_resolution_t *)VAR_1)->height;
}
