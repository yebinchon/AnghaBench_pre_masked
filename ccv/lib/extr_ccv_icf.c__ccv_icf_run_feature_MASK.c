
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {float beta; int count; int* channel; float* alpha; TYPE_1__* sat; } ;
typedef TYPE_2__ ccv_icf_feature_t ;
struct TYPE_4__ {int x; int y; } ;



__attribute__((used)) static inline float FUNC_0(ccv_icf_feature_t* VAR_0, float* VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 float VAR_6 = VAR_0->beta;
 int VAR_7;
 for (VAR_7 = 0; VAR_7 < VAR_0->count; VAR_7++)
  VAR_6 += (VAR_1[(VAR_0->sat[VAR_7 * 2 + 1].x + VAR_4 + 1 + (VAR_0->sat[VAR_7 * 2 + 1].y + VAR_5 + 1) * VAR_2) * VAR_3 + VAR_0->channel[VAR_7]] - VAR_1[(VAR_0->sat[VAR_7 * 2].x + VAR_4 + (VAR_0->sat[VAR_7 * 2 + 1].y + VAR_5 + 1) * VAR_2) * VAR_3 + VAR_0->channel[VAR_7]] + VAR_1[(VAR_0->sat[VAR_7 * 2].x + VAR_4 + (VAR_0->sat[VAR_7 * 2].y + VAR_5) * VAR_2) * VAR_3 + VAR_0->channel[VAR_7]] - VAR_1[(VAR_0->sat[VAR_7 * 2 + 1].x + VAR_4 + 1 + (VAR_0->sat[VAR_7 * 2].y + VAR_5) * VAR_2) * VAR_3 + VAR_0->channel[VAR_7]]) * VAR_0->alpha[VAR_7];
 return VAR_6;
}
