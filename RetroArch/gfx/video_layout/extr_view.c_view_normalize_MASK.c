
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int x; int w; int y; int h; } ;
struct TYPE_10__ {int layers_count; TYPE_3__* layers; TYPE_2__ bounds; } ;
typedef TYPE_1__ view_t ;
typedef TYPE_2__ video_layout_bounds_t ;
struct TYPE_12__ {int elements_count; TYPE_4__* elements; } ;
typedef TYPE_3__ layer_t ;
struct TYPE_13__ {TYPE_2__ bounds; } ;
typedef TYPE_4__ element_t ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 TYPE_2__ FUNC_2 () ;

void FUNC_3(view_t *VAR_0)
{
   video_layout_bounds_t VAR_1;
   int VAR_2, VAR_3;

   if (FUNC_1(&VAR_0->bounds))
   {
      VAR_1.x = VAR_0->bounds.x / VAR_0->bounds.w;
      VAR_1.y = VAR_0->bounds.y / VAR_0->bounds.h;
      VAR_1.w = 1.0f / VAR_0->bounds.w;
      VAR_1.h = 1.0f / VAR_0->bounds.h;

      if (VAR_0->bounds.w < VAR_0->bounds.h)
      {
         VAR_0->bounds.w = VAR_0->bounds.w / VAR_0->bounds.h;
         VAR_0->bounds.h = 1.f;
      }
      else
      {
         VAR_0->bounds.h = VAR_0->bounds.h / VAR_0->bounds.w;
         VAR_0->bounds.w = 1.f;
      }

      VAR_0->bounds.x = 0;
      VAR_0->bounds.y = 0;
   }
   else
   {
      VAR_1 = VAR_0->bounds = FUNC_2();
   }

   for (VAR_2 = 0; VAR_2 < VAR_0->layers_count; ++VAR_2)
   {
      layer_t *VAR_4;
      VAR_4 = &VAR_0->layers[VAR_2];

      for (VAR_3 = 0; VAR_3 < VAR_4->elements_count; ++VAR_3)
      {
         element_t *VAR_5;
         VAR_5 = &VAR_4->elements[VAR_3];

         if (FUNC_1(&VAR_5->bounds))
         {
            FUNC_0(&VAR_5->bounds, &VAR_1);
         }
         else
         {
            VAR_5->bounds = VAR_1;
         }

         VAR_5->bounds.x -= VAR_1.x;
         VAR_5->bounds.y -= VAR_1.y;
      }
   }
}
