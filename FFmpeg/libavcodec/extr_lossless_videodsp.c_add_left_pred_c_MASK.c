
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;



__attribute__((used)) static int FUNC_0(uint8_t *VAR_0, const uint8_t *VAR_1, ptrdiff_t VAR_2,
                           int VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2 - 1; VAR_4++) {
        VAR_3 += VAR_1[VAR_4];
        VAR_0[VAR_4] = VAR_3;
        VAR_4++;
        VAR_3 += VAR_1[VAR_4];
        VAR_0[VAR_4] = VAR_3;
    }

    for (; VAR_4 < VAR_2; VAR_4++) {
        VAR_3 += VAR_1[VAR_4];
        VAR_0[VAR_4] = VAR_3;
    }

    return VAR_3;
}
