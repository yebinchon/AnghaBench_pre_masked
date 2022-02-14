
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int8_t ;


 int FUNC_0 (int*,int ,int const*,int*,int,int,int) ;

__attribute__((used)) static inline void FUNC_1(uint8_t *VAR_0, ptrdiff_t VAR_1,
                                        const uint8_t *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7[8];
    int VAR_8, VAR_9;

    if (VAR_3) {


        VAR_8 = ((int8_t) VAR_2[0]) + 128;
        VAR_9 = ((int8_t) VAR_2[1]) + 128;
    } else {
        VAR_8 = VAR_2[0];
        VAR_9 = VAR_2[1];
    }

    VAR_7[0] = VAR_8;
    VAR_7[1] = VAR_9;

    if (VAR_8 > VAR_9) {

        VAR_7[2] = (6 * VAR_8 + 1 * VAR_9) / 7;
        VAR_7[3] = (5 * VAR_8 + 2 * VAR_9) / 7;
        VAR_7[4] = (4 * VAR_8 + 3 * VAR_9) / 7;
        VAR_7[5] = (3 * VAR_8 + 4 * VAR_9) / 7;
        VAR_7[6] = (2 * VAR_8 + 5 * VAR_9) / 7;
        VAR_7[7] = (1 * VAR_8 + 6 * VAR_9) / 7;
    } else {

        VAR_7[2] = (4 * VAR_8 + 1 * VAR_9) / 5;
        VAR_7[3] = (3 * VAR_8 + 2 * VAR_9) / 5;
        VAR_7[4] = (2 * VAR_8 + 3 * VAR_9) / 5;
        VAR_7[5] = (1 * VAR_8 + 4 * VAR_9) / 5;
        VAR_7[6] = 0;
        VAR_7[7] = 255;
    }

    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_7, VAR_4, VAR_5, VAR_6);
}
