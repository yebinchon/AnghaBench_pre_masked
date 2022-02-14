
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;
typedef int dst ;


 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static void FUNC_1(int16_t VAR_0[64], const int16_t VAR_1[64],
                         int VAR_2, const uint8_t *VAR_3)
{
    int VAR_4;
    int VAR_5 = 0;

    unsigned VAR_6 = VAR_2 * ((1<<4) - VAR_5) - 1;
    unsigned VAR_7 = VAR_6 << 1;

    FUNC_0(VAR_0, 0, 64 * sizeof(VAR_0[0]));
    VAR_0[0] = (VAR_1[0] + 4) >> 3;

    for (VAR_4 = 1; VAR_4 < 64; VAR_4++) {
        int VAR_8 = VAR_1[VAR_4];
        if (((unsigned)(VAR_8 + VAR_6)) > VAR_7) {
            const int VAR_9 = VAR_3[VAR_4];
            VAR_0[VAR_9] = (VAR_8 + 4) >> 3;
        }
    }
}
