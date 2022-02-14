
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static int FUNC_0(uint16_t *VAR_0, int VAR_1, int VAR_2,
                              int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        VAR_0[VAR_3 * VAR_5] = 10000 * ((VAR_5 / 10 * VAR_1) % 2);
        for (VAR_6 = 1; VAR_6 < VAR_3; VAR_6++)
            VAR_0[VAR_3 * VAR_5 + VAR_6] = VAR_0[VAR_3 * VAR_5] * (VAR_6 + 1);
    }
    return 0;
}
