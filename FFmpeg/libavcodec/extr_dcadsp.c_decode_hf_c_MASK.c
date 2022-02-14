
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef size_t int8_t ;
typedef size_t int32_t ;


 size_t FUNC_0 (size_t const) ;

__attribute__((used)) static void FUNC_1(int32_t **VAR_0,
                        const int32_t *VAR_1,
                        const int8_t VAR_2[1024][32],
                        int32_t VAR_3[32][2],
                        ptrdiff_t VAR_4, ptrdiff_t VAR_5,
                        ptrdiff_t VAR_6, ptrdiff_t VAR_7)
{
    int VAR_8, VAR_9;

    for (VAR_8 = VAR_4; VAR_8 < VAR_5; VAR_8++) {
        const int8_t *VAR_10 = VAR_2[VAR_1[VAR_8]];
        int32_t VAR_11 = VAR_3[VAR_8][0];
        for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
            VAR_0[VAR_8][VAR_9 + VAR_6] = FUNC_0((VAR_10[VAR_9] * VAR_11 + (1 << 3)) >> 4);
    }
}
