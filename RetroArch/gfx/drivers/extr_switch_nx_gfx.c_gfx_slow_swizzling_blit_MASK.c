
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int const) ;
 int FUNC_1 (unsigned int) ;

void FUNC_2(uint32_t *VAR_0, uint32_t *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, bool VAR_6)
{
    uint32_t *VAR_7 = VAR_0;
    uint32_t *VAR_8 = VAR_1;
    int VAR_9 = VAR_4;
    int VAR_10 = VAR_5;
    int VAR_11 = VAR_9 + VAR_2;
    int VAR_12 = VAR_10 + VAR_3;
    const uint32_t VAR_13 = 128;
    const uint32_t VAR_14 = 128 * 10;


    uint32_t VAR_15 = FUNC_0(VAR_9);
    uint32_t VAR_16 = FUNC_1(VAR_10);
    uint32_t VAR_17 = FUNC_0(~0u);
    uint32_t VAR_18 = FUNC_1(~0u);
    uint32_t VAR_19 = FUNC_0(VAR_14);


    VAR_15 += VAR_19 * (VAR_10 / VAR_13);

    uint32_t VAR_20, VAR_21;
    for (VAR_21 = VAR_10; VAR_21 < VAR_12; VAR_21++)
    {
        uint32_t *VAR_22 = VAR_7 + VAR_16;
        uint32_t VAR_23 = VAR_15;

        for (VAR_20 = VAR_9; VAR_20 < VAR_11; VAR_20++)
        {
            uint32_t VAR_24 = *VAR_8++;
            if (VAR_6)
            {
                uint32_t VAR_25 = VAR_22[VAR_23];
                uint8_t VAR_26 = ((VAR_24 & 0xFF000000) >> 24);

                if (VAR_26 > 0)
                    VAR_24 &= 0x00FFFFFF;
                else
                    VAR_24 = VAR_25;
            }

            VAR_22[VAR_23] = VAR_24;

            VAR_23 = (VAR_23 - VAR_17) & VAR_17;
        }

        VAR_16 = (VAR_16 - VAR_18) & VAR_18;
        if (!VAR_16)
            VAR_15 += VAR_19;
    }
}
