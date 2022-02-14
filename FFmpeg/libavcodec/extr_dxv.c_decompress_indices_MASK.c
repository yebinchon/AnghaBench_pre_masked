
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, const uint8_t *VAR_1)
{
    int VAR_2, VAR_3;

    for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
        int VAR_4 = FUNC_0(VAR_1);


        for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
            VAR_0[VAR_3] = (VAR_4 >> (VAR_3 * 3)) & 0x7;

        VAR_1 += 3;
        VAR_0 += 8;
    }
}
