
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* output_zero; int* input_skip; int* output_skip; int out_channels; int in_channels; scalar_t__ out_matrix_channels; scalar_t__ in_matrix_channels; } ;
typedef TYPE_1__ AudioMix ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static void FUNC_2(AudioMix *VAR_0, const double *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;

    FUNC_1(VAR_0->output_zero, 0, sizeof(VAR_0->output_zero));
    FUNC_1(VAR_0->input_skip, 0, sizeof(VAR_0->input_skip));
    FUNC_1(VAR_0->output_skip, 0, sizeof(VAR_0->output_skip));


    for (VAR_4 = 0; VAR_4 < VAR_0->out_channels; VAR_4++) {
        int VAR_5 = 1;


        for (VAR_3 = 0; VAR_3 < VAR_0->in_channels; VAR_3++) {
            if (VAR_1[VAR_4 * VAR_2 + VAR_3] != 0.0) {
                VAR_5 = 0;
                break;
            }
        }


        if (VAR_4 < VAR_0->in_channels) {
            for (VAR_3 = 0; VAR_3 < VAR_0->out_channels; VAR_3++) {
                if (VAR_1[VAR_3 * VAR_2 + VAR_4] != 0.0) {
                    VAR_5 = 0;
                    break;
                }
            }
        }
        if (VAR_5) {
            VAR_0->output_zero[VAR_4] = 1;
            VAR_0->out_matrix_channels--;
            if (VAR_4 < VAR_0->in_channels)
                VAR_0->in_matrix_channels--;
        }
    }
    if (VAR_0->out_matrix_channels == 0 || VAR_0->in_matrix_channels == 0) {
        VAR_0->out_matrix_channels = 0;
        VAR_0->in_matrix_channels = 0;
        return;
    }



    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0->in_channels, VAR_0->out_channels); VAR_3++) {
        int VAR_6 = 1;

        for (VAR_4 = 0; VAR_4 < VAR_0->out_channels; VAR_4++) {
            int VAR_7;
            if ((VAR_4 != VAR_3 && VAR_1[VAR_4 * VAR_2 + VAR_3] != 0.0) ||
                (VAR_4 == VAR_3 && VAR_1[VAR_4 * VAR_2 + VAR_3] != 1.0)) {
                VAR_6 = 0;
                break;
            }


            if (VAR_4 == VAR_3) {
                for (VAR_7 = 0; VAR_7 < VAR_0->in_channels; VAR_7++) {
                    if (VAR_7 != VAR_3 && VAR_1[VAR_4 * VAR_2 + VAR_7] != 0.0) {
                        VAR_6 = 0;
                        break;
                    }
                }
            }
        }
        if (VAR_6) {
            VAR_0->input_skip[VAR_3] = 1;
            VAR_0->in_matrix_channels--;
        }
    }

    for (; VAR_3 < VAR_0->in_channels; VAR_3++) {
        int VAR_8 = 0;

        for (VAR_4 = 0; VAR_4 < VAR_0->out_channels; VAR_4++) {
            if (VAR_1[VAR_4 * VAR_2 + VAR_3] != 0.0) {
                VAR_8 = 1;
                break;
            }
        }
        if (!VAR_8) {
            VAR_0->input_skip[VAR_3] = 1;
            VAR_0->in_matrix_channels--;
        }
    }
    if (VAR_0->in_matrix_channels == 0) {
        VAR_0->out_matrix_channels = 0;
        return;
    }



    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0->in_channels, VAR_0->out_channels); VAR_4++) {
        int VAR_9 = 1;
        int VAR_10;

        for (VAR_3 = 0; VAR_3 < VAR_0->in_channels; VAR_3++) {
            if ((VAR_4 != VAR_3 && VAR_1[VAR_4 * VAR_2 + VAR_3] != 0.0) ||
                (VAR_4 == VAR_3 && VAR_1[VAR_4 * VAR_2 + VAR_3] != 1.0)) {
                VAR_9 = 0;
                break;
            }
        }


        VAR_3 = VAR_4;
        for (VAR_10 = 0; VAR_10 < VAR_0->out_channels; VAR_10++) {
            if (VAR_10 != VAR_3 && VAR_1[VAR_10 * VAR_2 + VAR_3] != 0.0) {
                VAR_9 = 0;
                break;
            }
        }
        if (VAR_9) {
            VAR_0->output_skip[VAR_4] = 1;
            VAR_0->out_matrix_channels--;
        }
    }
    if (VAR_0->out_matrix_channels == 0) {
        VAR_0->in_matrix_channels = 0;
        return;
    }
}
