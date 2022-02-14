
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* dct_count; int** dct_error_sum; int** dct_offset; int noise_reduction; } ;
typedef TYPE_1__ MpegEncContext ;



__attribute__((used)) static void FUNC_0(MpegEncContext *VAR_0)
{
    int VAR_1, VAR_2;

    for (VAR_1 = 0; VAR_1 < 2; VAR_1++) {
        if (VAR_0->dct_count[VAR_1] > (1 << 16)) {
            for (VAR_2 = 0; VAR_2 < 64; VAR_2++) {
                VAR_0->dct_error_sum[VAR_1][VAR_2] >>= 1;
            }
            VAR_0->dct_count[VAR_1] >>= 1;
        }

        for (VAR_2 = 0; VAR_2 < 64; VAR_2++) {
            VAR_0->dct_offset[VAR_1][VAR_2] = (VAR_0->noise_reduction *
                                       VAR_0->dct_count[VAR_1] +
                                       VAR_0->dct_error_sum[VAR_1][VAR_2] / 2) /
                                      (VAR_0->dct_error_sum[VAR_1][VAR_2] + 1);
        }
    }
}
