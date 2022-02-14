
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* start_freq; int num_cpl_bands; int* cpl_band_sizes; int fbw_channels; int** cpl_coords; int** fixed_coeffs; scalar_t__* phase_flags; scalar_t__* channel_in_cpl; } ;
typedef TYPE_1__ AC3DecodeContext ;


 size_t VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(AC3DecodeContext *VAR_1)
{
    int VAR_2, VAR_3, VAR_4;

    VAR_2 = VAR_1->start_freq[VAR_0];
    for (VAR_3 = 0; VAR_3 < VAR_1->num_cpl_bands; VAR_3++) {
        int VAR_5 = VAR_2;
        int VAR_6 = VAR_2 + VAR_1->cpl_band_sizes[VAR_3];
        for (VAR_4 = 1; VAR_4 <= VAR_1->fbw_channels; VAR_4++) {
            if (VAR_1->channel_in_cpl[VAR_4]) {
                int VAR_7 = VAR_1->cpl_coords[VAR_4][VAR_3] << 5;
                for (VAR_2 = VAR_5; VAR_2 < VAR_6; VAR_2++) {
                    VAR_1->fixed_coeffs[VAR_4][VAR_2] =
                        FUNC_0(VAR_1->fixed_coeffs[VAR_0][VAR_2] * (1 << 4), VAR_7);
                }
                if (VAR_4 == 2 && VAR_1->phase_flags[VAR_3]) {
                    for (VAR_2 = VAR_5; VAR_2 < VAR_6; VAR_2++)
                        VAR_1->fixed_coeffs[2][VAR_2] = -VAR_1->fixed_coeffs[2][VAR_2];
                }
            }
        }
        VAR_2 = VAR_6;
    }
}
