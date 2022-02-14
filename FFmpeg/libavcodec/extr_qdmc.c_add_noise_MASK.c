
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float** fft_buffer; int fft_offset; int subframe_size; int* noise2_buffer; size_t band_index; int*** noise; unsigned int rndval; } ;
typedef TYPE_1__ QDMCContext ;


 float* VAR_0 ;
 int FUNC_0 (TYPE_1__*,float,int,int,int) ;
 int FUNC_1 (int*,int ,int) ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_2(QDMCContext *VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    float VAR_9;
    float *VAR_10 = &VAR_3->fft_buffer[0 + VAR_4][VAR_3->fft_offset + VAR_3->subframe_size * VAR_5];
    float *VAR_11 = &VAR_3->fft_buffer[2 + VAR_4][VAR_3->fft_offset + VAR_3->subframe_size * VAR_5];

    FUNC_1(VAR_3->noise2_buffer, 0, 4 * VAR_3->subframe_size);

    for (VAR_6 = 0; VAR_6 < VAR_1[VAR_3->band_index]; VAR_6++) {
        if (VAR_2[VAR_6 + 21 * VAR_3->band_index] > VAR_3->subframe_size - 1)
            break;

        VAR_8 = VAR_3->noise[VAR_4][VAR_6][VAR_5 / 2];
        VAR_9 = VAR_8 > 0 ? VAR_0[VAR_8 & 0x3F] : 0.0f;

        FUNC_0(VAR_3, VAR_9, VAR_2[21 * VAR_3->band_index + VAR_6],
                 VAR_2[21 * VAR_3->band_index + VAR_6 + 2], VAR_6);
    }

    for (VAR_7 = 2; VAR_7 < VAR_3->subframe_size - 1; VAR_7++) {
        float VAR_12, VAR_13;

        VAR_3->rndval = 214013U * VAR_3->rndval + 2531011;
        VAR_13 = ((VAR_3->rndval & 0x7FFF) - 16384.0f) * 0.000030517578f * VAR_3->noise2_buffer[VAR_7];
        VAR_3->rndval = 214013U * VAR_3->rndval + 2531011;
        VAR_12 = ((VAR_3->rndval & 0x7FFF) - 16384.0f) * 0.000030517578f * VAR_3->noise2_buffer[VAR_7];
        VAR_10[VAR_7 ] += VAR_13;
        VAR_11[VAR_7 ] += VAR_12;
        VAR_10[VAR_7+1] -= VAR_13;
        VAR_11[VAR_7+1] -= VAR_12;
    }
}
