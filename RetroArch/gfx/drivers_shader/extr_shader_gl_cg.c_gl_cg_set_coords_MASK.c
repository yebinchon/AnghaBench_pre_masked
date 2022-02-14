
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct video_coords {int color; int lut_tex_coord; int tex_coord; int vertex; } ;
struct TYPE_5__ {size_t active_idx; TYPE_1__* prg; } ;
typedef TYPE_2__ cg_shader_data_t ;
struct TYPE_4__ {scalar_t__ color; scalar_t__ lut_tex; scalar_t__ tex; scalar_t__ vertex; } ;


 int FUNC_0 (scalar_t__,TYPE_2__*,int ,int) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0,
      const struct video_coords *VAR_1)
{
   cg_shader_data_t *VAR_2 = (cg_shader_data_t*)VAR_0;

   if (!VAR_2 || !VAR_1)
   {
      if (VAR_1)
         return 0;
      return 1;
   }

   if (VAR_2->prg[VAR_2->active_idx].vertex)
      FUNC_0(VAR_2->prg[VAR_2->active_idx].vertex, VAR_2, VAR_1->vertex, 2);

   if (VAR_2->prg[VAR_2->active_idx].tex)
      FUNC_0(VAR_2->prg[VAR_2->active_idx].tex, VAR_2, VAR_1->tex_coord, 2);

   if (VAR_2->prg[VAR_2->active_idx].lut_tex)
      FUNC_0(VAR_2->prg[VAR_2->active_idx].lut_tex, VAR_2, VAR_1->lut_tex_coord, 2);

   if (VAR_2->prg[VAR_2->active_idx].color)
      FUNC_0(VAR_2->prg[VAR_2->active_idx].color, VAR_2, VAR_1->color, 4);

   return 1;
}
