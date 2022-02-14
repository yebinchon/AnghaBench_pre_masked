
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static int FUNC_0(const uint8_t *VAR_0, const uint8_t *VAR_1)
{
    int VAR_2 = 0;

    if (VAR_0 + 3 >= VAR_1)
        return VAR_1 - VAR_0;

    while (VAR_0 + VAR_2 + 3 < VAR_1) {
        if (VAR_0[VAR_2] == 0 && VAR_0[VAR_2 + 1] == 0 && VAR_0[VAR_2 + 2] == 1)
            break;
        VAR_2++;
    }
    return VAR_2 + 3;
}
