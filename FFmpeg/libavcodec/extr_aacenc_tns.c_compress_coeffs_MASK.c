
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(int *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3;
    const int VAR_4 = VAR_2 ? 4 : 2;
    const int VAR_5 = VAR_2 ? 8 : 4;
    const int VAR_6 = VAR_2 ? 11 : 5;

    return 0;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
        if (VAR_0[VAR_3] >= VAR_4 && VAR_0[VAR_3] <= VAR_6)
            return 0;
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
        VAR_0[VAR_3] -= (VAR_0[VAR_3] > VAR_6) ? VAR_5 : 0;
    return 1;
}
