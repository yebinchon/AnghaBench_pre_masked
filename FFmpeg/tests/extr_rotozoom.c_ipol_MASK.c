
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static int FUNC_0(uint8_t *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3 = VAR_1 >> 16;
    int VAR_4 = VAR_2 >> 16;
    int VAR_5 = VAR_1 & 0xFFFF;
    int VAR_6 = VAR_2 & 0xFFFF;
    int VAR_7 = VAR_0[( VAR_3 & 255) + 256 * ( VAR_4 & 255)];
    int VAR_8 = VAR_0[((VAR_3 + 1) & 255) + 256 * ( VAR_4 & 255)];
    int VAR_9 = VAR_0[( VAR_3 & 255) + 256 * ((VAR_4 + 1) & 255)];
    int VAR_10 = VAR_0[((VAR_3 + 1) & 255) + 256 * ((VAR_4 + 1) & 255)];
    int VAR_11 = (((1 << 16) - VAR_5) * VAR_7 + VAR_5 * VAR_8) >> 8;
    int VAR_12 = (((1 << 16) - VAR_5) * VAR_9 + VAR_5 * VAR_10) >> 8;

    return (((1 << 16) - VAR_6) * VAR_11 + VAR_6 * VAR_12) >> 24;
}
