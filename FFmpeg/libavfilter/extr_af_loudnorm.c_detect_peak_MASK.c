
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* limiter_buf; double target_tp; int limiter_buf_index; int limiter_buf_size; scalar_t__ frame_type; double* prev_smp; int peak_index; } ;
typedef TYPE_1__ LoudNormContext ;


 scalar_t__ VAR_0 ;
 double FUNC_0 (double) ;

__attribute__((used)) static void FUNC_1(LoudNormContext *VAR_1, int VAR_2, int VAR_3, int VAR_4, int *VAR_5, double *VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10;
    double VAR_11;
    double *VAR_12;

    *VAR_5 = -1;
    VAR_12 = VAR_1->limiter_buf;
    VAR_11 = VAR_1->target_tp;

    VAR_10 = VAR_1->limiter_buf_index + (VAR_2 * VAR_4) + (1920 * VAR_4);
    if (VAR_10 >= VAR_1->limiter_buf_size)
        VAR_10 -= VAR_1->limiter_buf_size;

    if (VAR_1->frame_type == VAR_0) {
        for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
            VAR_1->prev_smp[VAR_8] = FUNC_0(VAR_12[VAR_10 + VAR_8 - VAR_4]);
    }

    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
        for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
            double VAR_13, VAR_14, VAR_15;

            VAR_13 = FUNC_0(VAR_12[(VAR_10 + VAR_8) < VAR_1->limiter_buf_size ? (VAR_10 + VAR_8) : (VAR_10 + VAR_8 - VAR_1->limiter_buf_size)]);
            VAR_14 = FUNC_0(VAR_12[(VAR_10 + VAR_8 + VAR_4) < VAR_1->limiter_buf_size ? (VAR_10 + VAR_8 + VAR_4) : (VAR_10 + VAR_8 + VAR_4 - VAR_1->limiter_buf_size)]);

            if ((VAR_1->prev_smp[VAR_8] <= VAR_13) && (VAR_14 <= VAR_13) && (VAR_13 > VAR_11) && (VAR_7 > 0)) {
                int VAR_16;

                VAR_16 = 1;
                for (VAR_9 = 2; VAR_9 < 12; VAR_9++) {
                    VAR_14 = FUNC_0(VAR_12[(VAR_10 + VAR_8 + (VAR_9 * VAR_4)) < VAR_1->limiter_buf_size ? (VAR_10 + VAR_8 + (VAR_9 * VAR_4)) : (VAR_10 + VAR_8 + (VAR_9 * VAR_4) - VAR_1->limiter_buf_size)]);
                    if (VAR_14 > VAR_13) {
                        VAR_16 = 0;
                        break;
                    }
                }

                if (!VAR_16)
                    continue;

                for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
                    if (VAR_8 == 0 || FUNC_0(VAR_12[VAR_10 + VAR_8]) > VAR_15)
                        VAR_15 = FUNC_0(VAR_12[VAR_10 + VAR_8]);

                    VAR_1->prev_smp[VAR_8] = FUNC_0(VAR_12[(VAR_10 + VAR_8) < VAR_1->limiter_buf_size ? (VAR_10 + VAR_8) : (VAR_10 + VAR_8 - VAR_1->limiter_buf_size)]);
                }

                *VAR_5 = VAR_7;
                VAR_1->peak_index = VAR_10;
                *VAR_6 = VAR_15;
                return;
            }

            VAR_1->prev_smp[VAR_8] = VAR_13;
        }

        VAR_10 += VAR_4;
        if (VAR_10 >= VAR_1->limiter_buf_size)
            VAR_10 -= VAR_1->limiter_buf_size;
    }
}
