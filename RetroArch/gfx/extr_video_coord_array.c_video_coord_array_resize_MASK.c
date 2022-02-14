
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lut_tex_coord; int tex_coord; int color; int vertex; } ;
struct TYPE_5__ {unsigned int allocated; TYPE_1__ coords; } ;
typedef TYPE_2__ video_coord_array_t ;


 int FUNC_0 (void**,int) ;

__attribute__((used)) static bool FUNC_1(video_coord_array_t *VAR_0,
   unsigned VAR_1)
{
   size_t VAR_2 = sizeof(float) * VAR_1;

   if (!FUNC_0((void**)&VAR_0->coords.vertex,
            2 * VAR_2))
      return 0;
   if (!FUNC_0((void**)&VAR_0->coords.color,
            4 * VAR_2))
      return 0;
   if (!FUNC_0((void**)&VAR_0->coords.tex_coord,
            2 * VAR_2))
      return 0;
   if (!FUNC_0((void**)&VAR_0->coords.lut_tex_coord,
            2 * VAR_2))
      return 0;

   VAR_0->allocated = VAR_1;

   return 1;
}
