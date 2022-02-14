
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;



__attribute__((used)) static void FUNC_0(int32_t *VAR_0, int32_t *VAR_1, int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        int32_t VAR_4 = VAR_0[VAR_3];
        int32_t VAR_5 = VAR_1[VAR_3];
        VAR_1[VAR_3] = VAR_4 + VAR_5;
    }
}
