
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int*,int,int) ;

__attribute__((used)) static int FUNC_7(uint8_t *VAR_2, int VAR_3, int VAR_4, int VAR_5, uint8_t VAR_6[256],
                      const uint8_t *VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
    GetBitContext VAR_11;
    int VAR_12;
    int VAR_13, VAR_14, VAR_15, VAR_16;
    uint8_t *VAR_17;

    if (VAR_8 >= VAR_9)
        return -1;

    if (VAR_4 <= 0 || VAR_5 <= 0)
        return -1;

    VAR_12 = (VAR_9 - VAR_8) * 8;
    FUNC_5(&VAR_11, VAR_7 + VAR_8, VAR_12);

    VAR_13 = 0;
    VAR_14 = 0;
    VAR_17 = VAR_2;
    for(;;) {
        if (FUNC_4(&VAR_11) > VAR_12)
            return -1;
        if (VAR_10)
            VAR_15 = FUNC_3(&VAR_11, &VAR_16);
        else
            VAR_15 = FUNC_2(&VAR_11, &VAR_16);
        if (VAR_15 != VAR_1 && VAR_15 > VAR_4 - VAR_13)
            return VAR_0;
        VAR_15 = FUNC_0(VAR_15, VAR_4 - VAR_13);
        FUNC_6(VAR_17 + VAR_13, VAR_16, VAR_15);
        VAR_6[VAR_16] = 1;
        VAR_13 += VAR_15;
        if (VAR_13 >= VAR_4) {
            VAR_14++;
            if (VAR_14 >= VAR_5)
                break;
            VAR_17 += VAR_3;
            VAR_13 = 0;

            FUNC_1(&VAR_11);
        }
    }
    return 0;
}
