
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef int int16_t ;


 int FUNC_0 (int const) ;

__attribute__((used)) static void FUNC_1(int16_t *VAR_0[3], ptrdiff_t VAR_1,
                          int VAR_2, int VAR_3, const int16_t VAR_4[3][3][8])
{
    int VAR_5, VAR_6;
    int16_t *VAR_7 = VAR_0[0], *VAR_8 = VAR_0[1], *VAR_9 = VAR_0[2];

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
            int VAR_10 = VAR_7[VAR_6], VAR_11 = VAR_8[VAR_6], VAR_12 = VAR_9[VAR_6];

            VAR_7[VAR_6] = FUNC_0((VAR_4[0][0][0] * VAR_10 + VAR_4[0][1][0] * VAR_11 +
                                     VAR_4[0][2][0] * VAR_12 + 8192) >> 14);
            VAR_8[VAR_6] = FUNC_0((VAR_4[1][0][0] * VAR_10 + VAR_4[1][1][0] * VAR_11 +
                                     VAR_4[1][2][0] * VAR_12 + 8192) >> 14);
            VAR_9[VAR_6] = FUNC_0((VAR_4[2][0][0] * VAR_10 + VAR_4[2][1][0] * VAR_11 +
                                     VAR_4[2][2][0] * VAR_12 + 8192) >> 14);
        }

        VAR_7 += VAR_1;
        VAR_8 += VAR_1;
        VAR_9 += VAR_1;
    }
}
