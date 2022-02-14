
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static float FUNC_0(int VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    static const int VAR_4 = (int)(.01*.01*255*255*64 + .5);
    static const int VAR_5 = (int)(.03*.03*255*255*64*63 + .5);

    int VAR_6 = VAR_0;
    int VAR_7 = VAR_1;
    int VAR_8 = VAR_2;
    int VAR_9 = VAR_3;
    int VAR_10 = VAR_8 * 64 - VAR_6 * VAR_6 - VAR_7 * VAR_7;
    int VAR_11 = VAR_9 * 64 - VAR_6 * VAR_7;

    return (float)(2 * VAR_6 * VAR_7 + VAR_4) * (float)(2 * VAR_11 + VAR_5)
         / ((float)(VAR_6 * VAR_6 + VAR_7 * VAR_7 + VAR_4) * (float)(VAR_10 + VAR_5));
}
