
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static void FUNC_0(const uint16_t *VAR_0, float *VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5;

    VAR_5 = (VAR_0[3] >> 9) & 3;

    for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
        VAR_3 = ((VAR_0[VAR_2] & 0x7f) / 11) * 5 + ((VAR_2 + VAR_5) % 5);
        VAR_4 = ((VAR_0[VAR_2] & 0x7f) % 11) * 5 + ((VAR_2 + VAR_5) % 5);

        VAR_1[VAR_3] = (VAR_0[VAR_2] & 0x80) ? -1.0 : 1.0;

        if (VAR_4 < VAR_3)
            VAR_1[VAR_4] = -VAR_1[VAR_3];
        else
            VAR_1[VAR_4] += VAR_1[VAR_3];
    }

    VAR_3 = ((VAR_0[3] & 0x7f) / 11) * 5 + ((3 + VAR_5) % 5);
    VAR_4 = ((VAR_0[3] & 0x7f) % 11) * 5 + ((4 + VAR_5) % 5);

    VAR_1[VAR_3] = (VAR_0[3] & 0x100) ? -1.0 : 1.0;
    VAR_1[VAR_4] = (VAR_0[3] & 0x80 ) ? -1.0 : 1.0;
}
