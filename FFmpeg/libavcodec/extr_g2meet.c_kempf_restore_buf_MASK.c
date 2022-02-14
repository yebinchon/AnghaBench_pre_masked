
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int GetBitContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(const uint8_t *VAR_0, int VAR_1,
                              uint8_t *VAR_2, int VAR_3,
                              const uint8_t *VAR_4, int VAR_5,
                              int VAR_6, int VAR_7,
                              const uint8_t *VAR_8, int VAR_9, int VAR_10)
{
    GetBitContext VAR_11;
    int VAR_12, VAR_13, VAR_14, VAR_15;
    int VAR_16;
    int VAR_17 = FUNC_0(VAR_6, 16);

    if ((VAR_16 = FUNC_2(&VAR_11, VAR_0, VAR_1)) < 0)
        return VAR_16;

    if (VAR_9 <= 2) VAR_14 = 1;
    else if (VAR_9 <= 4) VAR_14 = 2;
    else if (VAR_9 <= 16) VAR_14 = 4;
    else VAR_14 = 8;

    for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++, VAR_2 += VAR_3, VAR_4 += VAR_5) {
        if (FUNC_1(&VAR_11, 8))
            continue;
        for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
            VAR_15 = FUNC_1(&VAR_11, VAR_14);
            if (VAR_15 != VAR_10)
                FUNC_3(VAR_2 + VAR_12 * 3, VAR_8 + VAR_15 * 3, 3);
            else
                FUNC_3(VAR_2 + VAR_12 * 3, VAR_4 + VAR_12 * 3, 3);
        }
        FUNC_4(&VAR_11, VAR_14 * (VAR_17 - VAR_6));
    }

    return 0;
}
