
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct revmodel {float wet1; float wet; float width; scalar_t__ mode; float roomsize1; float damp1; float roomsize; float damp; TYPE_1__* combL; int gain; } ;
struct TYPE_2__ {float feedback; float damp1; float damp2; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct revmodel *VAR_4)
{
   int VAR_5;
   VAR_4->wet1 = VAR_4->wet * (VAR_4->width / 2.0f + 0.5f);

   if (VAR_4->mode >= VAR_1)
   {
      VAR_4->roomsize1 = 1.0f;
      VAR_4->damp1 = 0.0f;
      VAR_4->gain = VAR_2;
   }
   else
   {
      VAR_4->roomsize1 = VAR_4->roomsize;
      VAR_4->damp1 = VAR_4->damp;
      VAR_4->gain = VAR_0;
   }

   for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
   {
      VAR_4->combL[VAR_5].feedback = VAR_4->roomsize1;
      VAR_4->combL[VAR_5].damp1 = VAR_4->damp1;
      VAR_4->combL[VAR_5].damp2 = 1.0f - VAR_4->damp1;
   }
}
