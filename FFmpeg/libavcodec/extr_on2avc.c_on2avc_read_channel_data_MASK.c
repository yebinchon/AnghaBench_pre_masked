
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {float** coeffs; int num_windows; int num_bands; int* band_start; int* band_type; int * band_scales; } ;
typedef TYPE_1__ On2AVCContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (float*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *,float*,int,int,int ) ;
 int FUNC_4 (TYPE_1__*,int *,float*,int,int,int ) ;

__attribute__((used)) static int FUNC_5(On2AVCContext *VAR_1, GetBitContext *VAR_2, int VAR_3)
{
    int VAR_4;
    int VAR_5, VAR_6, VAR_7;
    float *VAR_8;

    if ((VAR_4 = FUNC_2(VAR_1, VAR_2)) < 0)
        return VAR_4;
    if ((VAR_4 = FUNC_1(VAR_1, VAR_2)) < 0)
        return VAR_4;

    VAR_8 = VAR_1->coeffs[VAR_3];
    VAR_7 = 0;
    FUNC_0(VAR_8, 0, VAR_0 * sizeof(*VAR_8));
    for (VAR_5 = 0; VAR_5 < VAR_1->num_windows; VAR_5++) {
        for (VAR_6 = 0; VAR_6 < VAR_1->num_bands; VAR_6++) {
            int VAR_9 = VAR_1->band_start[VAR_6 + 1] - VAR_1->band_start[VAR_6];
            int VAR_10 = VAR_1->band_type[VAR_7 + VAR_6];

            if (!VAR_10) {
                VAR_8 += VAR_9;
                continue;
            }
            if (VAR_10 < 9)
                FUNC_4(VAR_1, VAR_2, VAR_8, VAR_9, VAR_10,
                                    VAR_1->band_scales[VAR_7 + VAR_6]);
            else
                FUNC_3(VAR_1, VAR_2, VAR_8, VAR_9, VAR_10,
                                    VAR_1->band_scales[VAR_7 + VAR_6]);
            VAR_8 += VAR_9;
        }
        VAR_7 += VAR_1->num_bands;
    }

    return 0;
}
