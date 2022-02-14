
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int *,int const) ;

__attribute__((used)) static void FUNC_1(const uint8_t *VAR_0,
                                        uint8_t *VAR_1,
                                  const int VAR_2,
                                  const int VAR_3,
                                  const int VAR_4,
                                  const int VAR_5)
{

    const int VAR_6 = VAR_2 + 2 * VAR_4;
    const int VAR_7 = -((VAR_5 - 1) /2);
    const int VAR_8 = (VAR_5 + 1) /2;
    int VAR_9;
    uint8_t VAR_10[VAR_5 * VAR_5];
    for (int VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
    {
        for (int VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
        {
            VAR_9 = 0;
            for (int VAR_13 = VAR_7; VAR_13 < VAR_8; VAR_13++)
            {
                for (int VAR_14 = VAR_7; VAR_14 < VAR_8; VAR_14++)
                {
                    VAR_10[VAR_9] = *(VAR_0 + VAR_6*(VAR_11+VAR_14) + (VAR_12+VAR_13));
                    VAR_9++;
                }
            }
            *(VAR_1 + VAR_6*VAR_11 + VAR_12) = FUNC_0(VAR_10, VAR_5);
        }
    }

}
