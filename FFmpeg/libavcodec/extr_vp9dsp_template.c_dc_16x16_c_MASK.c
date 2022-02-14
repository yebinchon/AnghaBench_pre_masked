
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
          VAR_5[13] + VAR_5[14] + VAR_5[15] + VAR_6[0] + VAR_6[1] + VAR_6[2] + VAR_6[3] +
          VAR_6[4] + VAR_6[5] + VAR_6[6] + VAR_6[7] + VAR_6[8] + VAR_6[9] + VAR_6[10] +
          VAR_6[11] + VAR_6[12] + VAR_6[13] + VAR_6[14] + VAR_6[15] + 16) >> 5);
    int VAR_8;

    VAR_1 /= sizeof(pixel);
    for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
        FUNC_0(VAR_4 + 0, VAR_7);
        FUNC_0(VAR_4 + 4, VAR_7);
        FUNC_0(VAR_4 + 8, VAR_7);
        FUNC_0(VAR_4 + 12, VAR_7);
        VAR_4 += VAR_1;
    }
}
