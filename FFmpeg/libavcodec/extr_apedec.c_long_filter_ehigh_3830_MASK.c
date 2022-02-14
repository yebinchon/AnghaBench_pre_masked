
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(int32_t *VAR_0, int VAR_1)
{
    int VAR_2, VAR_3;
    int32_t VAR_4, VAR_5;
    int32_t VAR_6[8] = { 0 };
    uint32_t VAR_7[8] = { 0 };

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        VAR_4 = 0;
        VAR_5 = FUNC_0(VAR_0[VAR_2]);
        for (VAR_3 = 7; VAR_3 >= 0; VAR_3--) {
            VAR_4 += VAR_6[VAR_3] * VAR_7[VAR_3];
            VAR_7[VAR_3] += ((VAR_6[VAR_3] >> 31) | 1) * VAR_5;
        }
        for (VAR_3 = 7; VAR_3 > 0; VAR_3--)
            VAR_6[VAR_3] = VAR_6[VAR_3 - 1];
        VAR_6[0] = VAR_0[VAR_2];
        VAR_0[VAR_2] -= VAR_4 >> 9;
    }
}
