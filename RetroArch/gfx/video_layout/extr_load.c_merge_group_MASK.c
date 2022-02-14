
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_16__ ;


struct TYPE_21__ {int layers_count; int bounds; TYPE_4__* layers; } ;
typedef TYPE_2__ view_t ;
typedef int video_layout_orientation_t ;
typedef int video_layout_color_t ;
struct TYPE_22__ {scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_3__ video_layout_bounds_t ;
typedef int scope_t ;
struct TYPE_23__ {int elements_count; int * elements; int name; } ;
typedef TYPE_4__ layer_t ;
struct TYPE_19__ {int y; int x; } ;
struct TYPE_24__ {int components_count; TYPE_16__ bounds; TYPE_1__* components; } ;
typedef TYPE_5__ element_t ;
struct TYPE_20__ {int color; } ;


 int FUNC_0 (TYPE_16__*,TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_16__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*,int *) ;
 TYPE_5__* FUNC_6 (TYPE_4__*) ;
 TYPE_4__* FUNC_7 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_8(scope_t *VAR_0, view_t *VAR_1, view_t *VAR_2,
   bool VAR_3, video_layout_bounds_t VAR_4, video_layout_orientation_t VAR_5, video_layout_color_t VAR_6)
{
   int VAR_7, VAR_8, VAR_9;
   bool VAR_10 = FUNC_2(&VAR_4);

   for (VAR_7 = 0; VAR_7 < VAR_2->layers_count; ++VAR_7)
   {
      layer_t *VAR_11;
      layer_t *VAR_12;

      VAR_11 = &VAR_2->layers[VAR_7];
      VAR_12 = FUNC_7(VAR_1, VAR_11->name);

      for (VAR_8 = 0; VAR_8 < VAR_11->elements_count; ++VAR_8)
      {
         element_t *VAR_13;
         VAR_13 = FUNC_6(VAR_12);

         FUNC_5(VAR_13, &VAR_11->elements[VAR_8]);

         for (VAR_9 = 0; VAR_9 < VAR_13->components_count; ++VAR_9)
            FUNC_3(&VAR_13->components->color, &VAR_6);

         if (VAR_5)
            FUNC_4(VAR_13, VAR_5);

         if (VAR_10)
         {
            FUNC_0(&VAR_13->bounds, &VAR_4);
            VAR_13->bounds.x += VAR_4.x;
            VAR_13->bounds.y += VAR_4.y;
         }

         if (!VAR_3)
            VAR_1->bounds = FUNC_1(&VAR_1->bounds, &VAR_13->bounds);
      }
   }
}
