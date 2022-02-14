
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vertices; int * lut_tex_coord; int * tex_coord; int * color; int * vertex; } ;
struct TYPE_5__ {scalar_t__ allocated; TYPE_1__ coords; } ;
typedef TYPE_2__ video_coord_array_t ;


 int FUNC_0 (int *) ;

void FUNC_1(video_coord_array_t *VAR_0)
{
   if (!VAR_0->allocated)
      return;

   if (VAR_0->coords.vertex)
      FUNC_0(VAR_0->coords.vertex);
   VAR_0->coords.vertex = ((void*)0);

   if (VAR_0->coords.color)
      FUNC_0(VAR_0->coords.color);
   VAR_0->coords.color = ((void*)0);

   if (VAR_0->coords.tex_coord)
      FUNC_0(VAR_0->coords.tex_coord);
   VAR_0->coords.tex_coord = ((void*)0);

   if (VAR_0->coords.lut_tex_coord)
      FUNC_0(VAR_0->coords.lut_tex_coord);
   VAR_0->coords.lut_tex_coord = ((void*)0);

   VAR_0->coords.vertices = 0;
   VAR_0->allocated = 0;
}
