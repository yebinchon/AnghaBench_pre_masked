
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* pitch_gain; double prev_sparse_fixed_gain; int ir_filter_onset; int prev_ir_filter_nr; scalar_t__ cur_frame_mode; } ;
typedef int AMRFixed ;
typedef TYPE_1__ AMRContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (float*,int *,int ) ;
 int * VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static const float *FUNC_1(AMRContext *VAR_5, AMRFixed *VAR_6,
                                    const float *VAR_7,
                                    float VAR_8, float *VAR_9)
{
    int VAR_10;

    if (VAR_5->pitch_gain[4] < 0.6) {
        VAR_10 = 0;
    } else if (VAR_5->pitch_gain[4] < 0.9) {
        VAR_10 = 1;
    } else
        VAR_10 = 2;


    if (VAR_8 > 2.0 * VAR_5->prev_sparse_fixed_gain) {
        VAR_5->ir_filter_onset = 2;
    } else if (VAR_5->ir_filter_onset)
        VAR_5->ir_filter_onset--;

    if (!VAR_5->ir_filter_onset) {
        int VAR_11, VAR_12 = 0;

        for (VAR_11 = 0; VAR_11 < 5; VAR_11++)
            if (VAR_5->pitch_gain[VAR_11] < 0.6)
                VAR_12++;
        if (VAR_12 > 2)
            VAR_10 = 0;

        if (VAR_10 > VAR_5->prev_ir_filter_nr + 1)
            VAR_10--;
    } else if (VAR_10 < 2)
        VAR_10++;




    if (VAR_8 < 5.0)
        VAR_10 = 2;

    if (VAR_5->cur_frame_mode != VAR_1 && VAR_5->cur_frame_mode < VAR_0
         && VAR_10 < 2) {
        FUNC_0(VAR_9, VAR_6,
                        (VAR_5->cur_frame_mode == VAR_2 ?
                             VAR_4 :
                             VAR_3)[VAR_10]);
        VAR_7 = VAR_9;
    }


    VAR_5->prev_ir_filter_nr = VAR_10;
    VAR_5->prev_sparse_fixed_gain = VAR_8;

    return VAR_7;
}
