
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;



__attribute__((used)) static void FUNC_0(int32_t **VAR_0, int16_t **VAR_1,
                                                 int VAR_2)
{
    int VAR_3;
    int64_t VAR_4;
    int16_t VAR_5 = VAR_1[0][0];
    int16_t VAR_6 = VAR_1[0][1];
    int16_t VAR_7 = VAR_1[0][3];

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        VAR_4 = (int64_t)VAR_0[0][VAR_3] * VAR_5 +
             (int64_t)VAR_0[1][VAR_3] * VAR_6 +
             (int64_t)VAR_0[2][VAR_3] * VAR_5 +
             (int64_t)VAR_0[3][VAR_3] * VAR_7 +
             (int64_t)VAR_0[4][VAR_3] * VAR_7;

        VAR_0[0][VAR_3] = (VAR_4+2048)>>12;
    }
}
