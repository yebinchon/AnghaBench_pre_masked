
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int fullband_channels; int* channel_order_tab; int*** subband; int channels; int * band_interpolation; int ** history; } ;
typedef TYPE_1__ DCAEncContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int*,int *,int) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(DCAEncContext *VAR_1, const int32_t *VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

    for (VAR_3 = 0; VAR_3 < VAR_1->fullband_channels; VAR_3++) {

        int32_t VAR_8[512];
        int VAR_9 = 0;
        const int VAR_10 = VAR_1->channel_order_tab[VAR_3];

        FUNC_1(VAR_8, &VAR_1->history[VAR_3][0], 512 * sizeof(int32_t));

        for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
            int32_t VAR_11[64];
            int32_t VAR_12;
            int VAR_13;


            FUNC_2(VAR_11, 0, 64 * sizeof(int32_t));

            for (VAR_6 = 0, VAR_5 = VAR_9, VAR_7 = 0;
                    VAR_5 < 512; VAR_6 = (VAR_6 + 1) & 63, VAR_5++, VAR_7++)
                VAR_11[VAR_6] += FUNC_3(VAR_8[VAR_5], VAR_1->band_interpolation[VAR_7]);
            for (VAR_5 = 0; VAR_5 < VAR_9; VAR_6 = (VAR_6 + 1) & 63, VAR_5++, VAR_7++)
                VAR_11[VAR_6] += FUNC_3(VAR_8[VAR_5], VAR_1->band_interpolation[VAR_7]);

            for (VAR_6 = 16; VAR_6 < 32; VAR_6++)
                VAR_11[VAR_6] = VAR_11[VAR_6] - VAR_11[31 - VAR_6];
            for (VAR_6 = 32; VAR_6 < 48; VAR_6++)
                VAR_11[VAR_6] = VAR_11[VAR_6] + VAR_11[95 - VAR_6];

            for (VAR_13 = 0; VAR_13 < 32; VAR_13++) {
                VAR_12 = 0;
                for (VAR_5 = 16; VAR_5 < 48; VAR_5++) {
                    int VAR_14 = (2 * VAR_13 + 1) * (2 * (VAR_5 + 16) + 1);
                    VAR_12 += FUNC_3(VAR_11[VAR_5], FUNC_0(VAR_14 << 3)) >> 3;
                }

                VAR_1->subband[VAR_3][VAR_13][VAR_4] = ((VAR_13 + 1) & 2) ? -VAR_12 : VAR_12;
            }


            for (VAR_5 = 0; VAR_5 < 32; VAR_5++)
                VAR_8[VAR_5 + VAR_9] = VAR_2[(VAR_4 * 32 + VAR_5) * VAR_1->channels + VAR_10];

            VAR_9 = (VAR_9 + 32) & 511;
        }
    }
}
