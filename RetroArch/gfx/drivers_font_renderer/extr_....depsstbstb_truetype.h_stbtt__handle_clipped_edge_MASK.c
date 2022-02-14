
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float sy; float ey; float direction; } ;
typedef TYPE_1__ stbtt__active_edge ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(float *VAR_0, int VAR_1, stbtt__active_edge *VAR_2,
      float VAR_3, float VAR_4, float VAR_5, float VAR_6)
{
   if (VAR_4 == VAR_6) return;
   FUNC_0(VAR_4 < VAR_6);
   FUNC_0(VAR_2->sy <= VAR_2->ey);
   if (VAR_4 > VAR_2->ey) return;
   if (VAR_6 < VAR_2->sy) return;
   if (VAR_4 < VAR_2->sy) {
      VAR_3 += (VAR_5-VAR_3) * (VAR_2->sy - VAR_4) / (VAR_6-VAR_4);
      VAR_4 = VAR_2->sy;
   }
   if (VAR_6 > VAR_2->ey) {
      VAR_5 += (VAR_5-VAR_3) * (VAR_2->ey - VAR_6) / (VAR_6-VAR_4);
      VAR_6 = VAR_2->ey;
   }
   if (VAR_3 <= VAR_1 && VAR_5 <= VAR_1)
      VAR_0[VAR_1] += VAR_2->direction * (VAR_6-VAR_4);
   else if (VAR_3 >= VAR_1+1 && VAR_5 >= VAR_1+1)
      ;
   else {



      VAR_0[VAR_1] += VAR_2->direction * (VAR_6-VAR_4) * (1-((VAR_3-VAR_1)+(VAR_5-VAR_1))/2);
   }
}
