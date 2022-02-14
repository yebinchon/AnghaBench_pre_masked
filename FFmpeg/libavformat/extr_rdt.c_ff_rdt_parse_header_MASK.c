
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int GetBitContext ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int *,int) ;

int
FUNC_7(const uint8_t *VAR_0, int VAR_1,
                    int *VAR_2, int *VAR_3, int *VAR_4,
                    int *VAR_5, uint32_t *VAR_6)
{
    GetBitContext VAR_7;
    int VAR_8 = 0, VAR_9, VAR_10, VAR_11, VAR_12,
        VAR_13, VAR_14;
    uint32_t VAR_15;


    while (VAR_1 >= 5 && VAR_0[1] == 0xFF ) {
        int VAR_16;

        if (!(VAR_0[0] & 0x80))
            return -1;

        VAR_16 = FUNC_0(VAR_0+3);
        VAR_0 += VAR_16;
        VAR_1 -= VAR_16;
        VAR_8 += VAR_16;
    }
    if (VAR_1 < 16)
        return -1;
    FUNC_5(&VAR_7, VAR_0, VAR_1 << 3);
    VAR_13 = FUNC_2(&VAR_7);
    VAR_14 = FUNC_2(&VAR_7);
    VAR_9 = FUNC_1(&VAR_7, 5);
    FUNC_6(&VAR_7, 1);
    VAR_10 = FUNC_1(&VAR_7, 16);
    if (VAR_13)
        FUNC_6(&VAR_7, 16);
    FUNC_6(&VAR_7, 2);
    VAR_11 = FUNC_1(&VAR_7, 5);
    VAR_12 = !FUNC_2(&VAR_7);
    VAR_15 = FUNC_4(&VAR_7, 32);
    if (VAR_9 == 0x1f)
        VAR_9 = FUNC_1(&VAR_7, 16);
    if (VAR_14)
        FUNC_6(&VAR_7, 16);
    if (VAR_11 == 0x1f)
        VAR_11 = FUNC_1(&VAR_7, 16);

    if (VAR_2) *VAR_2 = VAR_9;
    if (VAR_3) *VAR_3 = VAR_10;
    if (VAR_4) *VAR_4 = VAR_11;
    if (VAR_5) *VAR_5 = VAR_12;
    if (VAR_6) *VAR_6 = VAR_15;

    return VAR_8 + (FUNC_3(&VAR_7) >> 3);
}
