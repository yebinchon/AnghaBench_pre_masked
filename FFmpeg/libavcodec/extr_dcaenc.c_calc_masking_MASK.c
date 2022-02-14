
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {int** masking_curve_cb; int fullband_channels; int* channel_order_tab; int** history; int channels; int* eff_masking_curve_cb; int* band_masking_cb; } ;
typedef TYPE_1__ DCAEncContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int*,int*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int,int ,int ,int *) ;
 int FUNC_2 (TYPE_1__*,int,int ,int ,int *) ;

__attribute__((used)) static void FUNC_3(DCAEncContext *VAR_2, const int32_t *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    int32_t VAR_9[512];

    for (VAR_4 = 0; VAR_4 < 256; VAR_4++)
        for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
            VAR_2->masking_curve_cb[VAR_8][VAR_4] = -2047;

    for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
        for (VAR_7 = 0; VAR_7 < VAR_2->fullband_channels; VAR_7++) {
            const int VAR_10 = VAR_2->channel_order_tab[VAR_7];

            for (VAR_4 = 0, VAR_5 = 128 + 256 * VAR_8; VAR_5 < 512; VAR_4++, VAR_5++)
                VAR_9[VAR_4] = VAR_2->history[VAR_7][VAR_5];
            for (VAR_5 -= 512; VAR_4 < 512; VAR_4++, VAR_5++)
                VAR_9[VAR_4] = VAR_3[VAR_5 * VAR_2->channels + VAR_10];
            FUNC_0(VAR_2, VAR_9, VAR_2->masking_curve_cb[VAR_8]);
        }
    for (VAR_4 = 0; VAR_4 < 256; VAR_4++) {
        int32_t VAR_11 = 2048;

        for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
            if (VAR_2->masking_curve_cb[VAR_8][VAR_4] < VAR_11)
                VAR_11 = VAR_2->masking_curve_cb[VAR_8][VAR_4];
        VAR_2->eff_masking_curve_cb[VAR_4] = VAR_11;
    }

    for (VAR_6 = 0; VAR_6 < 32; VAR_6++) {
        VAR_2->band_masking_cb[VAR_6] = 2048;
        FUNC_2(VAR_2, VAR_6, 0, VAR_1, ((void*)0));
        FUNC_1(VAR_2, VAR_6, 0, VAR_1, ((void*)0));
    }
}
