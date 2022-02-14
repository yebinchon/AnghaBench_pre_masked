
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xmb_handle_t ;
struct TYPE_3__ {float* color; float* vertex; float* tex_coord; float* lut_tex_coord; unsigned int vertices; } ;
typedef TYPE_1__ video_coords_t ;
typedef int video_coord_array_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (float*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,TYPE_1__*,unsigned int) ;
 int FUNC_4 (float*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_5(xmb_handle_t * VAR_3)
{
   video_coords_t VAR_4;
   unsigned VAR_5, VAR_6, VAR_7;
   unsigned VAR_8 = 0;
   video_coord_array_t *VAR_9 = FUNC_2();
   unsigned VAR_10 = VAR_2;
   float *VAR_11 = (float*)FUNC_0(4 * VAR_10, sizeof(float));
   float *VAR_12 = (float*)FUNC_0(2 * VAR_10, sizeof(float));


   for (VAR_5 = 0; VAR_5 < VAR_1 - 1; VAR_5++)
   {
      for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
      {
         VAR_7 = VAR_5 % 2 ? VAR_0 - VAR_6 - 1 : VAR_6;
         FUNC_4(VAR_12, VAR_8, VAR_5, VAR_7);
         FUNC_4(VAR_12, VAR_8 + 2, VAR_5 + 1, VAR_7);
         VAR_8 += 4;
      }
   }

   VAR_4.color = VAR_11;
   VAR_4.vertex = VAR_12;
   VAR_4.tex_coord = VAR_11;
   VAR_4.lut_tex_coord = VAR_11;
   VAR_4.vertices = VAR_10;

   FUNC_3(VAR_9, &VAR_4, VAR_4.vertices);

   FUNC_1(VAR_11);
   FUNC_1(VAR_12);
}
