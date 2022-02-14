
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fbw_channels; int* start_freq; int* end_freq; scalar_t__** fixed_coeffs; int ** bap; scalar_t__* channel_in_cpl; int * dither_flag; } ;
typedef TYPE_1__ AC3DecodeContext ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(AC3DecodeContext *VAR_1) {
    int VAR_2, VAR_3;

    for (VAR_2 = 1; VAR_2 <= VAR_1->fbw_channels; VAR_2++) {
        if (!VAR_1->dither_flag[VAR_2] && VAR_1->channel_in_cpl[VAR_2]) {
            for (VAR_3 = VAR_1->start_freq[VAR_0]; VAR_3 < VAR_1->end_freq[VAR_0]; VAR_3++) {
                if (!VAR_1->bap[VAR_0][VAR_3])
                    VAR_1->fixed_coeffs[VAR_2][VAR_3] = 0;
            }
        }
    }
}
