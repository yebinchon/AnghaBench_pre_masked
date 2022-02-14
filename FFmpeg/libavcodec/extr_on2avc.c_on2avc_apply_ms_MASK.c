
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float** coeffs; int num_windows; int num_bands; int* band_start; scalar_t__* ms_info; } ;
typedef TYPE_1__ On2AVCContext ;



__attribute__((used)) static int FUNC_0(On2AVCContext *VAR_0)
{
    int VAR_1, VAR_2, VAR_3;
    int VAR_4 = 0;
    float *VAR_5 = VAR_0->coeffs[0];
    float *VAR_6 = VAR_0->coeffs[1];

    for (VAR_1 = 0; VAR_1 < VAR_0->num_windows; VAR_1++) {
        for (VAR_2 = 0; VAR_2 < VAR_0->num_bands; VAR_2++) {
            if (VAR_0->ms_info[VAR_4 + VAR_2]) {
                for (VAR_3 = VAR_0->band_start[VAR_2]; VAR_3 < VAR_0->band_start[VAR_2 + 1]; VAR_3++) {
                    float VAR_7 = *VAR_5, VAR_8 = *VAR_6;
                    *VAR_5++ = VAR_7 + VAR_8;
                    *VAR_6++ = VAR_7 - VAR_8;
                }
            } else {
                VAR_5 += VAR_0->band_start[VAR_2 + 1] - VAR_0->band_start[VAR_2];
                VAR_6 += VAR_0->band_start[VAR_2 + 1] - VAR_0->band_start[VAR_2];
            }
        }
        VAR_4 += VAR_0->num_bands;
    }
    return 0;
}
