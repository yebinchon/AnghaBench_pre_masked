
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {int fullband_channels; int** prediction_mode; int ** diff_peak_cb; scalar_t__ consumed_adpcm_bits; int adpcm_ctx; int ** subband; } ;
typedef TYPE_1__ DCAEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int,int *) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;

__attribute__((used)) static void FUNC_2(DCAEncContext *VAR_2)
{
    int VAR_3, VAR_4;
    int VAR_5;
    int32_t *VAR_6;
    int32_t VAR_7[VAR_1];

    VAR_2->consumed_adpcm_bits = 0;
    for (VAR_3 = 0; VAR_3 < VAR_2->fullband_channels; VAR_3++) {
        for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {
            VAR_6 = VAR_2->subband[VAR_3][VAR_4] - VAR_0;
            VAR_5 = FUNC_0(&VAR_2->adpcm_ctx, VAR_6,
                                                      VAR_1, VAR_7);
            if (VAR_5 >= 0) {
                VAR_2->prediction_mode[VAR_3][VAR_4] = VAR_5;
                VAR_2->consumed_adpcm_bits += 12;
                VAR_2->diff_peak_cb[VAR_3][VAR_4] = FUNC_1(VAR_2, VAR_7, 16);
            } else {
                VAR_2->prediction_mode[VAR_3][VAR_4] = -1;
            }
        }
    }
}
