
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int int8_t ;


 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int const,int const) ;

__attribute__((used)) static void FUNC_2(int VAR_0, int VAR_1,
                       uint16_t *VAR_2, int VAR_3,
                         int8_t *VAR_4, int VAR_5,
                  const uint8_t *VAR_6, int VAR_7)
{
    int VAR_8, VAR_9;

    for (VAR_9 = 1; VAR_9 < VAR_1 - 1; VAR_9++) {
        VAR_2 += VAR_3;
        VAR_4 += VAR_5;
        VAR_6 += VAR_7;
        for (VAR_8 = 1; VAR_8 < VAR_0 - 1; VAR_8++) {
            const int VAR_10 =
                -1*VAR_6[-VAR_7 + VAR_8-1] + 1*VAR_6[-VAR_7 + VAR_8+1]
                -2*VAR_6[ VAR_8-1] + 2*VAR_6[ VAR_8+1]
                -1*VAR_6[ VAR_7 + VAR_8-1] + 1*VAR_6[ VAR_7 + VAR_8+1];
            const int VAR_11 =
                -1*VAR_6[-VAR_7 + VAR_8-1] + 1*VAR_6[ VAR_7 + VAR_8-1]
                -2*VAR_6[-VAR_7 + VAR_8 ] + 2*VAR_6[ VAR_7 + VAR_8 ]
                -1*VAR_6[-VAR_7 + VAR_8+1] + 1*VAR_6[ VAR_7 + VAR_8+1];

            VAR_2[VAR_8] = FUNC_0(VAR_10) + FUNC_0(VAR_11);
            VAR_4[VAR_8] = FUNC_1(VAR_10, VAR_11);
        }
    }
}
