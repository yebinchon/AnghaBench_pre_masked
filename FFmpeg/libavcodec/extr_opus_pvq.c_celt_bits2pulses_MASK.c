
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline int FUNC_0(const uint8_t *VAR_0, int VAR_1)
{

    int VAR_2, VAR_3 = 0, VAR_4;

    VAR_4 = VAR_0[0];
    VAR_1--;

    for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {
        int VAR_5 = (VAR_3 + VAR_4 + 1) >> 1;
        if (VAR_0[VAR_5] >= VAR_1)
            VAR_4 = VAR_5;
        else
            VAR_3 = VAR_5;
    }

    return (VAR_1 - (VAR_3 == 0 ? -1 : VAR_0[VAR_3]) <= VAR_0[VAR_4] - VAR_1) ? VAR_3 : VAR_4;
}
