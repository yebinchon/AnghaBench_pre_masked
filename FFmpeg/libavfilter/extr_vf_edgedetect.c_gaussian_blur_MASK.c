
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVFilterContext ;


 int FUNC_0 (int*,int const*,int) ;

__attribute__((used)) static void FUNC_1(AVFilterContext *VAR_0, int VAR_1, int VAR_2,
                                uint8_t *VAR_3, int VAR_4,
                          const uint8_t *VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;

    FUNC_0(VAR_3, VAR_5, VAR_1); VAR_3 += VAR_4; VAR_5 += VAR_6;
    if (VAR_2 > 1) {
        FUNC_0(VAR_3, VAR_5, VAR_1); VAR_3 += VAR_4; VAR_5 += VAR_6;
    }
    for (VAR_8 = 2; VAR_8 < VAR_2 - 2; VAR_8++) {
        VAR_3[0] = VAR_5[0];
        if (VAR_1 > 1)
            VAR_3[1] = VAR_5[1];
        for (VAR_7 = 2; VAR_7 < VAR_1 - 2; VAR_7++) {

            VAR_3[VAR_7] = ((VAR_5[-2*VAR_6 + VAR_7-2] + VAR_5[2*VAR_6 + VAR_7-2]) * 2
                    + (VAR_5[-2*VAR_6 + VAR_7-1] + VAR_5[2*VAR_6 + VAR_7-1]) * 4
                    + (VAR_5[-2*VAR_6 + VAR_7 ] + VAR_5[2*VAR_6 + VAR_7 ]) * 5
                    + (VAR_5[-2*VAR_6 + VAR_7+1] + VAR_5[2*VAR_6 + VAR_7+1]) * 4
                    + (VAR_5[-2*VAR_6 + VAR_7+2] + VAR_5[2*VAR_6 + VAR_7+2]) * 2

                    + (VAR_5[ -VAR_6 + VAR_7-2] + VAR_5[ VAR_6 + VAR_7-2]) * 4
                    + (VAR_5[ -VAR_6 + VAR_7-1] + VAR_5[ VAR_6 + VAR_7-1]) * 9
                    + (VAR_5[ -VAR_6 + VAR_7 ] + VAR_5[ VAR_6 + VAR_7 ]) * 12
                    + (VAR_5[ -VAR_6 + VAR_7+1] + VAR_5[ VAR_6 + VAR_7+1]) * 9
                    + (VAR_5[ -VAR_6 + VAR_7+2] + VAR_5[ VAR_6 + VAR_7+2]) * 4

                    + VAR_5[VAR_7-2] * 5
                    + VAR_5[VAR_7-1] * 12
                    + VAR_5[VAR_7 ] * 15
                    + VAR_5[VAR_7+1] * 12
                    + VAR_5[VAR_7+2] * 5) / 159;
        }
        if (VAR_1 > 2)
            VAR_3[VAR_7 ] = VAR_5[VAR_7 ];
        if (VAR_1 > 3)
            VAR_3[VAR_7 + 1] = VAR_5[VAR_7 + 1];

        VAR_3 += VAR_4;
        VAR_5 += VAR_6;
    }
    if (VAR_2 > 2) {
        FUNC_0(VAR_3, VAR_5, VAR_1); VAR_3 += VAR_4; VAR_5 += VAR_6;
    }
    if (VAR_2 > 3)
        FUNC_0(VAR_3, VAR_5, VAR_1);
}
