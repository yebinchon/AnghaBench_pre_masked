
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (float) ;
 float FUNC_1 (float) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, int VAR_1,
                           float VAR_2, float VAR_3, const int *const VAR_4,
                           const uint8_t *VAR_5[], int VAR_6, int VAR_7,
                           int VAR_8, int VAR_9)
{
    int VAR_10;

    for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
        float VAR_11 = VAR_5[0][VAR_10] * 1 + VAR_5[1][VAR_10] * -1;
        float VAR_12 = VAR_5[4][VAR_10] * 1 + VAR_5[3][VAR_10] * -1;

        VAR_0[VAR_10] = FUNC_0(FUNC_1(VAR_11*VAR_11 + VAR_12*VAR_12) * VAR_2 + VAR_3);
    }
}
