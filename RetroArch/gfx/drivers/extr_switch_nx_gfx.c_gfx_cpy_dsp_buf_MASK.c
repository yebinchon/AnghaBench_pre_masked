
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;



void FUNC_0(uint32_t *VAR_0, uint32_t *VAR_1, int VAR_2, int VAR_3, uint32_t VAR_4, bool VAR_5)
{
    uint32_t *VAR_6 = VAR_0;
    uint32_t *VAR_7 = VAR_1;
    for (uint32_t VAR_8 = 0; VAR_8 < VAR_3; VAR_8 ++)
    {
        for (uint32_t VAR_9 = 0; VAR_9 < VAR_2; VAR_9 ++)
        {
            uint32_t VAR_10 = VAR_8 * VAR_4 / sizeof(uint32_t) + VAR_9;
            uint32_t VAR_11 = *VAR_7;

            if (VAR_5)
            {
                uint32_t VAR_12 = VAR_6[VAR_10];
                uint8_t VAR_13 = ((VAR_11 & 0xFF000000) >> 24);

                if (VAR_13 > 0)
                    VAR_11 &= 0x00FFFFFF;
                else
                    VAR_11 = VAR_12;
            }

            VAR_6[VAR_10] = VAR_11;

            VAR_7++;
        }
    }
}
