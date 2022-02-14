
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int video_layout_orientation_t ;
struct TYPE_5__ {float x; float y; float w; float h; } ;
typedef TYPE_1__ video_layout_bounds_t ;
struct TYPE_6__ {unsigned int components_count; TYPE_3__* components; } ;
typedef TYPE_2__ element_t ;
struct TYPE_7__ {int orientation; TYPE_1__ bounds; } ;
typedef TYPE_3__ component_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(element_t *VAR_3, video_layout_orientation_t VAR_4)
{
   unsigned VAR_5;

   for (VAR_5 = 0; VAR_5 < VAR_3->components_count; ++VAR_5)
   {
      component_t *VAR_6 = &VAR_3->components[VAR_5];
      VAR_6->orientation ^= VAR_4;

      if (VAR_4 & VAR_2)
      {
         video_layout_bounds_t VAR_7;
         VAR_7 = VAR_6->bounds;

         VAR_6->bounds.x = VAR_7.y;
         VAR_6->bounds.y = VAR_7.x;
         VAR_6->bounds.w = VAR_7.h;
         VAR_6->bounds.h = VAR_7.w;
      }

      if (VAR_4 & VAR_0)
         VAR_6->bounds.x = 1.0f - VAR_6->bounds.x - VAR_6->bounds.w;

      if (VAR_4 & VAR_1)
         VAR_6->bounds.y = 1.0f - VAR_6->bounds.y - VAR_6->bounds.h;
   }
}
