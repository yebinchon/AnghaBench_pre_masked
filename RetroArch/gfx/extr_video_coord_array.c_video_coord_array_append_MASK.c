
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int lut_tex_coord; int tex_coord; int color; int vertex; int vertices; } ;
typedef TYPE_2__ video_coords_t ;
struct TYPE_7__ {unsigned int vertices; scalar_t__ lut_tex_coord; scalar_t__ tex_coord; scalar_t__ color; scalar_t__ vertex; } ;
struct TYPE_9__ {unsigned int allocated; TYPE_1__ coords; } ;
typedef TYPE_3__ video_coord_array_t ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (scalar_t__,int ,size_t) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (TYPE_3__*,unsigned int) ;

bool FUNC_4(video_coord_array_t *VAR_0,
      const video_coords_t *VAR_1, unsigned VAR_2)
{
   size_t VAR_3, VAR_4;
   VAR_2 = FUNC_0(VAR_2, VAR_1->vertices);

   if (VAR_0->coords.vertices + VAR_2 >= VAR_0->allocated)
   {
      unsigned VAR_5 = FUNC_2(VAR_0->coords.vertices + VAR_2);
      if (!FUNC_3(VAR_0, VAR_5))
         return 0;
   }

   VAR_3 = VAR_2 * sizeof(float);
   VAR_4 = VAR_0->coords.vertices;



   FUNC_1(VAR_0->coords.vertex + VAR_4 * 2,
         VAR_1->vertex, VAR_3 * 2);

   FUNC_1(VAR_0->coords.color + VAR_4 * 4,
         VAR_1->color, VAR_3 * 4);

   FUNC_1(VAR_0->coords.tex_coord + VAR_4 * 2,
         VAR_1->tex_coord, VAR_3 * 2);

   FUNC_1(VAR_0->coords.lut_tex_coord + VAR_4 * 2,
         VAR_1->lut_tex_coord, VAR_3 * 2);

   VAR_0->coords.vertices += VAR_2;

   return 1;
}
