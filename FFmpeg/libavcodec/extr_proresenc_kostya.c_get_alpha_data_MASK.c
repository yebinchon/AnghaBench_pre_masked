
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;
typedef int ProresContext ;


 int FUNC_0 (int,int const) ;
 int FUNC_1 (int*,int const*,int const) ;

__attribute__((used)) static void FUNC_2(ProresContext *VAR_0, const uint16_t *VAR_1,
                           ptrdiff_t VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6,
                           int16_t *VAR_7, int VAR_8, int VAR_9)
{
    const int VAR_10 = 16 * VAR_8;
    int VAR_11, VAR_12, VAR_13, VAR_14;

    VAR_13 = FUNC_0(VAR_5 - VAR_3, VAR_10);
    VAR_14 = FUNC_0(VAR_6 - VAR_4, 16);
    for (VAR_11 = 0; VAR_11 < VAR_14; VAR_11++) {
        FUNC_1(VAR_7, VAR_1, VAR_13 * sizeof(*VAR_1));
        if (VAR_9 == 8)
            for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
                VAR_7[VAR_12] >>= 2;
        else
            for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
                VAR_7[VAR_12] = (VAR_7[VAR_12] << 6) | (VAR_7[VAR_12] >> 4);
        for (VAR_12 = VAR_13; VAR_12 < VAR_10; VAR_12++)
            VAR_7[VAR_12] = VAR_7[VAR_13 - 1];
        VAR_7 += VAR_10;
        VAR_1 += VAR_2 >> 1;
    }
    for (; VAR_11 < 16; VAR_11++) {
        FUNC_1(VAR_7, VAR_7 - VAR_10, VAR_10 * sizeof(*VAR_7));
        VAR_7 += VAR_10;
    }
}
