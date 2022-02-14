
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ssize_t ;



__attribute__((used)) static int FUNC_0(const uint8_t *VAR_0,
                               size_t VAR_1,
                               uint8_t *VAR_2,
                               ssize_t VAR_3,
                               size_t VAR_4)
{
    int VAR_5 = 0;
    int VAR_6;
    uint8_t* VAR_7;
    uint8_t* VAR_8 = VAR_2 + VAR_4;
    const uint8_t* VAR_9 = VAR_0 + VAR_1;
    int VAR_10 = VAR_3 > 2 ? VAR_3 - 2 : 0;
    int VAR_11;
    for (VAR_11 = VAR_10; VAR_11 < VAR_3 && VAR_11 < VAR_4; VAR_11++) {
        if (!VAR_2[VAR_11])
            VAR_5++;
        else
            VAR_5 = 0;
    }

    VAR_2 += VAR_3;
    VAR_7 = VAR_2;
    for (; VAR_0 < VAR_9; VAR_0++, VAR_2++) {
        if (VAR_5 == 2) {
            int VAR_12 = *VAR_0 <= 3;
            if (VAR_12) {
                if (VAR_2 < VAR_8)
                    *VAR_2 = 3;
                VAR_2++;
            }

            VAR_5 = 0;
        }

        if (VAR_2 < VAR_8)
            *VAR_2 = *VAR_0;

        if (!*VAR_0)
            VAR_5++;
        else
            VAR_5 = 0;
    }

    VAR_6 = VAR_2 - VAR_7;

    if (VAR_2 > VAR_8)
        return -VAR_6;

    return VAR_6;
}
