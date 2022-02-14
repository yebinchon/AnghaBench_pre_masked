
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(int32_t *VAR_0, int32_t *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;
    int32_t VAR_5, VAR_6;
    uint64_t VAR_7[4];
    uint64_t VAR_8[4];


    VAR_7[0] = VAR_7[1] = VAR_7[2] = VAR_7[3] = 0;
    for (VAR_3 = 2; VAR_3 < VAR_2; VAR_3++) {
        VAR_5 = VAR_0[VAR_3] - 2 * VAR_0[VAR_3 - 1] + VAR_0[VAR_3 - 2];
        VAR_6 = VAR_1[VAR_3] - 2 * VAR_1[VAR_3 - 1] + VAR_1[VAR_3 - 2];
        VAR_7[2] += FUNC_0((VAR_5 + VAR_6) >> 1);
        VAR_7[3] += FUNC_0(VAR_5 - VAR_6);
        VAR_7[0] += FUNC_0(VAR_5);
        VAR_7[1] += FUNC_0(VAR_6);
    }


    VAR_8[0] = VAR_7[0] + VAR_7[1];
    VAR_8[1] = VAR_7[0] + VAR_7[3];
    VAR_8[2] = VAR_7[1] + VAR_7[3];
    VAR_8[3] = VAR_7[2] + VAR_7[3];


    VAR_4 = 0;
    for (VAR_3 = 1; VAR_3 < 4; VAR_3++) {
        if (VAR_8[VAR_3] < VAR_8[VAR_4])
            VAR_4 = VAR_3;
    }
    return VAR_4;
}
