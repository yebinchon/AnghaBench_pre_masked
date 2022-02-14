
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {float* gain_tab1; int loc_scale; float* gain_tab2; int id2exp_offset; int loc_size; } ;
struct TYPE_6__ {int num_points; size_t* lev_code; int* loc_code; } ;
typedef TYPE_1__ AtracGainInfo ;
typedef TYPE_2__ AtracGCContext ;


 int FUNC_0 (float*,float*,int) ;

void FUNC_1(AtracGCContext *VAR_0, float *VAR_1, float *VAR_2,
                                AtracGainInfo *VAR_3, AtracGainInfo *VAR_4,
                                int VAR_5, float *VAR_6)
{
    float VAR_7, VAR_8, VAR_9;
    int VAR_10, VAR_11, VAR_12;

    VAR_8 = VAR_4->num_points ? VAR_0->gain_tab1[VAR_4->lev_code[0]]
                                   : 1.0f;

    if (!VAR_3->num_points) {
        for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
            VAR_6[VAR_11] = VAR_1[VAR_11] * VAR_8 + VAR_2[VAR_11];
    } else {
        VAR_11 = 0;

        for (VAR_10 = 0; VAR_10 < VAR_3->num_points; VAR_10++) {
            VAR_12 = VAR_3->loc_code[VAR_10] << VAR_0->loc_scale;

            VAR_7 = VAR_0->gain_tab1[VAR_3->lev_code[VAR_10]];
            VAR_9 = VAR_0->gain_tab2[(VAR_10 + 1 < VAR_3->num_points ? VAR_3->lev_code[VAR_10 + 1]
                                                                   : VAR_0->id2exp_offset) -
                                       VAR_3->lev_code[VAR_10] + 15];


            for (; VAR_11 < VAR_12; VAR_11++)
                VAR_6[VAR_11] = (VAR_1[VAR_11] * VAR_8 + VAR_2[VAR_11]) * VAR_7;


            for (; VAR_11 < VAR_12 + VAR_0->loc_size; VAR_11++) {
                VAR_6[VAR_11] = (VAR_1[VAR_11] * VAR_8 + VAR_2[VAR_11]) * VAR_7;
                VAR_7 *= VAR_9;
            }
        }

        for (; VAR_11 < VAR_5; VAR_11++)
            VAR_6[VAR_11] = VAR_1[VAR_11] * VAR_8 + VAR_2[VAR_11];
    }


    FUNC_0(VAR_2, &VAR_1[VAR_5], VAR_5 * sizeof(float));
}
