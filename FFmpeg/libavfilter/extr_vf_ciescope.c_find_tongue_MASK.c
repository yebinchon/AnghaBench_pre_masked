
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;



__attribute__((used)) static void
FUNC_0(uint16_t* const VAR_0,
            int const VAR_1,
            int const VAR_2,
            int const VAR_3,
            int * const VAR_4,
            int * const VAR_5,
            int * const VAR_6)
{
    int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_1 && VAR_0[VAR_3 * VAR_2 + VAR_7 * 4 + 0] == 0; VAR_7++)
        ;

    if (VAR_7 >= VAR_1) {
        *VAR_4 = 0;
    } else {
        int VAR_8;
        int const VAR_9 = VAR_7;

        *VAR_4 = 1;

        for (VAR_8 = VAR_1 - 1; VAR_8 >= VAR_9 && VAR_0[VAR_3 * VAR_2 + VAR_8 * 4 + 0] == 0; VAR_8--)
            ;

        *VAR_6 = VAR_8;
        *VAR_5 = VAR_9;
    }
}
