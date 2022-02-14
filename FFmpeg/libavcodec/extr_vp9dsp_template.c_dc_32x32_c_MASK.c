
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int pixel4 ;
typedef int pixel ;


 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int const) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, ptrdiff_t VAR_1,
                       const uint8_t *VAR_2, const uint8_t *VAR_3)
{
    pixel *VAR_4 = (pixel *) VAR_0;
    const pixel *VAR_5 = (const pixel *) VAR_2;
    const pixel *VAR_6 = (const pixel *) VAR_3;
    pixel4 VAR_7 = FUNC_1
        ((VAR_5[0] + VAR_5[1] + VAR_5[2] + VAR_5[3] + VAR_5[4] + VAR_5[5] + VAR_5[6] +
          VAR_5[7] + VAR_5[8] + VAR_5[9] + VAR_5[10] + VAR_5[11] + VAR_5[12] +
          VAR_5[13] + VAR_5[14] + VAR_5[15] + VAR_5[16] + VAR_5[17] + VAR_5[18] +
          VAR_5[19] + VAR_5[20] + VAR_5[21] + VAR_5[22] + VAR_5[23] + VAR_5[24] +
          VAR_5[25] + VAR_5[26] + VAR_5[27] + VAR_5[28] + VAR_5[29] + VAR_5[30] +
          VAR_5[31] + VAR_6[0] + VAR_6[1] + VAR_6[2] + VAR_6[3] + VAR_6[4] + VAR_6[5] +
          VAR_6[6] + VAR_6[7] + VAR_6[8] + VAR_6[9] + VAR_6[10] + VAR_6[11] + VAR_6[12] +
          VAR_6[13] + VAR_6[14] + VAR_6[15] + VAR_6[16] + VAR_6[17] + VAR_6[18] + VAR_6[19] +
          VAR_6[20] + VAR_6[21] + VAR_6[22] + VAR_6[23] + VAR_6[24] + VAR_6[25] + VAR_6[26] +
          VAR_6[27] + VAR_6[28] + VAR_6[29] + VAR_6[30] + VAR_6[31] + 32) >> 6);
    int VAR_8;

    VAR_1 /= sizeof(pixel);
    for (VAR_8 = 0; VAR_8 < 32; VAR_8++) {
        FUNC_0(VAR_4 + 0, VAR_7);
        FUNC_0(VAR_4 + 4, VAR_7);
        FUNC_0(VAR_4 + 8, VAR_7);
        FUNC_0(VAR_4 + 12, VAR_7);
        FUNC_0(VAR_4 + 16, VAR_7);
        FUNC_0(VAR_4 + 20, VAR_7);
        FUNC_0(VAR_4 + 24, VAR_7);
        FUNC_0(VAR_4 + 28, VAR_7);
        VAR_4 += VAR_1;
    }
}
