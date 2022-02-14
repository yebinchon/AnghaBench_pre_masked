
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const y ;
typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(const uint8_t *VAR_0,
                                     uint8_t *VAR_1,
                               const int VAR_2,
                               const int VAR_3,
                               const int VAR_4,
                               const int VAR_5)
{

    const int VAR_6 = VAR_2 + 2 * VAR_4;
    const int VAR_7 = -((VAR_5 - 1) /2);
    const int VAR_8 = (VAR_5 + 1) /2;
    uint8_t VAR_9, VAR_10,
            VAR_11, VAR_12,
            VAR_13, VAR_14,
            VAR_15,
            VAR_16;
    for (int VAR_17 = 0; VAR_17 < VAR_3; VAR_17++)
    {
        for (int VAR_18 = 0; VAR_18 < VAR_2; VAR_18++)
        {
            for (int VAR_19 = VAR_7; VAR_19 < VAR_8; VAR_19++)
            {
                for (int VAR_20 = VAR_7; VAR_20 < VAR_8; VAR_20++)
                {
                    if (VAR_19 == 0 && VAR_20 == 0)
                    {

                        goto end;
                    }
                    VAR_16 = *(VAR_0 + VAR_6*(VAR_17+VAR_20) + (VAR_18+VAR_19));
                    if (VAR_19 == VAR_7 && VAR_20 == VAR_7)
                    {

                        VAR_9 = VAR_16;
                        VAR_10 = VAR_9;
                        goto end;
                    }
                    if (VAR_16 < VAR_9)
                    {
                        VAR_9 = VAR_16;
                    }
                    if (VAR_16 > VAR_10)
                    {
                        VAR_10 = VAR_16;
                    }
                }
                end:
                    continue;
            }






            VAR_15 = (VAR_9 + VAR_10) / 2;


            VAR_11 = (VAR_9 + VAR_15) / 2;
            VAR_12 = (VAR_10 + VAR_15) / 2;
            VAR_13 = (VAR_11 + VAR_15) / 2;
            VAR_14 = (VAR_12 + VAR_15) / 2;


            VAR_16 = *(VAR_0 + VAR_6*(VAR_17) + (VAR_18));
            if (VAR_16 < VAR_9)
            {
                *(VAR_1 + VAR_6*VAR_17 + VAR_18) = VAR_9;
            }
            else if (VAR_16 > VAR_10)
            {
                *(VAR_1 + VAR_6*VAR_17 + VAR_18) = VAR_10;
            }
            else if (VAR_16 < VAR_11)
            {
                *(VAR_1 + VAR_6*VAR_17 + VAR_18) = VAR_11;
            }
            else if (VAR_16 > VAR_12)
            {
                *(VAR_1 + VAR_6*VAR_17 + VAR_18) = VAR_12;
            }
            else if (VAR_16 < VAR_13)
            {
                *(VAR_1 + VAR_6*VAR_17 + VAR_18) = VAR_13;
            }
            else if (VAR_16 > VAR_14)
            {
                *(VAR_1 + VAR_6*VAR_17 + VAR_18) = VAR_14;
            }
        }
    }
}
