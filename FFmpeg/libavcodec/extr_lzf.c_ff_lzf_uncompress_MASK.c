
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;
typedef int GetByteContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (int**,int) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(GetByteContext *VAR_3, uint8_t **VAR_4, int64_t *VAR_5)
{
    int VAR_6 = 0;
    uint8_t *VAR_7 = *VAR_4;
    int64_t VAR_8 = 0;

    while (FUNC_4(VAR_3) > 2) {
        uint8_t VAR_9 = FUNC_3(VAR_3);

        if (VAR_9 < VAR_1) {
            VAR_9++;
            if (VAR_9 > *VAR_5 - VAR_8) {
                *VAR_5 += *VAR_5 /2;
                VAR_6 = FUNC_1(VAR_4, *VAR_5);
                if (VAR_6 < 0)
                    return VAR_6;
                VAR_7 = *VAR_4 + VAR_8;
            }

            FUNC_2(VAR_3, VAR_7, VAR_9);
            VAR_7 += VAR_9;
            VAR_8 += VAR_9;
        } else {
            int VAR_10 = 2 + (VAR_9 >> 5);
            int VAR_11 = ((VAR_9 & 0x1f) << 8) + 1;

            if (VAR_10 == VAR_2)
                VAR_10 += FUNC_3(VAR_3);

            VAR_11 += FUNC_3(VAR_3);

            if (VAR_11 > VAR_8)
                return VAR_0;

            if (VAR_10 > *VAR_5 - VAR_8) {
                *VAR_5 += *VAR_5 / 2;
                VAR_6 = FUNC_1(VAR_4, *VAR_5);
                if (VAR_6 < 0)
                    return VAR_6;
                VAR_7 = *VAR_4 + VAR_8;
            }

            FUNC_0(VAR_7, VAR_11, VAR_10);

            VAR_7 += VAR_10;
            VAR_8 += VAR_10;
        }
    }

    *VAR_5 = VAR_8;

    return 0;
}
