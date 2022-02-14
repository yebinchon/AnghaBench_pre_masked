
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_3(uint8_t *VAR_1, int VAR_2,
                              const uint8_t *VAR_3, int VAR_4)
{
    uint8_t VAR_5 = *VAR_3++;
    uint8_t VAR_6 = VAR_5 + 0x16;
    const uint8_t * VAR_7 = VAR_3 + VAR_5*2;
    int VAR_8 = VAR_4 - 1 - VAR_5*2;
    uint8_t VAR_9 = VAR_6;
    uint8_t *VAR_10 = VAR_1 + VAR_2;
    uint8_t *VAR_11 = VAR_1;
    int VAR_12;
    GetBitContext VAR_13;

    if ((VAR_12 = FUNC_2(&VAR_13, VAR_7, VAR_8)) < 0)
        return VAR_12;

    while (VAR_9 != 0x16) {
        unsigned VAR_14;
        if (FUNC_1(&VAR_13) < 1)
            return VAR_0;
        VAR_14 = VAR_9 - 0x17 + FUNC_0(&VAR_13) * VAR_5;
        if (VAR_14 >= 2 * VAR_5)
            return VAR_0;
        VAR_9 = VAR_3[VAR_14];

        if (VAR_9 < 0x16) {
            if (VAR_1 >= VAR_10)
                return VAR_2;
            *VAR_1++ = VAR_9;
            VAR_9 = VAR_6;
        }
    }

    return VAR_1 - VAR_11;
}
