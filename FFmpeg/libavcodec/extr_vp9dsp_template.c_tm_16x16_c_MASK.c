
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
    for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
        int VAR_9 = VAR_5[15 - VAR_7] - VAR_8;

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
        VAR_4 += VAR_1;
    }
}
