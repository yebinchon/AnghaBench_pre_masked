
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int pixel ;


 int FUNC_0 (int const) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, ptrdiff_t VAR_1,
                       const uint8_t *VAR_2, const uint8_t *VAR_3)
{
    pixel *VAR_4 = (pixel *) VAR_0;
    const pixel *VAR_5 = (const pixel *) VAR_2;
    const pixel *VAR_6 = (const pixel *) VAR_3;
    int VAR_7, VAR_8 = VAR_6[-1];

    VAR_1 /= sizeof(pixel);
    for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
        int VAR_9 = VAR_5[31 - VAR_7] - VAR_8;

        VAR_4[ 0] = FUNC_0(VAR_6[ 0] + VAR_9);
        VAR_4[ 1] = FUNC_0(VAR_6[ 1] + VAR_9);
        VAR_4[ 2] = FUNC_0(VAR_6[ 2] + VAR_9);
        VAR_4[ 3] = FUNC_0(VAR_6[ 3] + VAR_9);
        VAR_4[ 4] = FUNC_0(VAR_6[ 4] + VAR_9);
        VAR_4[ 5] = FUNC_0(VAR_6[ 5] + VAR_9);
        VAR_4[ 6] = FUNC_0(VAR_6[ 6] + VAR_9);
        VAR_4[ 7] = FUNC_0(VAR_6[ 7] + VAR_9);
        VAR_4[ 8] = FUNC_0(VAR_6[ 8] + VAR_9);
        VAR_4[ 9] = FUNC_0(VAR_6[ 9] + VAR_9);
        VAR_4[10] = FUNC_0(VAR_6[10] + VAR_9);
        VAR_4[11] = FUNC_0(VAR_6[11] + VAR_9);
        VAR_4[12] = FUNC_0(VAR_6[12] + VAR_9);
        VAR_4[13] = FUNC_0(VAR_6[13] + VAR_9);
        VAR_4[14] = FUNC_0(VAR_6[14] + VAR_9);
        VAR_4[15] = FUNC_0(VAR_6[15] + VAR_9);
        VAR_4[16] = FUNC_0(VAR_6[16] + VAR_9);
        VAR_4[17] = FUNC_0(VAR_6[17] + VAR_9);
        VAR_4[18] = FUNC_0(VAR_6[18] + VAR_9);
        VAR_4[19] = FUNC_0(VAR_6[19] + VAR_9);
        VAR_4[20] = FUNC_0(VAR_6[20] + VAR_9);
        VAR_4[21] = FUNC_0(VAR_6[21] + VAR_9);
        VAR_4[22] = FUNC_0(VAR_6[22] + VAR_9);
        VAR_4[23] = FUNC_0(VAR_6[23] + VAR_9);
        VAR_4[24] = FUNC_0(VAR_6[24] + VAR_9);
        VAR_4[25] = FUNC_0(VAR_6[25] + VAR_9);
        VAR_4[26] = FUNC_0(VAR_6[26] + VAR_9);
        VAR_4[27] = FUNC_0(VAR_6[27] + VAR_9);
        VAR_4[28] = FUNC_0(VAR_6[28] + VAR_9);
        VAR_4[29] = FUNC_0(VAR_6[29] + VAR_9);
        VAR_4[30] = FUNC_0(VAR_6[30] + VAR_9);
        VAR_4[31] = FUNC_0(VAR_6[31] + VAR_9);
        VAR_4 += VAR_1;
    }
}
