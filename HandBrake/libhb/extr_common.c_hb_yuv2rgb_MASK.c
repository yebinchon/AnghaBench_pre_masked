
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double yuv ;



int FUNC_0(int VAR_0)
{
    double VAR_1, VAR_2, VAR_3;
    int VAR_4, VAR_5, VAR_6;

    VAR_1 = (VAR_0 >> 16) & 0xff;
    VAR_2 = (VAR_0 >> 8) & 0xff;
    VAR_3 = (VAR_0 ) & 0xff;

    VAR_4 = 1.164 * (VAR_1 - 16) + 1.596 * (VAR_2 - 128);
    VAR_5 = 1.164 * (VAR_1 - 16) - 0.392 * (VAR_3 - 128) - 0.813 * (VAR_2 - 128);
    VAR_6 = 1.164 * (VAR_1 - 16) + 2.017 * (VAR_3 - 128);

    VAR_4 = (VAR_4 < 0) ? 0 : VAR_4;
    VAR_5 = (VAR_5 < 0) ? 0 : VAR_5;
    VAR_6 = (VAR_6 < 0) ? 0 : VAR_6;

    VAR_4 = (VAR_4 > 255) ? 255 : VAR_4;
    VAR_5 = (VAR_5 > 255) ? 255 : VAR_5;
    VAR_6 = (VAR_6 > 255) ? 255 : VAR_6;

    return (VAR_4 << 16) | (VAR_5 << 8) | VAR_6;
}
