
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float clip_avoidance_factor; int num_windows; int max_sfb; int* swb_sizes; } ;
struct TYPE_5__ {float* coeffs; TYPE_1__ ics; } ;
typedef TYPE_2__ SingleChannelElement ;
typedef int AACEncContext ;



__attribute__((used)) static void FUNC_0(AACEncContext *VAR_0, SingleChannelElement *VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5;

    if (VAR_1->ics.clip_avoidance_factor < 1.0f) {
        for (VAR_5 = 0; VAR_5 < VAR_1->ics.num_windows; VAR_5++) {
            VAR_2 = 0;
            for (VAR_3 = 0; VAR_3 < VAR_1->ics.max_sfb; VAR_3++) {
                float *VAR_6 = &VAR_1->coeffs[VAR_2 + VAR_5*128];
                for (VAR_4 = 0; VAR_4 < VAR_1->ics.swb_sizes[VAR_3]; VAR_4++)
                    VAR_6[VAR_4] *= VAR_1->ics.clip_avoidance_factor;
                VAR_2 += VAR_1->ics.swb_sizes[VAR_3];
            }
        }
    }
}
