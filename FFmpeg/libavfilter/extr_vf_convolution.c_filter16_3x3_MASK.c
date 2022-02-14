
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int const FUNC_0 (int const*) ;
 int FUNC_1 (int,int ,int) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, int VAR_1,
                         float VAR_2, float VAR_3, const int *const VAR_4,
                         const uint8_t *VAR_5[], int VAR_6, int VAR_7,
                         int VAR_8, int VAR_9)
{
    uint16_t *VAR_10 = (uint16_t *)VAR_0;
    int VAR_11;

    for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
        int VAR_12 = FUNC_0(&VAR_5[0][2 * VAR_11]) * VAR_4[0] +
                  FUNC_0(&VAR_5[1][2 * VAR_11]) * VAR_4[1] +
                  FUNC_0(&VAR_5[2][2 * VAR_11]) * VAR_4[2] +
                  FUNC_0(&VAR_5[3][2 * VAR_11]) * VAR_4[3] +
                  FUNC_0(&VAR_5[4][2 * VAR_11]) * VAR_4[4] +
                  FUNC_0(&VAR_5[5][2 * VAR_11]) * VAR_4[5] +
                  FUNC_0(&VAR_5[6][2 * VAR_11]) * VAR_4[6] +
                  FUNC_0(&VAR_5[7][2 * VAR_11]) * VAR_4[7] +
                  FUNC_0(&VAR_5[8][2 * VAR_11]) * VAR_4[8];
        VAR_12 = (int)(VAR_12 * VAR_2 + VAR_3 + 0.5f);
        VAR_10[VAR_11] = FUNC_1(VAR_12, 0, VAR_6);
    }
}
