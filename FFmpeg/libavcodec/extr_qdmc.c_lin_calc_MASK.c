
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int subframe_size; float* noise_buffer; float* noise2_buffer; } ;
typedef TYPE_1__ QDMCContext ;



__attribute__((used)) static void FUNC_0(QDMCContext *VAR_0, float VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    float VAR_10, *VAR_11;

    VAR_10 = 0.5 * VAR_1;
    VAR_5 = VAR_0->subframe_size;
    if (VAR_5 >= VAR_3)
        VAR_5 = VAR_3;
    VAR_9 = (VAR_5 - VAR_2) & 0xFFFC;
    VAR_7 = VAR_2;
    VAR_11 = &VAR_0->noise_buffer[256 * VAR_4];

    for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6 += 4, VAR_7+= 4, VAR_11 += 4) {
        VAR_0->noise2_buffer[VAR_7 ] += VAR_10 * VAR_11[0];
        VAR_0->noise2_buffer[VAR_7 + 1] += VAR_10 * VAR_11[1];
        VAR_0->noise2_buffer[VAR_7 + 2] += VAR_10 * VAR_11[2];
        VAR_0->noise2_buffer[VAR_7 + 3] += VAR_10 * VAR_11[3];
    }

    VAR_8 = VAR_9 + VAR_2;
    VAR_11 = VAR_0->noise_buffer + VAR_9 + (VAR_4 << 8);
    for (VAR_6 = VAR_9; VAR_6 < VAR_5 - VAR_2; VAR_6++, VAR_8++, VAR_11++)
        VAR_0->noise2_buffer[VAR_8] += VAR_10 * VAR_11[0];
}
