
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_3__ {int height; int width; } ;
typedef TYPE_1__* GRAPHICS_RESOURCE_HANDLE ;



int32_t FUNC_0(
   const GRAPHICS_RESOURCE_HANDLE VAR_0,
   uint32_t *VAR_1,
   uint32_t *VAR_2)
{
   if (VAR_1) *VAR_1 = VAR_0->width;
   if (VAR_2) *VAR_2 = VAR_0->height;
   return 0;
}
