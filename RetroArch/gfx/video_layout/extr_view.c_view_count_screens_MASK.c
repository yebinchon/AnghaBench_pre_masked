
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int layers_count; int screens_count; int * screens; TYPE_4__* layers; } ;
typedef TYPE_3__ view_t ;
typedef int video_layout_bounds_t ;
struct TYPE_11__ {int elements_count; TYPE_5__* elements; } ;
typedef TYPE_4__ layer_t ;
struct TYPE_12__ {int components_count; TYPE_6__* components; } ;
typedef TYPE_5__ element_t ;
struct TYPE_8__ {int index; } ;
struct TYPE_9__ {TYPE_1__ screen; } ;
struct TYPE_13__ {scalar_t__ type; TYPE_2__ attr; } ;
typedef TYPE_6__ component_t ;


 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(view_t *VAR_1)
{
   int VAR_2, VAR_3, VAR_4;
   int VAR_5 = -1;

   for (VAR_2 = 0; VAR_2 < VAR_1->layers_count; ++VAR_2)
   {
      layer_t *VAR_6 = &VAR_1->layers[VAR_2];
      for (VAR_3 = 0; VAR_3 < VAR_6->elements_count; ++VAR_3)
      {
         element_t *VAR_7 = &VAR_6->elements[VAR_3];
         for (VAR_4 = 0; VAR_4 < VAR_7->components_count; ++VAR_4)
         {
            component_t *VAR_8 = &VAR_7->components[VAR_4];
            if (VAR_8->type == VAR_0)
               VAR_5 = FUNC_0(VAR_5, VAR_8->attr.screen.index);
         }
      }
   }

   if (VAR_1->screens_count)
   {
      FUNC_2(VAR_1->screens);
      VAR_1->screens_count = 0;
   }

   if ((++VAR_5))
   {
      VAR_1->screens = (video_layout_bounds_t*)FUNC_1(VAR_5, sizeof(video_layout_bounds_t));
      VAR_1->screens_count = VAR_5;
   }
}
