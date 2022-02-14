
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_15__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_23__ {float w; float h; float x; float y; } ;
struct TYPE_21__ {int w; int h; } ;
struct TYPE_29__ {int layers_count; TYPE_8__* screens; TYPE_3__ render_bounds; TYPE_11__* layers; TYPE_1__ bounds; } ;
typedef TYPE_9__ view_t ;
struct TYPE_16__ {int w; int h; } ;
typedef TYPE_10__ video_layout_bounds_t ;
struct TYPE_17__ {int elements_count; TYPE_12__* elements; } ;
typedef TYPE_11__ layer_t ;
struct TYPE_25__ {float x; float y; int w; int h; } ;
struct TYPE_22__ {int x; int y; int w; int h; } ;
struct TYPE_18__ {int components_count; TYPE_5__ render_bounds; TYPE_13__* components; TYPE_2__ bounds; } ;
typedef TYPE_12__ element_t ;
struct TYPE_28__ {float x; float y; int w; int h; } ;
struct TYPE_26__ {size_t index; } ;
struct TYPE_27__ {TYPE_6__ screen; } ;
struct TYPE_24__ {int x; int y; int w; int h; } ;
struct TYPE_19__ {scalar_t__ type; TYPE_8__ render_bounds; TYPE_7__ attr; TYPE_4__ bounds; } ;
typedef TYPE_13__ component_t ;
struct TYPE_20__ {TYPE_9__* view; } ;


 float FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 TYPE_15__* VAR_1 ;

void FUNC_1(video_layout_bounds_t VAR_2)
{
   view_t *VAR_3;
   float VAR_4, VAR_5, VAR_6;
   int VAR_7, VAR_8, VAR_9;

   VAR_3 = VAR_1->view;

   VAR_4 = FUNC_0(VAR_2.w / VAR_3->bounds.w, VAR_2.h / VAR_3->bounds.h);

   VAR_5 = VAR_3->bounds.w * VAR_4;
   VAR_6 = VAR_3->bounds.h * VAR_4;

   VAR_3->render_bounds.w = VAR_5;
   VAR_3->render_bounds.h = VAR_6;
   VAR_3->render_bounds.x = (VAR_2.w - VAR_5) / 2.f;
   VAR_3->render_bounds.y = (VAR_2.h - VAR_6) / 2.f;

   for (VAR_7 = 0; VAR_7 < VAR_3->layers_count; ++VAR_7)
   {
      layer_t *VAR_10;
      VAR_10 = &VAR_3->layers[VAR_7];

      for (VAR_8 = 0; VAR_8 < VAR_10->elements_count; ++VAR_8)
      {
         element_t *VAR_11;
         VAR_11 = &VAR_10->elements[VAR_8];

         VAR_11->render_bounds.x = VAR_11->bounds.x * VAR_3->render_bounds.w + VAR_3->render_bounds.x;
         VAR_11->render_bounds.y = VAR_11->bounds.y * VAR_3->render_bounds.h + VAR_3->render_bounds.y;
         VAR_11->render_bounds.w = VAR_11->bounds.w * VAR_3->render_bounds.w;
         VAR_11->render_bounds.h = VAR_11->bounds.h * VAR_3->render_bounds.h;

         for (VAR_9 = 0; VAR_9 < VAR_11->components_count; ++VAR_9)
         {
            component_t *VAR_12;
            VAR_12 = &VAR_11->components[VAR_9];

            VAR_12->render_bounds.x = VAR_12->bounds.x * VAR_11->render_bounds.w + VAR_11->render_bounds.x;
            VAR_12->render_bounds.y = VAR_12->bounds.y * VAR_11->render_bounds.h + VAR_11->render_bounds.y;
            VAR_12->render_bounds.w = VAR_12->bounds.w * VAR_11->render_bounds.w;
            VAR_12->render_bounds.h = VAR_12->bounds.h * VAR_11->render_bounds.h;

            if (VAR_12->type == VAR_0)
               VAR_3->screens[VAR_12->attr.screen.index] = VAR_12->render_bounds;
         }
      }
   }
}
