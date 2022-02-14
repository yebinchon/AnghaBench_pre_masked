
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float const* color; float* vertex; float const* tex_coord; float const* lut_tex_coord; int vertices; } ;
typedef TYPE_1__ video_coords_t ;
typedef int video_coord_array_t ;
struct TYPE_5__ {float* (* get_default_tex_coords ) () ;} ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 float* FUNC_0 () ;
 int FUNC_1 (int *,TYPE_1__*,int) ;

void FUNC_2(
      unsigned VAR_2, unsigned VAR_3,
      const float *VAR_4, int VAR_5, int VAR_6,
      int VAR_7, int VAR_8)
{
   float VAR_9[8];
   video_coords_t VAR_10;
   const float *VAR_11 = ((void*)0);
   video_coord_array_t *VAR_12 = &VAR_1;

   VAR_9[0] = VAR_5 / (float)VAR_2;
   VAR_9[1] = VAR_6 / (float)VAR_3;
   VAR_9[2] = VAR_7 / (float)VAR_2;
   VAR_9[3] = VAR_6 / (float)VAR_3;
   VAR_9[4] = VAR_5 / (float)VAR_2;
   VAR_9[5] = VAR_8 / (float)VAR_3;
   VAR_9[6] = VAR_7 / (float)VAR_2;
   VAR_9[7] = VAR_8 / (float)VAR_3;

   if (VAR_0 && VAR_0->get_default_tex_coords)
      VAR_11 = VAR_0->get_default_tex_coords();

   VAR_10.color = VAR_4;
   VAR_10.vertex = VAR_9;
   VAR_10.tex_coord = VAR_11;
   VAR_10.lut_tex_coord = VAR_11;
   VAR_10.vertices = 3;

   FUNC_1(VAR_12, &VAR_10, 3);

   VAR_10.color += 4;
   VAR_10.vertex += 2;
   VAR_10.tex_coord += 2;
   VAR_10.lut_tex_coord += 2;

   FUNC_1(VAR_12, &VAR_10, 3);
}
