
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_materials; TYPE_2__* material; } ;
typedef TYPE_1__ WAVEFRONT_MODEL_T ;
struct TYPE_4__ {scalar_t__* vbo; } ;
typedef TYPE_2__ WAVEFRONT_MATERIAL_T ;
typedef scalar_t__ MODEL_T ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (scalar_t__*) ;

void FUNC_1(MODEL_T VAR_3)
{
   WAVEFRONT_MODEL_T *VAR_4 = (WAVEFRONT_MODEL_T *)VAR_3;
   int VAR_5;
   for (VAR_5=0; VAR_5<VAR_4->num_materials; VAR_5++) {
      WAVEFRONT_MATERIAL_T *VAR_6 = VAR_4->material + VAR_5;
      if (VAR_6->vbo[VAR_2])
         FUNC_0(VAR_6->vbo+VAR_2);
      if (VAR_6->vbo[VAR_1])
         FUNC_0(VAR_6->vbo+VAR_1);
      if (VAR_6->vbo[VAR_0])
         FUNC_0(VAR_6->vbo+VAR_0);
   }
}
