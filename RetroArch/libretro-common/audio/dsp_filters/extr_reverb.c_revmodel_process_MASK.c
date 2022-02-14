
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct revmodel {float gain; float dry; float wet1; int * allpassL; int * combL; } ;


 float FUNC_0 (int *,float) ;
 scalar_t__ FUNC_1 (int *,float) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static float FUNC_2(struct revmodel *VAR_2, float VAR_3)
{
   int VAR_4;
   float VAR_5 = 0.0f;
   float VAR_6 = VAR_3;
   float VAR_7 = VAR_6 * VAR_2->gain;

   for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
      VAR_5 += FUNC_1(&VAR_2->combL[VAR_4], VAR_7);

   for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
      VAR_5 = FUNC_0(&VAR_2->allpassL[VAR_4], VAR_5);

   return VAR_6 * VAR_2->dry + VAR_5 * VAR_2->wet1;
}
