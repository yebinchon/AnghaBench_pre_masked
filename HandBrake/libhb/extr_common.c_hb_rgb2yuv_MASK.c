
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double rgb ;



int FUNC_0(int VAR_0)
{
    double VAR_1, VAR_2, VAR_3;
    int VAR_4, VAR_5, VAR_6;

    VAR_1 = (VAR_0 >> 16) & 0xff;
    VAR_2 = (VAR_0 >> 8) & 0xff;
    VAR_3 = (VAR_0 ) & 0xff;

    VAR_4 = 16. + ( 0.257 * VAR_1) + (0.504 * VAR_2) + (0.098 * VAR_3);
    VAR_6 = 128. + (-0.148 * VAR_1) - (0.291 * VAR_2) + (0.439 * VAR_3);
    VAR_5 = 128. + ( 0.439 * VAR_1) - (0.368 * VAR_2) - (0.071 * VAR_3);

    VAR_4 = (VAR_4 < 0) ? 0 : VAR_4;
    VAR_6 = (VAR_6 < 0) ? 0 : VAR_6;
    VAR_5 = (VAR_5 < 0) ? 0 : VAR_5;

    VAR_4 = (VAR_4 > 255) ? 255 : VAR_4;
    VAR_6 = (VAR_6 > 255) ? 255 : VAR_6;
    VAR_5 = (VAR_5 > 255) ? 255 : VAR_5;

    return (VAR_4 << 16) | (VAR_5 << 8) | VAR_6;
}
