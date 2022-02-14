
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef unsigned int uint32_t ;



__attribute__((used)) static void FUNC_0(const uint8_t *VAR_0, uint32_t *VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < 120; VAR_2 += 2) {
        unsigned VAR_3 = ((unsigned)VAR_0[VAR_2 + 0] << 25) + ((unsigned)VAR_0[VAR_2 + 1] << 18);

        VAR_1[VAR_2 / 2] = VAR_3;
    }
}
