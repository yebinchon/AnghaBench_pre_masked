
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(int VAR_0, const uint8_t *VAR_1[], const uint8_t *VAR_2, int VAR_3,
                      int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9;

    for (VAR_9 = 0; VAR_9 < 49; VAR_9++) {
        int VAR_10 = FUNC_0(VAR_4 + ((VAR_9 % 7) - 3));
        int VAR_11 = FUNC_0(VAR_6 + (VAR_9 / 7) - 3);

        VAR_10 = VAR_10 >= VAR_5 ? 2 * VAR_5 - 1 - VAR_10 : VAR_10;
        VAR_11 = VAR_11 >= VAR_7 ? 2 * VAR_7 - 1 - VAR_11 : VAR_11;

        VAR_1[VAR_9] = VAR_2 + VAR_10 * VAR_8 + VAR_11 * VAR_3;
    }
}
