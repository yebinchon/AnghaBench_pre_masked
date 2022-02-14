
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(int *VAR_0, int *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
    unsigned VAR_4, VAR_5;
    int *VAR_6;
    unsigned int VAR_7, VAR_8, VAR_9, VAR_10;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        VAR_6 = VAR_1;
        VAR_7 = VAR_0[0];
        VAR_8 = VAR_0[1];
        for (VAR_5 = 0; VAR_5 < VAR_3/2; VAR_5++) {
            VAR_9 = *VAR_6;
            *VAR_6 = VAR_8 * 2 + (VAR_7 + VAR_9);
            VAR_6 += VAR_2;
            VAR_10 = *VAR_6;
            *VAR_6 = VAR_9 * 2 - (VAR_8 + VAR_10);
            VAR_6 += VAR_2;
            VAR_7 = VAR_9;
            VAR_8 = VAR_10;
        }

        *VAR_0++ = VAR_7;
        *VAR_0++ = VAR_8;
        VAR_1++;
    }
}
