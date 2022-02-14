
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int const int16_t ;


 int const FUNC_0 (int const) ;
 size_t FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int * VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_3(int *VAR_3, int16_t *VAR_4, int VAR_5,
                        int VAR_6,
                        const uint8_t *VAR_7, const int16_t *VAR_8)
{
    int VAR_9, VAR_10;
    int VAR_11, VAR_12, VAR_13, VAR_14;
    int VAR_15, VAR_16;
    int VAR_17 = 0;

    VAR_15 = VAR_5 << 6;
    VAR_13 = VAR_2[4];
    VAR_14 = VAR_1[2];
    VAR_11 = 0;

    for (VAR_10 = 1; VAR_10 < 64; VAR_10++) {
        for (VAR_9 = VAR_7[VAR_10]; VAR_9 < VAR_15; VAR_9 += 64) {
            VAR_12 = VAR_4[VAR_9] / VAR_8[VAR_7[VAR_10]];
            *VAR_3 += FUNC_0(VAR_4[VAR_9]) % VAR_8[VAR_7[VAR_10]];
            if (VAR_12) {
                VAR_16 = FUNC_0(VAR_12);
                VAR_17 += FUNC_2(VAR_0[VAR_13], VAR_11);
                VAR_17 += FUNC_2(VAR_0[VAR_14],
                                     VAR_16 - 1) + 1;

                VAR_13 = VAR_2[FUNC_1(VAR_11, 15)];
                VAR_14 = VAR_1[FUNC_1(VAR_16, 9)];
                VAR_11 = 0;
            } else {
                VAR_11++;
            }
        }
    }

    return VAR_17;
}
