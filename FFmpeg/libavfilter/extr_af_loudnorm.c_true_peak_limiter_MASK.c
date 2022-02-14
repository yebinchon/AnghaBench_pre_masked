
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double* limiter_buf; double target_tp; int limiter_buf_index; scalar_t__ frame_type; double* gain_reduction; int limiter_state; int env_cnt; int attack_length; int env_index; int limiter_buf_size; int release_length; int peak_index; } ;
typedef TYPE_1__ LoudNormContext ;



 scalar_t__ VAR_0 ;



 int FUNC_0 (TYPE_1__*,int,int,int,int*,double*) ;
 double FUNC_1 (double) ;

__attribute__((used)) static void FUNC_2(LoudNormContext *VAR_1, double *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    double VAR_10, VAR_11;
    double *VAR_12;

    VAR_12 = VAR_1->limiter_buf;
    VAR_10 = VAR_1->target_tp;
    VAR_7 = VAR_1->limiter_buf_index;
    VAR_9 = 0;

    if (VAR_1->frame_type == VAR_0) {
        double VAR_13;

        VAR_13 = 0.;
        for (VAR_5 = 0; VAR_5 < 1920; VAR_5++) {
            for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
              VAR_13 = FUNC_1(VAR_12[VAR_6]) > VAR_13 ? FUNC_1(VAR_12[VAR_6]) : VAR_13;
            }
            VAR_12 += VAR_4;
        }

        if (VAR_13 > VAR_10) {
            VAR_1->gain_reduction[1] = VAR_10 / VAR_13;
            VAR_1->limiter_state = 128;
            VAR_12 = VAR_1->limiter_buf;

            for (VAR_5 = 0; VAR_5 < 1920; VAR_5++) {
                for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
                    double VAR_14;
                    VAR_14 = VAR_1->gain_reduction[1];
                    VAR_12[VAR_6] *= VAR_14;
                }
                VAR_12 += VAR_4;
            }
        }

        VAR_12 = VAR_1->limiter_buf;
    }

    do {

        switch(VAR_1->limiter_state) {
        case 130:
            FUNC_0(VAR_1, VAR_9, VAR_3 - VAR_9, VAR_4, &VAR_8, &VAR_11);
            if (VAR_8 != -1) {
                VAR_1->env_cnt = 0;
                VAR_9 += (VAR_8 - VAR_1->attack_length);
                VAR_1->gain_reduction[0] = 1.;
                VAR_1->gain_reduction[1] = VAR_10 / VAR_11;
                VAR_1->limiter_state = 131;

                VAR_1->env_index = VAR_1->peak_index - (VAR_1->attack_length * VAR_4);
                if (VAR_1->env_index < 0)
                    VAR_1->env_index += VAR_1->limiter_buf_size;

                VAR_1->env_index += (VAR_1->env_cnt * VAR_4);
                if (VAR_1->env_index > VAR_1->limiter_buf_size)
                    VAR_1->env_index -= VAR_1->limiter_buf_size;

            } else {
                VAR_9 = VAR_3;
            }
            break;

        case 131:
            for (; VAR_1->env_cnt < VAR_1->attack_length; VAR_1->env_cnt++) {
                for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
                    double VAR_15;
                    VAR_15 = VAR_1->gain_reduction[0] - ((double) VAR_1->env_cnt / (VAR_1->attack_length - 1) * (VAR_1->gain_reduction[0] - VAR_1->gain_reduction[1]));
                    VAR_12[VAR_1->env_index + VAR_6] *= VAR_15;
                }

                VAR_1->env_index += VAR_4;
                if (VAR_1->env_index >= VAR_1->limiter_buf_size)
                    VAR_1->env_index -= VAR_1->limiter_buf_size;

                VAR_9++;
                if (VAR_9 >= VAR_3) {
                    VAR_1->env_cnt++;
                    break;
                }
            }

            if (VAR_9 < VAR_3) {
                VAR_1->env_cnt = 0;
                VAR_1->attack_length = 1920;
                VAR_1->limiter_state = 128;
            }
            break;

        case 128:
            FUNC_0(VAR_1, VAR_9, VAR_3, VAR_4, &VAR_8, &VAR_11);
            if (VAR_8 == -1) {
                VAR_1->limiter_state = 129;
                VAR_1->gain_reduction[0] = VAR_1->gain_reduction[1];
                VAR_1->gain_reduction[1] = 1.;
                VAR_1->env_cnt = 0;
                break;
            } else {
                double VAR_16;
                VAR_16 = VAR_10 / VAR_11;

                if (VAR_16 < VAR_1->gain_reduction[1]) {
                    VAR_1->limiter_state = 131;

                    VAR_1->attack_length = VAR_8;
                    if (VAR_1->attack_length <= 1)
                        VAR_1->attack_length = 2;

                    VAR_1->gain_reduction[0] = VAR_1->gain_reduction[1];
                    VAR_1->gain_reduction[1] = VAR_16;
                    VAR_1->env_cnt = 0;
                    break;
                }

                for (VAR_1->env_cnt = 0; VAR_1->env_cnt < VAR_8; VAR_1->env_cnt++) {
                    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
                        double VAR_17;
                        VAR_17 = VAR_1->gain_reduction[1];
                        VAR_12[VAR_1->env_index + VAR_6] *= VAR_17;
                    }

                    VAR_1->env_index += VAR_4;
                    if (VAR_1->env_index >= VAR_1->limiter_buf_size)
                        VAR_1->env_index -= VAR_1->limiter_buf_size;

                    VAR_9++;
                    if (VAR_9 >= VAR_3) {
                        VAR_1->env_cnt++;
                        break;
                    }
                }
            }
            break;

        case 129:
            for (; VAR_1->env_cnt < VAR_1->release_length; VAR_1->env_cnt++) {
                for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
                    double VAR_18;
                    VAR_18 = VAR_1->gain_reduction[0] + (((double) VAR_1->env_cnt / (VAR_1->release_length - 1)) * (VAR_1->gain_reduction[1] - VAR_1->gain_reduction[0]));
                    VAR_12[VAR_1->env_index + VAR_6] *= VAR_18;
                }

                VAR_1->env_index += VAR_4;
                if (VAR_1->env_index >= VAR_1->limiter_buf_size)
                    VAR_1->env_index -= VAR_1->limiter_buf_size;

                VAR_9++;
                if (VAR_9 >= VAR_3) {
                    VAR_1->env_cnt++;
                    break;
                }
            }

            if (VAR_9 < VAR_3) {
                VAR_1->env_cnt = 0;
                VAR_1->limiter_state = 130;
            }

            break;
        }

    } while (VAR_9 < VAR_3);

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
            VAR_2[VAR_6] = VAR_12[VAR_7 + VAR_6];
            if (FUNC_1(VAR_2[VAR_6]) > VAR_10) {
                VAR_2[VAR_6] = VAR_10 * (VAR_2[VAR_6] < 0 ? -1 : 1);
            }
        }
        VAR_2 += VAR_4;
        VAR_7 += VAR_4;
        if (VAR_7 >= VAR_1->limiter_buf_size)
            VAR_7 -= VAR_1->limiter_buf_size;
    }
}
