
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;



__attribute__((used)) static void FUNC_0(int32_t **VAR_0, int16_t **VAR_1,
                                int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;
    int64_t VAR_7, VAR_8;
    if (VAR_2 == 2) {
        for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
            VAR_7 = VAR_8 = 0;
            for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
                VAR_7 += (int64_t)VAR_0[VAR_6][VAR_5] * VAR_1[0][VAR_6];
                VAR_8 += (int64_t)VAR_0[VAR_6][VAR_5] * VAR_1[1][VAR_6];
            }
            VAR_0[0][VAR_5] = (VAR_7+2048)>>12;
            VAR_0[1][VAR_5] = (VAR_8+2048)>>12;
        }
    } else if (VAR_2 == 1) {
        for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
            VAR_7 = 0;
            for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
                VAR_7 += (int64_t)VAR_0[VAR_6][VAR_5] * VAR_1[0][VAR_6];
            VAR_0[0][VAR_5] = (VAR_7+2048)>>12;
        }
    }
}
