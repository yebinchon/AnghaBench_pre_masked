
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fr_cur_mode; double* pitch_gain; double* fixed_gain; int prev_ir_filter_nr; } ;
typedef TYPE_1__ AMRWBContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (float*,float*,float const*,int,float,int) ;
 float** VAR_2 ;
 int FUNC_1 (float*,int ,int) ;

__attribute__((used)) static float *FUNC_2(AMRWBContext *VAR_3,
                              float *VAR_4, float *VAR_5)
{
    int VAR_6;

    if (VAR_3->fr_cur_mode > VAR_1)
        return VAR_4;

    if (VAR_3->pitch_gain[0] < 0.6) {
        VAR_6 = 0;
    } else if (VAR_3->pitch_gain[0] < 0.9) {
        VAR_6 = 1;
    } else
        VAR_6 = 2;


    if (VAR_3->fixed_gain[0] > 3.0 * VAR_3->fixed_gain[1]) {
        if (VAR_6 < 2)
            VAR_6++;
    } else {
        int VAR_7, VAR_8 = 0;

        for (VAR_7 = 0; VAR_7 < 6; VAR_7++)
            if (VAR_3->pitch_gain[VAR_7] < 0.6)
                VAR_8++;

        if (VAR_8 > 2)
            VAR_6 = 0;

        if (VAR_6 > VAR_3->prev_ir_filter_nr + 1)
            VAR_6--;
    }


    VAR_3->prev_ir_filter_nr = VAR_6;

    VAR_6 += (VAR_3->fr_cur_mode == VAR_1);

    if (VAR_6 < 2) {
        int VAR_9;
        const float *VAR_10 = VAR_2[VAR_6];
        FUNC_1(VAR_5, 0, sizeof(float) * VAR_0);
        for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
            if (VAR_4[VAR_9])
                FUNC_0(VAR_5, VAR_5, VAR_10, VAR_9, VAR_4[VAR_9],
                                  VAR_0);
        VAR_4 = VAR_5;
    }

    return VAR_4;
}
