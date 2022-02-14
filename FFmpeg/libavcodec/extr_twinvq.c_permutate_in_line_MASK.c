
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;
typedef enum TwinVQFrameType { ____Placeholder_TwinVQFrameType } TwinVQFrameType ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(int16_t *VAR_1, int VAR_2, int VAR_3,
                              int VAR_4,
                              const uint8_t VAR_5[2], int VAR_6,
                              enum TwinVQFrameType VAR_7)
{
    int VAR_8, VAR_9;

    for (VAR_8 = 0; VAR_8 < VAR_5[0]; VAR_8++) {
        int VAR_10;

        if (VAR_3 == 1 ||
            (VAR_7 == VAR_0 && VAR_2 % VAR_3) ||
            (VAR_7 != VAR_0 && VAR_2 & 1) ||
            VAR_8 == VAR_5[1]) {
            VAR_10 = 0;
        } else if (VAR_7 == VAR_0) {
            VAR_10 = VAR_8;
        } else
            VAR_10 = VAR_8 * VAR_8;

        for (VAR_9 = 0; VAR_9 < VAR_2 && (VAR_9 + VAR_2 * VAR_8 < VAR_4 * VAR_3); VAR_9++)
            VAR_1[VAR_8 * VAR_2 + VAR_9] = VAR_8 * VAR_2 + (VAR_9 + VAR_10) % VAR_2;
    }
}
