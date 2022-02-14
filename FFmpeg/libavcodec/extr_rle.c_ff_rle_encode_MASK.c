
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int const*,int,int,int) ;
 int FUNC_1 (int *,int const*,int) ;

int FUNC_2(uint8_t *VAR_0, int VAR_1, const uint8_t *VAR_2, int VAR_3,
                  int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9, VAR_10;
    uint8_t *VAR_11 = VAR_0;

    for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10 += VAR_9) {

        if ((VAR_9 = FUNC_0(VAR_2, VAR_4 - VAR_10, VAR_3, 1)) > 1) {
            if (VAR_11 + VAR_3 + 1 > VAR_0 + VAR_1)
                return -1;

            *VAR_11++ = (VAR_9 ^ VAR_6) + VAR_5;
            FUNC_1(VAR_11, VAR_2, VAR_3);
            VAR_11 += VAR_3;
        } else {

            VAR_9 = FUNC_0(VAR_2, VAR_4 - VAR_10, VAR_3, 0);
            if (VAR_11 + VAR_3 * VAR_9 >= VAR_0 + VAR_1)
                return -1;

            *VAR_11++ = (VAR_9 ^ VAR_8) + VAR_7;
            FUNC_1(VAR_11, VAR_2, VAR_3 * VAR_9);
            VAR_11 += VAR_3 * VAR_9;
        }

        VAR_2 += VAR_9 * VAR_3;
    }

    return VAR_11 - VAR_0;
}
