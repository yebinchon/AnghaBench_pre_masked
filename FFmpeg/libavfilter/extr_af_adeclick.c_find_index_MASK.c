
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3, VAR_4, VAR_5;

    if ((VAR_1 < VAR_0[0]) || (VAR_1 > VAR_0[VAR_2 - 1]))
        return 1;

    VAR_3 = VAR_4 = 0;
    VAR_5 = VAR_2 - 1;

    while (VAR_4 <= VAR_5) {
        VAR_3 = (VAR_5 + VAR_4) / 2;
        if (VAR_0[VAR_3] == VAR_1)
            return 0;
        if (VAR_1 < VAR_0[VAR_3])
            VAR_5 = VAR_3 - 1;
        if (VAR_1 > VAR_0[VAR_3])
            VAR_4 = VAR_3 + 1;
    }

    return 1;
}
