
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, ptrdiff_t VAR_1, const uint8_t *VAR_2)
{
    int VAR_3, VAR_4;
    int VAR_5, VAR_6, VAR_7, VAR_8;
    int VAR_9, VAR_10;
    int VAR_11 = 0;
    int VAR_12 = 0;

    FUNC_0(VAR_0, 0, 8);


    VAR_9 = VAR_10 = VAR_2[3];
    for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
            int VAR_13 = VAR_2[3 + VAR_3 * 4 + VAR_4 * VAR_1];
            if (VAR_13 < VAR_9)
                VAR_9 = VAR_13;
            else if (VAR_13 > VAR_10)
                VAR_10 = VAR_13;
        }
    }


    VAR_0[0] = (uint8_t) VAR_10;
    VAR_0[1] = (uint8_t) VAR_9;
    VAR_0 += 2;


    if (VAR_9 == VAR_10)
        return;




    VAR_5 = VAR_10 - VAR_9;

    VAR_7 = VAR_5 * 4;
    VAR_8 = VAR_5 * 2;
    if (VAR_5 < 8)
        VAR_6 = VAR_5 - 1 - VAR_9 * 7;
    else
        VAR_6 = VAR_5 / 2 + 2 - VAR_9 * 7;

    for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
            int VAR_14 = VAR_2[3 + VAR_3 * 4 + VAR_4 * VAR_1] * 7 + VAR_6;
            int VAR_15, VAR_16;



            VAR_16 = (VAR_14 >= VAR_7) ? -1 : 0;
            VAR_15 = VAR_16 & 4;
            VAR_14 -= VAR_7 & VAR_16;
            VAR_16 = (VAR_14 >= VAR_8) ? -1 : 0;
            VAR_15 += VAR_16 & 2;
            VAR_14 -= VAR_8 & VAR_16;
            VAR_15 += (VAR_14 >= VAR_5);


            VAR_15 = -VAR_15 & 7;
            VAR_15 ^= (2 > VAR_15);


            VAR_12 |= VAR_15 << VAR_11;
            VAR_11 += 3;
            if (VAR_11 >= 8) {
                *VAR_0++ = VAR_12;
                VAR_12 >>= 8;
                VAR_11 -= 8;
            }
        }
    }
}
