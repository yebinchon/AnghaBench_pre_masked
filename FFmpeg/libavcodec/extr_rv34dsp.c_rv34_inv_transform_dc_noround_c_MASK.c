
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;



__attribute__((used)) static void FUNC_0(int16_t *VAR_0)
{
    int16_t VAR_1 = (13 * 13 * 3 * VAR_0[0]) >> 11;
    int VAR_2, VAR_3;

    for (VAR_2 = 0; VAR_2 < 4; VAR_2++, VAR_0 += 4)
        for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
            VAR_0[VAR_3] = VAR_1;
}
