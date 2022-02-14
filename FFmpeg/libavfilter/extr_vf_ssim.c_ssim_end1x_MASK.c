
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;



__attribute__((used)) static float FUNC_0(int64_t VAR_0, int64_t VAR_1, int64_t VAR_2, int64_t VAR_3, int VAR_4)
{
    int64_t VAR_5 = (int64_t)(.01*.01*VAR_4*VAR_4*64 + .5);
    int64_t VAR_6 = (int64_t)(.03*.03*VAR_4*VAR_4*64*63 + .5);

    int64_t VAR_7 = VAR_0;
    int64_t VAR_8 = VAR_1;
    int64_t VAR_9 = VAR_2;
    int64_t VAR_10 = VAR_3;
    int64_t VAR_11 = VAR_9 * 64 - VAR_7 * VAR_7 - VAR_8 * VAR_8;
    int64_t VAR_12 = VAR_10 * 64 - VAR_7 * VAR_8;

    return (float)(2 * VAR_7 * VAR_8 + VAR_5) * (float)(2 * VAR_12 + VAR_6)
         / ((float)(VAR_7 * VAR_7 + VAR_8 * VAR_8 + VAR_5) * (float)(VAR_11 + VAR_6));
}
