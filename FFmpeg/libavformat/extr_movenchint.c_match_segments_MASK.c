
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



__attribute__((used)) static int FUNC_0(const uint8_t *VAR_0, int VAR_1,
                          const uint8_t *VAR_2, int VAR_3, int VAR_4,
                          int *VAR_5, int *VAR_6,
                          int *VAR_7)
{
    int VAR_8;
    for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
        int VAR_9 = 0;
        int VAR_10, VAR_11;


        while (VAR_8 + VAR_9 < VAR_1 && VAR_3 + VAR_9 < VAR_4 &&
               VAR_2[VAR_3 + VAR_9] == VAR_0[VAR_8 + VAR_9])
            VAR_9++;
        if (VAR_9 <= 8)
            continue;



        VAR_10 = VAR_8;
        VAR_11 = VAR_3;
        while (VAR_11 > 0 && VAR_10 > 0 &&
               VAR_2[VAR_11 - 1] == VAR_0[VAR_10 - 1]) {
            VAR_11--;
            VAR_10--;
            VAR_9++;
        }
        if (VAR_9 <= 14)
            continue;
        *VAR_5 = VAR_10;
        *VAR_6 = VAR_11;
        *VAR_7 = VAR_9;
        return 0;
    }
    return -1;
}
