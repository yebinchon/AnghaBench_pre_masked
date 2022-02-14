
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *,int) ;

void FUNC_2(uint8_t *VAR_0[4], int VAR_1[4],
                       uint8_t *VAR_2[4], int VAR_3[4],
                       int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
    int VAR_10, VAR_11;
    uint8_t *VAR_12;

    for (VAR_11 = 0; VAR_11 < 4 && VAR_0[VAR_11]; VAR_11++) {
        int VAR_13 = VAR_11 == 1 || VAR_11 == 2 ? VAR_4 : 0;
        int VAR_14 = VAR_11 == 1 || VAR_11 == 2 ? VAR_5 : 0;
        int VAR_15 = FUNC_0(VAR_8, VAR_13);
        int VAR_16 = FUNC_0(VAR_9, VAR_14);

        VAR_12 = VAR_0[VAR_11] + (VAR_7 >> VAR_14) * VAR_1[VAR_11];
        for (VAR_10 = 0; VAR_10 < VAR_16; VAR_10++) {
            FUNC_1(VAR_12 + (VAR_6 >> VAR_13) * VAR_3[VAR_11],
                   VAR_2[VAR_11], VAR_15 * VAR_3[VAR_11]);
            VAR_12 += VAR_1[VAR_11];
        }
    }
}
