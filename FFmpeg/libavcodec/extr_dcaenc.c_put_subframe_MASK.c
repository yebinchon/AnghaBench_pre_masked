
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fullband_channels; int** prediction_mode; int* bit_allocation_sel; int** abits; int** scale_factor; int lfe_scale_factor; int pb; int lfe_quant; int * downsampled_lfe; scalar_t__ lfe_channel; } ;
typedef TYPE_1__ DCAEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int*,int,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (TYPE_1__*,int,int,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(DCAEncContext *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8;


    FUNC_1(&VAR_3->pb, 2, VAR_2 -1);


    FUNC_1(&VAR_3->pb, 3, 0);


    for (VAR_8 = 0; VAR_8 < VAR_3->fullband_channels; VAR_8++)
        for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
            FUNC_1(&VAR_3->pb, 1, !(VAR_3->prediction_mode[VAR_8][VAR_6] == -1));


    for (VAR_8 = 0; VAR_8 < VAR_3->fullband_channels; VAR_8++)
        for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
            if (VAR_3->prediction_mode[VAR_8][VAR_6] >= 0)
                FUNC_1(&VAR_3->pb, 12, VAR_3->prediction_mode[VAR_8][VAR_6]);


    for (VAR_8 = 0; VAR_8 < VAR_3->fullband_channels; VAR_8++) {
        if (VAR_3->bit_allocation_sel[VAR_8] == 6) {
            for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
                FUNC_1(&VAR_3->pb, 5, VAR_3->abits[VAR_8][VAR_6]);
            }
        } else {
            FUNC_0(&VAR_3->pb, VAR_3->abits[VAR_8], VAR_0,
                                 VAR_3->bit_allocation_sel[VAR_8]);
        }
    }

    if (VAR_2 > 1) {

        for (VAR_8 = 0; VAR_8 < VAR_3->fullband_channels; VAR_8++)
            for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
                if (VAR_3->abits[VAR_8][VAR_6])
                    FUNC_1(&VAR_3->pb, 1, 0);
    }


    for (VAR_8 = 0; VAR_8 < VAR_3->fullband_channels; VAR_8++)
        for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
            if (VAR_3->abits[VAR_8][VAR_6])
                FUNC_1(&VAR_3->pb, 7, VAR_3->scale_factor[VAR_8][VAR_6]);
    if (VAR_3->lfe_channel) {
        for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
            FUNC_1(&VAR_3->pb, 8, FUNC_3(VAR_3->downsampled_lfe[VAR_5], VAR_3->lfe_quant) & 0xff);
        FUNC_1(&VAR_3->pb, 8, VAR_3->lfe_scale_factor);
    }


    for (VAR_7 = 0; VAR_7 < VAR_2 ; VAR_7++)
        for (VAR_8 = 0; VAR_8 < VAR_3->fullband_channels; VAR_8++)
            for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
                if (VAR_3->abits[VAR_8][VAR_6])
                    FUNC_2(VAR_3, VAR_7, VAR_6, VAR_8);


    FUNC_1(&VAR_3->pb, 16, 0xffff);
}
