
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_materials; TYPE_2__* material; } ;
typedef TYPE_1__ WAVEFRONT_MODEL_T ;
struct TYPE_4__ {int texture; int numverts; scalar_t__* vbo; } ;
typedef TYPE_2__ WAVEFRONT_MATERIAL_T ;
typedef scalar_t__ MODEL_T ;
typedef int GLuint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int,int ,int ,int *) ;
 int FUNC_7 (int,int ,int ,int *) ;

int FUNC_8(MODEL_T VAR_10, GLuint VAR_11)
{
   int VAR_12;
   WAVEFRONT_MODEL_T *VAR_13 = (WAVEFRONT_MODEL_T *)VAR_10;

   for (VAR_12=0; VAR_12<VAR_13->num_materials; VAR_12++) {
      WAVEFRONT_MATERIAL_T *VAR_14 = VAR_13->material + VAR_12;
      if (VAR_14->texture == -1) continue;

      if (VAR_14->texture)
         FUNC_1(VAR_3, VAR_14->texture);
      else
         FUNC_1(VAR_5, VAR_11);

      if (VAR_14->vbo[VAR_9]) {
         FUNC_0(VAR_0, VAR_14->vbo[VAR_9]);
         FUNC_7(3, VAR_1, 0, ((void*)0));
      }
      if (VAR_14->vbo[VAR_7]) {
         FUNC_4(VAR_2);
         FUNC_0(VAR_0, VAR_14->vbo[VAR_7]);
         FUNC_5(VAR_1, 0, ((void*)0));
      } else {
         FUNC_2(VAR_2);
      }
      if (VAR_14->vbo[VAR_8]) {
         FUNC_4(VAR_4);
         FUNC_0(VAR_0, VAR_14->vbo[VAR_8]);
         FUNC_6(2, VAR_1, 0, ((void*)0));
      } else {
         FUNC_2(VAR_4);
      }
      FUNC_3(VAR_6, 0, VAR_14->numverts);
   }
   FUNC_0(VAR_0, 0);
   return 0;
}
