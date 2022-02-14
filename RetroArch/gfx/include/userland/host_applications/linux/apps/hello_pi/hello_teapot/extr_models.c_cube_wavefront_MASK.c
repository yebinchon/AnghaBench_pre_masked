
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num_materials; TYPE_2__* material; } ;
typedef TYPE_1__ WAVEFRONT_MODEL_T ;
struct TYPE_6__ {int numverts; scalar_t__ vbo; } ;
typedef TYPE_2__ WAVEFRONT_MATERIAL_T ;
typedef int MODEL_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 float* FUNC_0 (int) ;
 int FUNC_1 (unsigned short const*) ;
 int FUNC_2 (int ,scalar_t__,int,float*) ;
 int FUNC_3 (float*,float const*,unsigned short const*,int,int) ;
 int FUNC_4 (float*) ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

MODEL_T FUNC_7(void)
{
   static const float VAR_5[] = {
    -0.5f, -0.5f, 0.5f,
    -0.5f, -0.5f, -0.5f,
     0.5f, -0.5f, -0.5f,
     0.5f, -0.5f, 0.5f,
    -0.5f, 0.5f, 0.5f,
     0.5f, 0.5f, 0.5f,
     0.5f, 0.5f, -0.5f,
    -0.5f, 0.5f, -0.5f,
   };

   static const float VAR_6[] = {
     0.0f, -1.0f, -0.0f,
     0.0f, 1.0f, -0.0f,
     0.0f, 0.0f, 1.0f,
     1.0f, 0.0f, -0.0f,
     0.0f, 0.0f, -1.0f,
    -1.0f, 0.0f, -0.0f,
   };

   static const float VAR_7[] = {
    1.0f, 0.0f,
    1.0f, 1.0f,
    0.0f, 1.0f,
    0.0f, 0.0f,
   };

   static const unsigned short VAR_8[] = {
    1,1,1, 2,2,1, 3,3,1,
    3,3,1, 4,4,1, 1,1,1,
    5,4,2, 6,1,2, 7,2,2,
    7,2,2, 8,3,2, 5,4,2,
    1,4,3, 4,1,3, 6,2,3,
    6,2,3, 5,3,3, 1,4,3,
    4,4,4, 3,1,4, 7,2,4,
    7,2,4, 6,3,4, 4,4,4,
    3,4,5, 2,1,5, 8,2,5,
    8,2,5, 7,3,5, 3,4,5,
    2,4,6, 1,1,6, 5,2,6,
    5,2,6, 8,3,6, 2,4,6,
   };
   WAVEFRONT_MODEL_T *VAR_9 = FUNC_5(sizeof *VAR_9);
   if (VAR_9) {
      WAVEFRONT_MATERIAL_T *VAR_10 = VAR_9->material;
      float *VAR_11;
      const int VAR_12 = 0;
      FUNC_6(VAR_9, 0, sizeof *VAR_9);

      VAR_11 = FUNC_0(3*VAR_1*sizeof *VAR_11);
      VAR_10->numverts = FUNC_1(VAR_8)/3;

      FUNC_3(VAR_11, VAR_5, VAR_8+3*VAR_12+0, 3, VAR_10->numverts);
      FUNC_2(VAR_0, VAR_10->vbo+VAR_4, 3 * VAR_10->numverts * sizeof *VAR_5, VAR_11);

      FUNC_3(VAR_11, VAR_7, VAR_8+3*VAR_12+1, 2, VAR_10->numverts);
      FUNC_2(VAR_0, VAR_10->vbo+VAR_3, 2 * VAR_10->numverts * sizeof *VAR_7, VAR_11);

      FUNC_3(VAR_11, VAR_6, VAR_8+3*VAR_12+2, 3, VAR_10->numverts);
      FUNC_2(VAR_0, VAR_10->vbo+VAR_2, 3 * VAR_10->numverts * sizeof *VAR_6, VAR_11);

      FUNC_4(VAR_11);
      VAR_9->num_materials = 1;
   }
   return (MODEL_T)VAR_9;
}
