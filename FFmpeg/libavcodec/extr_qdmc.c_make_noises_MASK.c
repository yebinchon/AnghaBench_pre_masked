
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t band_index; float* noise_buffer; } ;
typedef TYPE_1__ QDMCContext ;


 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_0(QDMCContext *VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    float *VAR_9;

    for (VAR_4 = 0; VAR_4 < VAR_0[VAR_2->band_index]; VAR_4++) {
        VAR_5 = VAR_1[VAR_4 + 21 * VAR_2->band_index ];
        VAR_6 = VAR_1[VAR_4 + 21 * VAR_2->band_index + 1];
        VAR_7 = VAR_1[VAR_4 + 21 * VAR_2->band_index + 2];
        VAR_9 = VAR_2->noise_buffer + 256 * VAR_4;

        for (VAR_3 = 0; VAR_3 + VAR_5 < VAR_6; VAR_3++, VAR_9++)
            VAR_9[0] = VAR_3 / (float)(VAR_6 - VAR_5);

        VAR_8 = VAR_7 - VAR_6;
        VAR_9 = VAR_2->noise_buffer + (VAR_4 << 8) + VAR_6 - VAR_5;

        for (VAR_3 = VAR_6; VAR_3 < VAR_7; VAR_3++, VAR_9++, VAR_8--)
            VAR_9[0] = VAR_8 / (float)(VAR_7 - VAR_6);
    }
}
