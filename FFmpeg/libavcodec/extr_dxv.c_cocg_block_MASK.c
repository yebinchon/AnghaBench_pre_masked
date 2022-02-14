
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int*,int const*) ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static int FUNC_2(uint8_t *VAR_0, ptrdiff_t VAR_1,
                      uint8_t *VAR_2, ptrdiff_t VAR_3,
                      const uint8_t *VAR_4)
{
    uint8_t VAR_5[16];
    uint8_t VAR_6[16];
    uint8_t VAR_7 = *(VAR_4);
    uint8_t VAR_8 = *(VAR_4 + 1);
    uint8_t VAR_9 = *(VAR_4 + 8);
    uint8_t VAR_10 = *(VAR_4 + 9);
    int VAR_11, VAR_12;

    FUNC_0(VAR_5, VAR_4 + 2);
    FUNC_0(VAR_6, VAR_4 + 10);

    for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
        for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
            int VAR_13 = VAR_5[VAR_11 + VAR_12 * 4];
            int VAR_14 = VAR_6[VAR_11 + VAR_12 * 4];

            VAR_0[VAR_11] = FUNC_1(VAR_9, VAR_10, VAR_14);
            VAR_2[VAR_11] = FUNC_1(VAR_7, VAR_8, VAR_13);
        }
        VAR_0 += VAR_1;
        VAR_2 += VAR_3;
    }

    return 16;
}
